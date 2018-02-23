#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    double total = 0;
    double homework_score = 0;
    double midterm1_score = 0;
    double midterm2_score = 0;
    double final_score = 0;

    QString hw1 = ui->Hw1_spin->text();
    QString hw2 = ui->Hw2_spin->text();
    QString hw3 = ui->Hw3_spin->text();
    QString hw4 = ui->Hw4_spin->text();
    QString hw5 = ui->Hw5_spin->text();
    QString hw6 = ui->Hw6_spin->text();
    QString hw7 = ui->Hw7_spin->text();
    QString hw8 = ui->Hw8_spin->text();
    QString midterm1 = ui->Mt1_spin->text();
    QString midterm2 = ui->Mt2_spin->text();
    QString final = ui->Final_spin->text();

    //schema A
    if(scheme_A == true){
        homework_score = (hw1.toDouble()+ hw2.toDouble()+hw3.toDouble()+hw4.toDouble()+
                          hw5.toDouble()+hw6.toDouble()+hw7.toDouble()+hw8.toDouble())/8;
        midterm1_score = midterm1.toDouble();
        midterm2_score = midterm2.toDouble();
        final_score = final.toDouble();

        total = .25 * homework_score + .2 * midterm1_score + .2 * midterm2_score + .35 * final_score;
    }

    else{
        homework_score = (hw1.toDouble()+ hw2.toDouble()+hw3.toDouble()+hw4.toDouble()+
                      hw5.toDouble()+hw6.toDouble()+hw7.toDouble()+hw8.toDouble())/8;
        midterm1_score = midterm1.toDouble();
        midterm2_score = midterm2.toDouble();
        final_score = final.toDouble();

        if(midterm1_score > midterm2_score)
            total =  .25 * homework_score + .3 * midterm1_score + .45 * final_score;

        else
            total =  .25 * homework_score + .3 * midterm2_score + .45 * final_score;
    }

    ui->Score_display->setText(QString::number(total));


}


void MainWindow::on_Schema_Box_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "Scheme A")
        scheme_A = true;

    if(arg1 == "Scheme B")
        scheme_A = false;
}
