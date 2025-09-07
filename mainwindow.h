#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QString>
#include <QStack>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // 按钮点击通用槽函数（数字、运算符、括号等）
    void onButtonClicked();
    // 等于号槽函数（解析表达式）
    void on_pushButtonEqual_clicked();
    // 清除槽函数
    void on_pushButtonClear_clicked();

private slots:
    void on_pushButtonDelete_clicked();

private:
    Ui::MainWindow *ui;
    QString expression;  // 存储完整表达式
    // 解析并计算表达式的核心函数
    double calculateExpression(const QString &expr);
    // 辅助函数：判断字符是否为运算符
    bool isOperator(const QChar &c);
    // 辅助函数：获取运算符优先级
    int getPriority(const QChar &op);

};
#endif // MAINWINDOW_H
