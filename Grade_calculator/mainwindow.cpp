#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Final_Project->hide();
    ui->Final_Project_slider->hide();
    ui->Final_Project_spin->hide();
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
    double final_project_score = 0;

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
    QString final_project = ui->Final_Project_spin->text();

    if(pic10b == true){
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
    }

    else{
        //schema A
        if(scheme_A == true){
            homework_score = (hw1.toDouble()+ hw2.toDouble()+hw3.toDouble()/3);
            midterm1_score = midterm1.toDouble();
            final_score = final.toDouble();
            final_project_score = final_project.toDouble();

            total = .15 * homework_score + .25 * midterm1_score + .3 * final_score + .35 * final_project_score;
        }

        else{
            homework_score = (hw1.toDouble()+ hw2.toDouble()+hw3.toDouble()+hw4.toDouble()+
                              hw5.toDouble()+hw6.toDouble()+hw7.toDouble()+hw8.toDouble())/8;
            final_score = final.toDouble();
            final_project_score = final_project.toDouble();

            total =  .15 * homework_score + .5 * final_score + .35 * final_project_score;
        }

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

void MainWindow::on_Schema_Box_2_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "Pic 10B Grade Calculator"){
        pic10b = true;
        ui->Homework_4->show();
        ui->Homework_5->show();
        ui->Homework_6->show();
        ui->Homework_7->show();
        ui->Homework_8->show();
        ui->Midterm_2->show();

        ui->Hw4_slider->show();
        ui->Hw5_slider->show();
        ui->Hw6_slider->show();
        ui->Hw7_slider->show();
        ui->Hw8_slider->show();
        ui->Mt2_slider->show();

        ui->Hw4_spin->show();
        ui->Hw5_spin->show();
        ui->Hw6_spin->show();
        ui->Hw7_spin->show();
        ui->Hw8_spin->show();
        ui->Mt2_spin->show();

        ui->Final_Project->hide();
        ui->Final_Project_slider->hide();
        ui->Final_Project_spin->hide();
    }

    if(arg1 == "Pic 10C Grade Calculator"){
        pic10b = false;
        ui->Homework_4->hide();
        ui->Homework_5->hide();
        ui->Homework_6->hide();
        ui->Homework_7->hide();
        ui->Homework_8->hide();
        ui->Midterm_2->hide();

        ui->Hw4_slider->hide();
        ui->Hw5_slider->hide();
        ui->Hw6_slider->hide();
        ui->Hw7_slider->hide();
        ui->Hw8_slider->hide();
        ui->Mt2_slider->hide();

        ui->Hw4_spin->hide();
        ui->Hw5_spin->hide();
        ui->Hw6_spin->hide();
        ui->Hw7_spin->hide();
        ui->Hw8_spin->hide();
        ui->Mt2_spin->hide();

        ui->Final_Project->show();
        ui->Final_Project_slider->show();
        ui->Final_Project_spin->show();
    }

}
