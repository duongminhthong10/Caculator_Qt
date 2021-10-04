#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringBuilder>
#include <QString>
#include <QTextStream>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    double a;
    double b;
    double ketqua;
    QString c;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn8_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn9_clicked();

    void on_btn0_clicked();

    void on_btnClear_clicked();

    void on_btnNhan_clicked();

    void on_btnChia_clicked();

    void on_btnCong_clicked();

    void on_btnTru_clicked();

    void on_btnBang_clicked();

    void on_btnBackspace_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
