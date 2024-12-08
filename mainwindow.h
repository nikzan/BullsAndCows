#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class BullsAndCowsGame;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startButton_clicked();
    void on_guessButton_clicked();
    void on_hintButton_clicked();
    void on_helpButton_clicked();
    void on_guessInput1_textChanged(const QString &text);
    void on_guessInput2_textChanged(const QString &text);
    void on_guessInput3_textChanged(const QString &text);
    void on_guessInput4_textChanged(const QString &text);

private:
    Ui::MainWindow *ui;
    BullsAndCowsGame *game;
    int currentAttempt;
};

#endif // MAINWINDOW_H