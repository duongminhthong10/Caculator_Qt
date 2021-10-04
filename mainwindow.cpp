#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Caculator");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn1_clicked()
{
    QString number1 = ui->btn1->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn2_clicked()
{
    QString number1 = ui->btn2->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn8_clicked()
{
    QString number1 = ui->btn8->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn3_clicked()
{
    QString number1 = ui->btn3->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn4_clicked()
{
    QString number1 = ui->btn4->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn5_clicked()
{
    QString number1 = ui->btn5->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn6_clicked()
{
    QString number1 = ui->btn6->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn7_clicked()
{
    QString number1 = ui->btn7->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn9_clicked()
{
    QString number1 = ui->btn9->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btn0_clicked()
{
    QString number1 = ui->btn0->text();
    QString number2 = ui->lineEdit->text();
    QString number = number2 + number1;
    ui->lineEdit->setText(number);
    QString number3 = ui->smallDisplay->text();
    QString number4 = number3 + number1;
    ui->smallDisplay->setText(number4);
}


void MainWindow::on_btnClear_clicked()
{
    ui->lineEdit->setText("");
    ui->smallDisplay->setText("");
}


void MainWindow::on_btnNhan_clicked()
{
    a = ui->lineEdit->text().toDouble();
    c = "*";
    ui->lineEdit->setText("");
    ui->smallDisplay->setText(ui->smallDisplay->text() + c);

}


void MainWindow::on_btnChia_clicked()
{
    a = ui->lineEdit->text().toDouble();
    c = "/";
    ui->lineEdit->setText("");
    ui->smallDisplay->setText(ui->smallDisplay->text() + c);
}


void MainWindow::on_btnCong_clicked()
{
    a = ui->lineEdit->text().toDouble();
    c = "+";
    ui->lineEdit->setText("");
    ui->smallDisplay->setText(ui->smallDisplay->text() + c);
}


void MainWindow::on_btnTru_clicked()
{
    a = ui->lineEdit->text().toDouble();
    c = "-";
    ui->lineEdit->setText("");
    ui->smallDisplay->setText(ui->smallDisplay->text() + c);
}


void MainWindow::on_btnBang_clicked()
{
    QString result;
    b = ui->lineEdit->text().toDouble();
    if (c == "+")
    {
        ketqua = a + b;
        result = QString::number(ketqua);
        ui->lineEdit->setText(result);
        ui->smallDisplay->setText("");
        ui->smallDisplay->setText(result);
    }
    else if (c == "-")
    {
        ketqua = a - b;
        result = QString::number(ketqua);
        ui->lineEdit->setText(result);
        ui->smallDisplay->setText("");
        ui->smallDisplay->setText(result);
    }
    else if (c == "*")
    {
        ketqua = a * b;
        result = QString::number(ketqua);
        ui->lineEdit->setText(result);
        ui->smallDisplay->setText("");
        ui->smallDisplay->setText(result);
    }
    else
    {
        ketqua = a / b;
        result = QString::number(ketqua);
        ui->lineEdit->setText(result);
        ui->smallDisplay->setText("");
        ui->smallDisplay->setText(result);
    }
}


void MainWindow::on_btnBackspace_clicked()
{
    if (ui->lineEdit->text() != "0")
    {
        ui->lineEdit->setText(ui->lineEdit->text().mid(0,ui->lineEdit->text().size() - 1));
        ui->smallDisplay->setText(ui->smallDisplay->text().mid(0,ui->smallDisplay->text().size() - 1));
    }

}

