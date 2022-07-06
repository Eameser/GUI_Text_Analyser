#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

private:
    Ui::MainWindow *ui;
    //QVector <text*> text_vector;

    //int cell = -1;
    int size = 0;
    int counter = 0;
    int z_counter = 0;
    int big_counter = 0;
    int num_counter = 0;
    int start = 0;
    int end = 0;
};

#endif // MAINWINDOW_H
