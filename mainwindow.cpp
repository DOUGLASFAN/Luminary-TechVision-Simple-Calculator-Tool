#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include <QStack>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 设置窗口标题
    setWindowTitle("光龙锐志Luminary TechVision简易计算器工具");

    // 设置窗口图标
    setWindowIcon(QIcon("icon.ico"));

    // 连接数字按钮
    connect(ui->pushButton0, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton1, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton2, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton3, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton4, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton5, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton6, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton7, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton8, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButton9, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButtonDot, &QPushButton::clicked, this, &MainWindow::onButtonClicked);


    connect(ui->pushButtonAdd, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButtonSubtract, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButtonMultiply, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButtonDivide, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButtonLeftBracket, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect(ui->pushButtonRightBracket, &QPushButton::clicked, this, &MainWindow::onButtonClicked);

    connect(ui->pushButtonClear, &QPushButton::clicked, this, &MainWindow::on_pushButtonClear_clicked);

    connect(ui->pushButtonEqual, &QPushButton::clicked, this, &MainWindow::on_pushButtonEqual_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}



// 通用按钮点击槽函数：拼接表达式
void MainWindow::onButtonClicked()
{
    //获取当前点击的按钮
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString text = button->text();

    expression += text;  // 追加到表达式字符串

    ui->lineEdit->setText(expression);  // 实时显示表达式
}

// 清除按钮
void MainWindow::on_pushButtonClear_clicked()
{
    expression = "";
    ui->lineEdit->clear();
}


// 判断是否为运算符
bool MainWindow::isOperator(const QChar &c)
{
    return c == "+" || c == "-" || c == "×" || c == "÷";
}


// 获取运算符优先级（×、÷ 优先级高于 +、-）
int MainWindow::getPriority(const QChar &op)
{
    if (op == "×" || op == "÷")
        return 2;
    if (op == "+" || op == "-")
        return 1;
    return 0;
}

// 核心：解析并计算表达式（使用调度场算法）
double MainWindow::calculateExpression(const QString &expr)
{
    QStack<double> values;    // 存储操作数
    QStack<QChar> operators;  // 存储运算符

    for (int i = 0; i < expr.size(); ++i) {
        QChar c = expr.at(i);

        // 情况1：跳过空格
        if (c.isSpace())
            continue;

        // 情况2：处理数字
        if (c.isDigit() || c == '.') {
            QString numStr;

            while (i < expr.size() && (expr.at(i).isDigit() || expr.at(i) == '.')) {
                //形成完整的数字
                //字符串保存
                numStr += expr.at(i++);
            }
            i--;  // 回退一个位置，因为for循环会i++
            //存入value里面
            values.push(numStr.toDouble());
        }

        // 情况3：处理左括号
        else if (c == '(') {
            //压入操作栈里面
            operators.push(c);
        }
        // 情况4：处理右括号
        else if (c == ')') {
            while (!operators.isEmpty() && operators.top() != '(') {
                //弹出操作符里面第一个符号
                QChar op = operators.pop();
                double b = values.pop();
                double a = values.pop();

                if (op == "+") values.push(a + b);
                else if (op == "-") values.push(a - b);
                else if (op == "×") values.push(a * b);
                else if (op == "÷") values.push(a / b);
            }

            if (!operators.isEmpty() && operators.top() == '(')
                operators.pop();  // 弹出左括号
        }
        // 情况5：处理运算符
        else if (isOperator(c)) {
            while (!operators.isEmpty() && operators.top() != '(' &&
                   getPriority(operators.top()) >= getPriority(c)) {
                QChar op = operators.pop();
                double b = values.pop();
                double a = values.pop();
                if (op == "+") values.push(a + b);
                else if (op == "-") values.push(a - b);
                else if (op == "×") values.push(a * b);
                else if (op == "÷") values.push(a / b);
            }
            operators.push(c);
        }
    }

    // 处理剩余的运算符
    while (!operators.isEmpty()) {
        QChar op = operators.pop();
        double b = values.pop();
        double a = values.pop();
        if (op == "+") values.push(a + b);
        else if (op == "-") values.push(a - b);
        else if (op == "×") values.push(a * b);
        else if (op == "÷") values.push(a / b);
    }

    return values.top();  // 最终结果
}

// 等于号槽函数：解析并显示结果
void MainWindow::on_pushButtonEqual_clicked()
{
    if (!expression.isEmpty()) {
        double result = calculateExpression(expression);
        ui->lineEdit_2->setText(expression);
        ui->lineEdit->setText(QString::number(result));
        expression = QString::number(result);  // 结果作为下一次计算的初始值
    }
}

void MainWindow::on_pushButtonDelete_clicked()
{
    if (!expression.isEmpty()) { // 确保表达式不为空
        expression.chop(1); // 删除最后一个字符
        ui->lineEdit->setText(expression); // 更新显示
    }
}

