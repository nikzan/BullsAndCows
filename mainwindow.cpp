#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "BullsAndCowsGame.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , game(nullptr)
    , currentAttempt(0)
{
    ui->setupUi(this);

    connect(ui->guessInput1, &QLineEdit::textChanged, this, &MainWindow::on_guessInput1_textChanged);
    connect(ui->guessInput2, &QLineEdit::textChanged, this, &MainWindow::on_guessInput2_textChanged);
    connect(ui->guessInput3, &QLineEdit::textChanged, this, &MainWindow::on_guessInput3_textChanged);
    connect(ui->guessInput4, &QLineEdit::textChanged, this, &MainWindow::on_guessInput4_textChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete game;
}

void MainWindow::on_startButton_clicked()
{
    delete game;
    game = new BullsAndCowsGame();
    currentAttempt = 0;
    ui->attemptsLabel->setText("Попытки: 0");
    ui->resultLabel->clear();
    ui->guessInput1->clear();
    ui->guessInput2->clear();
    ui->guessInput3->clear();
    ui->guessInput4->clear();
    ui->guessInput1->setFocus(); // Устанавливаем фокус на первое поле ввода
}

void MainWindow::on_guessButton_clicked()
{
    if (!game) return;

    QString guess = ui->guessInput1->text() + ui->guessInput2->text() + ui->guessInput3->text() + ui->guessInput4->text();
    if (!game->isValidGuess(guess.toStdString())) {
        QMessageBox::warning(this, "Ошибка", "Некорректный ввод! Введите 4 разные цифры.");
        ui->guessInput1->clear();
        ui->guessInput2->clear();
        ui->guessInput3->clear();
        ui->guessInput4->clear();
        ui->guessInput1->setFocus();
        return;
    }

    auto [bulls, cows] = game->checkGuess(guess.toStdString());
    currentAttempt++;
    ui->attemptsLabel->setText("Попытки: " + QString::number(currentAttempt) + " / " + QString::number(game->getMaxAttempts()));
    ui->resultLabel->setText("Быки: " + QString::number(bulls) + ", Коровы: " + QString::number(cows) + "\nПоследняя попытка: " + guess);

    ui->guessInput1->clear();
    ui->guessInput2->clear();
    ui->guessInput3->clear();
    ui->guessInput4->clear();
    ui->guessInput1->setFocus();

    if (bulls == 4) {
        QMessageBox::information(this, "Победа", "Поздравляю! Вы угадали число!");
        delete game;
        game = nullptr;
    } else if (currentAttempt >= game->getMaxAttempts()) {
        QMessageBox::information(this, "Проигрыш", "Игра окончена. Загаданное число было: " + QString::fromStdString(game->getSecretNumber()));
        delete game;
        game = nullptr;
    }
}

void MainWindow::on_hintButton_clicked()
{
    if (!game) return;

    static int hintCount = 0;
    QString secretNumber = QString::fromStdString(game->getSecretNumber());
    QString hint = "____";

    for (int i = 0; i <= hintCount && i < 4; ++i) {
        hint[i] = secretNumber[i];
    }

    ui->resultLabel->setText("Подсказка: " + hint);

    hintCount++;
    if (hintCount >= 4) {
        currentAttempt = game->getMaxAttempts();
        QMessageBox::information(this, "Проигрыш", "Игра окончена. Загаданное число было: " + secretNumber);
        delete game;
        game = nullptr;
        hintCount = 0;
    }
}
void MainWindow::on_helpButton_clicked()
{
    // Логика кнопки помощи
}

void MainWindow::on_guessInput1_textChanged(const QString &text)
{
    if (text.length() == 1) {
        ui->guessInput2->setFocus();
    }
}

void MainWindow::on_guessInput2_textChanged(const QString &text)
{
    if (text.length() == 1) {
        ui->guessInput3->setFocus();
    }
}

void MainWindow::on_guessInput3_textChanged(const QString &text)
{
    if (text.length() == 1) {
        ui->guessInput4->setFocus();
    }
}

void MainWindow::on_guessInput4_textChanged(const QString &text)
{
    // Последнее поле ввода, не перемещаем фокус
}