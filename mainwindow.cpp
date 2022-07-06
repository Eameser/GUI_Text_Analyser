#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QFile>
#include <QDataStream>
#include <QTextStream>
#include <QCoreApplication>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString text = ui->lineEdit->text();

    for (int i = 0; i < text.length(); i++)
    {
                    if (text.at(i).isNumber())
                    {
                        num_counter++;
                    }
    }

    int r = 0;
    if(text.length()-size == 1){
    if(text.length() == 1){
    if(!text.at(0).isSpace()){
        counter++;
        r=counter-num_counter;
        ui->label_3->setText(QString::number(r));
    }}

    if(text.length()>2){
    start = text.length()-1;
    end = text.length();
    if(text.at(start-1).isSpace() && !text.at(end-1).isSpace()){
        counter++;
        r=counter-num_counter;
        ui->label_3->setText(QString::number(r));
    }}}
    else if(text.length()-size > 1){
    counter = 0;
    if(!text.at(0).isSpace())
    {
        counter++;
        r=counter-num_counter;
    }

        for(int i = 1; i<text.length();i++){
            if(!text.at(i).isSpace() && text.at(i-1).isSpace())
            {
                counter++;
                r=counter-num_counter;
            }
        }

        for (int i = 0; i < text.length(); i++)
        {
                        if (text.at(i).isPunct())
                        {
                            z_counter++;
                        }
        }

        for (int i = 0; i < text.length(); i++)
        {
                        if (text.at(i).isUpper())
                        {
                            big_counter++;
                        }
        }


        ui->label_3->setText(QString::number(r));
        ui->label_8->setText(QString::number(z_counter));

        ui->label_12->setText(QString::number(num_counter));
    }
    size = text.length();


    QFile file("C:/Users/Zver/Desktop/praktika/qt/save/1.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream writeStream(&file);
        writeStream << "Words : "<< r << endl
                    << "Punctuation marks :" << z_counter << endl
                    << "Capital letters :" << big_counter << endl
                    << "Amount of numbers :" << num_counter << endl;
        file.close();
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QString text = ui->lineEdit->text();
    QString word = ui->lineEdit_2->text();
    int c = text.count(word);

    ui->label_6->setText(QString::number(c));
    QFile file("C:/Users/Veiamin/Desktop/prakt/1.txt");
    if(file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream writeStream(&file);
        writeStream << "Amount of your word :" << c;
        file.close();
    }
}




void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}
