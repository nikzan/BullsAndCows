/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QLabel *gameTitle;
    QHBoxLayout *contentLayout;
    QVBoxLayout *leftLayout;
    QPushButton *startButton;
    QPushButton *hintButton;
    QPushButton *helpButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *rightLayout;
    QHBoxLayout *guessLayout;
    QLineEdit *guessInput1;
    QLineEdit *guessInput2;
    QLineEdit *guessInput3;
    QLineEdit *guessInput4;
    QPushButton *guessButton;
    QLabel *attemptsLabel;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(200, 150);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"    background-color: #f0f4f8;\n"
"    font-family: Arial, sans-serif;\n"
"    }\n"
"\n"
"    QPushButton {\n"
"    background-color: #4a90e2;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"    }\n"
"\n"
"    QPushButton:hover {\n"
"    background-color: #357abd;\n"
"    }\n"
"\n"
"    QLineEdit {\n"
"    border: 2px solid #4a90e2;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"    font-size: 16px;\n"
"    text-align: center;\n"
"    width: 40px;\n"
"    }\n"
"\n"
"    QLabel {\n"
"    color: #2c3e50;\n"
"    font-size: 14px;\n"
"    }\n"
"   "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setSpacing(20);
        mainLayout->setObjectName("mainLayout");
        gameTitle = new QLabel(centralwidget);
        gameTitle->setObjectName("gameTitle");
        gameTitle->setAlignment(Qt::AlignCenter);
        gameTitle->setStyleSheet(QString::fromUtf8("\n"
"        font-size: 24px;\n"
"        font-weight: bold;\n"
"        color: #2c3e50;\n"
"       "));

        mainLayout->addWidget(gameTitle);

        contentLayout = new QHBoxLayout();
        contentLayout->setObjectName("contentLayout");
        leftLayout = new QVBoxLayout();
        leftLayout->setObjectName("leftLayout");
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");

        leftLayout->addWidget(startButton);

        hintButton = new QPushButton(centralwidget);
        hintButton->setObjectName("hintButton");

        leftLayout->addWidget(hintButton);

        helpButton = new QPushButton(centralwidget);
        helpButton->setObjectName("helpButton");

        leftLayout->addWidget(helpButton);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        leftLayout->addItem(verticalSpacer);


        contentLayout->addLayout(leftLayout);

        rightLayout = new QVBoxLayout();
        rightLayout->setObjectName("rightLayout");
        guessLayout = new QHBoxLayout();
        guessLayout->setObjectName("guessLayout");
        guessInput1 = new QLineEdit(centralwidget);
        guessInput1->setObjectName("guessInput1");
        guessInput1->setMaxLength(1);

        guessLayout->addWidget(guessInput1);

        guessInput2 = new QLineEdit(centralwidget);
        guessInput2->setObjectName("guessInput2");
        guessInput2->setMaxLength(1);

        guessLayout->addWidget(guessInput2);

        guessInput3 = new QLineEdit(centralwidget);
        guessInput3->setObjectName("guessInput3");
        guessInput3->setMaxLength(1);

        guessLayout->addWidget(guessInput3);

        guessInput4 = new QLineEdit(centralwidget);
        guessInput4->setObjectName("guessInput4");
        guessInput4->setMaxLength(1);

        guessLayout->addWidget(guessInput4);


        rightLayout->addLayout(guessLayout);

        guessButton = new QPushButton(centralwidget);
        guessButton->setObjectName("guessButton");

        rightLayout->addWidget(guessButton);

        attemptsLabel = new QLabel(centralwidget);
        attemptsLabel->setObjectName("attemptsLabel");
        attemptsLabel->setAlignment(Qt::AlignCenter);

        rightLayout->addWidget(attemptsLabel);

        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setAlignment(Qt::AlignCenter);
        resultLabel->setStyleSheet(QString::fromUtf8("\n"
"            color: #27ae60;\n"
"            font-weight: bold;\n"
"           "));

        rightLayout->addWidget(resultLabel);


        contentLayout->addLayout(rightLayout);


        mainLayout->addLayout(contentLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\221\321\213\320\272\320\270 \320\270 \320\232\320\276\321\200\320\276\320\262\321\213", nullptr));
        gameTitle->setText(QCoreApplication::translate("MainWindow", "\320\221\321\213\320\272\320\270 \320\270 \320\232\320\276\321\200\320\276\320\262\321\213", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        hintButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\260", nullptr));
        helpButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260", nullptr));
        guessInput1->setPlaceholderText(QCoreApplication::translate("MainWindow", "1", nullptr));
        guessInput2->setPlaceholderText(QCoreApplication::translate("MainWindow", "2", nullptr));
        guessInput3->setPlaceholderText(QCoreApplication::translate("MainWindow", "3", nullptr));
        guessInput4->setPlaceholderText(QCoreApplication::translate("MainWindow", "4", nullptr));
        guessButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        attemptsLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\277\321\213\321\202\320\272\320\270: 0", nullptr));
        resultLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
