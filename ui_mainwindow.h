/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButtonEqual;
    QPushButton *pushButton4;
    QPushButton *pushButton9;
    QPushButton *pushButton7;
    QPushButton *pushButtonDot;
    QPushButton *pushButtonMultiply;
    QPushButton *pushButton5;
    QPushButton *pushButtonAdd;
    QPushButton *pushButton8;
    QPushButton *pushButtonRightShift;
    QPushButton *pushButtonRightBracket;
    QPushButton *pushButtonLeftShift;
    QPushButton *pushButton0;
    QPushButton *pushButtonLeftBracket;
    QPushButton *pushButtonMod;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonSubtract;
    QPushButton *pushButton3;
    QPushButton *pushButton1;
    QPushButton *pushButtonDivide;
    QPushButton *pushButton2;
    QPushButton *pushButton6;
    QPushButton *pushButtonSign;
    QPushButton *pushButtonDelete;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(347, 532);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 322, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMaximumSize(QSize(16777215, 60));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(16777215, 60));

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButtonEqual = new QPushButton(verticalLayoutWidget);
        pushButtonEqual->setObjectName("pushButtonEqual");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonEqual->sizePolicy().hasHeightForWidth());
        pushButtonEqual->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(21);
        font.setBold(true);
        font.setItalic(false);
        pushButtonEqual->setFont(font);

        gridLayout->addWidget(pushButtonEqual, 5, 3, 1, 1);

        pushButton4 = new QPushButton(verticalLayoutWidget);
        pushButton4->setObjectName("pushButton4");
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(21);
        font1.setBold(true);
        pushButton4->setFont(font1);

        gridLayout->addWidget(pushButton4, 3, 0, 1, 1);

        pushButton9 = new QPushButton(verticalLayoutWidget);
        pushButton9->setObjectName("pushButton9");
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);
        pushButton9->setFont(font1);

        gridLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButton7 = new QPushButton(verticalLayoutWidget);
        pushButton7->setObjectName("pushButton7");
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);
        pushButton7->setFont(font1);

        gridLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButtonDot = new QPushButton(verticalLayoutWidget);
        pushButtonDot->setObjectName("pushButtonDot");
        sizePolicy.setHeightForWidth(pushButtonDot->sizePolicy().hasHeightForWidth());
        pushButtonDot->setSizePolicy(sizePolicy);
        pushButtonDot->setFont(font1);

        gridLayout->addWidget(pushButtonDot, 5, 2, 1, 1);

        pushButtonMultiply = new QPushButton(verticalLayoutWidget);
        pushButtonMultiply->setObjectName("pushButtonMultiply");
        sizePolicy.setHeightForWidth(pushButtonMultiply->sizePolicy().hasHeightForWidth());
        pushButtonMultiply->setSizePolicy(sizePolicy);
        pushButtonMultiply->setFont(font1);

        gridLayout->addWidget(pushButtonMultiply, 2, 3, 1, 1);

        pushButton5 = new QPushButton(verticalLayoutWidget);
        pushButton5->setObjectName("pushButton5");
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);
        pushButton5->setFont(font1);

        gridLayout->addWidget(pushButton5, 3, 1, 1, 1);

        pushButtonAdd = new QPushButton(verticalLayoutWidget);
        pushButtonAdd->setObjectName("pushButtonAdd");
        sizePolicy.setHeightForWidth(pushButtonAdd->sizePolicy().hasHeightForWidth());
        pushButtonAdd->setSizePolicy(sizePolicy);
        pushButtonAdd->setFont(font1);

        gridLayout->addWidget(pushButtonAdd, 4, 3, 1, 1);

        pushButton8 = new QPushButton(verticalLayoutWidget);
        pushButton8->setObjectName("pushButton8");
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);
        pushButton8->setFont(font1);

        gridLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButtonRightShift = new QPushButton(verticalLayoutWidget);
        pushButtonRightShift->setObjectName("pushButtonRightShift");
        sizePolicy.setHeightForWidth(pushButtonRightShift->sizePolicy().hasHeightForWidth());
        pushButtonRightShift->setSizePolicy(sizePolicy);
        pushButtonRightShift->setFont(font1);

        gridLayout->addWidget(pushButtonRightShift, 0, 1, 1, 1);

        pushButtonRightBracket = new QPushButton(verticalLayoutWidget);
        pushButtonRightBracket->setObjectName("pushButtonRightBracket");
        sizePolicy.setHeightForWidth(pushButtonRightBracket->sizePolicy().hasHeightForWidth());
        pushButtonRightBracket->setSizePolicy(sizePolicy);
        pushButtonRightBracket->setFont(font1);

        gridLayout->addWidget(pushButtonRightBracket, 1, 1, 1, 1);

        pushButtonLeftShift = new QPushButton(verticalLayoutWidget);
        pushButtonLeftShift->setObjectName("pushButtonLeftShift");
        sizePolicy.setHeightForWidth(pushButtonLeftShift->sizePolicy().hasHeightForWidth());
        pushButtonLeftShift->setSizePolicy(sizePolicy);
        pushButtonLeftShift->setFont(font1);

        gridLayout->addWidget(pushButtonLeftShift, 0, 0, 1, 1);

        pushButton0 = new QPushButton(verticalLayoutWidget);
        pushButton0->setObjectName("pushButton0");
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);
        pushButton0->setFont(font1);

        gridLayout->addWidget(pushButton0, 5, 1, 1, 1);

        pushButtonLeftBracket = new QPushButton(verticalLayoutWidget);
        pushButtonLeftBracket->setObjectName("pushButtonLeftBracket");
        sizePolicy.setHeightForWidth(pushButtonLeftBracket->sizePolicy().hasHeightForWidth());
        pushButtonLeftBracket->setSizePolicy(sizePolicy);
        pushButtonLeftBracket->setFont(font1);

        gridLayout->addWidget(pushButtonLeftBracket, 1, 0, 1, 1);

        pushButtonMod = new QPushButton(verticalLayoutWidget);
        pushButtonMod->setObjectName("pushButtonMod");
        sizePolicy.setHeightForWidth(pushButtonMod->sizePolicy().hasHeightForWidth());
        pushButtonMod->setSizePolicy(sizePolicy);
        pushButtonMod->setFont(font1);

        gridLayout->addWidget(pushButtonMod, 1, 2, 1, 1);

        pushButtonClear = new QPushButton(verticalLayoutWidget);
        pushButtonClear->setObjectName("pushButtonClear");
        sizePolicy.setHeightForWidth(pushButtonClear->sizePolicy().hasHeightForWidth());
        pushButtonClear->setSizePolicy(sizePolicy);
        pushButtonClear->setFont(font1);

        gridLayout->addWidget(pushButtonClear, 0, 2, 1, 1);

        pushButtonSubtract = new QPushButton(verticalLayoutWidget);
        pushButtonSubtract->setObjectName("pushButtonSubtract");
        sizePolicy.setHeightForWidth(pushButtonSubtract->sizePolicy().hasHeightForWidth());
        pushButtonSubtract->setSizePolicy(sizePolicy);
        pushButtonSubtract->setFont(font1);

        gridLayout->addWidget(pushButtonSubtract, 3, 3, 1, 1);

        pushButton3 = new QPushButton(verticalLayoutWidget);
        pushButton3->setObjectName("pushButton3");
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);
        pushButton3->setFont(font1);

        gridLayout->addWidget(pushButton3, 4, 2, 1, 1);

        pushButton1 = new QPushButton(verticalLayoutWidget);
        pushButton1->setObjectName("pushButton1");
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);
        pushButton1->setFont(font1);

        gridLayout->addWidget(pushButton1, 4, 0, 1, 1);

        pushButtonDivide = new QPushButton(verticalLayoutWidget);
        pushButtonDivide->setObjectName("pushButtonDivide");
        sizePolicy.setHeightForWidth(pushButtonDivide->sizePolicy().hasHeightForWidth());
        pushButtonDivide->setSizePolicy(sizePolicy);
        pushButtonDivide->setFont(font1);

        gridLayout->addWidget(pushButtonDivide, 1, 3, 1, 1);

        pushButton2 = new QPushButton(verticalLayoutWidget);
        pushButton2->setObjectName("pushButton2");
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);
        pushButton2->setFont(font1);

        gridLayout->addWidget(pushButton2, 4, 1, 1, 1);

        pushButton6 = new QPushButton(verticalLayoutWidget);
        pushButton6->setObjectName("pushButton6");
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);
        pushButton6->setFont(font1);

        gridLayout->addWidget(pushButton6, 3, 2, 1, 1);

        pushButtonSign = new QPushButton(verticalLayoutWidget);
        pushButtonSign->setObjectName("pushButtonSign");
        sizePolicy.setHeightForWidth(pushButtonSign->sizePolicy().hasHeightForWidth());
        pushButtonSign->setSizePolicy(sizePolicy);
        pushButtonSign->setFont(font1);

        gridLayout->addWidget(pushButtonSign, 5, 0, 1, 1);

        pushButtonDelete = new QPushButton(verticalLayoutWidget);
        pushButtonDelete->setObjectName("pushButtonDelete");
        sizePolicy.setHeightForWidth(pushButtonDelete->sizePolicy().hasHeightForWidth());
        pushButtonDelete->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\246\231\350\225\211\345\244\247\345\260\206\345\206\233\347\201\265\346\204\237\344\275\223")});
        font2.setPointSize(27);
        pushButtonDelete->setFont(font2);

        gridLayout->addWidget(pushButtonDelete, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 347, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButtonDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButtonMultiply->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButtonRightShift->setText(QCoreApplication::translate("MainWindow", "->", nullptr));
        pushButtonRightBracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButtonLeftShift->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonLeftBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButtonMod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButtonSubtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButtonDivide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButtonSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
