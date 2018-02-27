/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *Hw1_slider;
    QSpinBox *Hw1_spin;
    QSpinBox *Hw2_spin;
    QSlider *Hw2_slider;
    QSlider *Hw3_slider;
    QSpinBox *Hw3_spin;
    QSpinBox *Hw4_spin;
    QSlider *Hw4_slider;
    QSpinBox *Hw5_spin;
    QSlider *Hw5_slider;
    QSlider *Hw6_slider;
    QSpinBox *Hw6_spin;
    QSpinBox *Hw7_spin;
    QSlider *Hw7_slider;
    QSlider *Hw8_slider;
    QSpinBox *Hw8_spin;
    QLabel *Homework_1;
    QLabel *Homework_2;
    QLabel *Homewor_3;
    QLabel *Homework_4;
    QLabel *Homework_5;
    QLabel *Homework_6;
    QLabel *Homework_7;
    QLabel *Homework_8;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QLabel *Midterm_1;
    QSpinBox *Mt1_spin;
    QSlider *Mt1_slider;
    QFrame *line_8;
    QFrame *line_9;
    QSpinBox *Mt2_spin;
    QFrame *line_10;
    QSlider *Mt2_slider;
    QLabel *Midterm_2;
    QSpinBox *Final_spin;
    QLabel *Final;
    QFrame *line_11;
    QSlider *Final_slider;
    QComboBox *Schema_Box;
    QFrame *line_12;
    QFrame *line_13;
    QPushButton *pushButton;
    QLineEdit *Score_display;
    QComboBox *Schema_Box_2;
    QFrame *line_14;
    QSlider *Final_Project_slider;
    QLabel *Final_Project;
    QSpinBox *Final_Project_spin;
    QLabel *Final_Project_2;
    QMenuBar *menuBar;
    QMenu *menuGrade_Calculator;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1289, 1307);
        QFont font;
        font.setUnderline(false);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        Hw1_slider = new QSlider(centralWidget);
        Hw1_slider->setObjectName(QStringLiteral("Hw1_slider"));
        Hw1_slider->setGeometry(QRect(90, 180, 361, 20));
        Hw1_slider->setMaximum(100);
        Hw1_slider->setOrientation(Qt::Horizontal);
        Hw1_spin = new QSpinBox(centralWidget);
        Hw1_spin->setObjectName(QStringLiteral("Hw1_spin"));
        Hw1_spin->setGeometry(QRect(470, 160, 81, 61));
        QFont font1;
        font1.setPointSize(12);
        Hw1_spin->setFont(font1);
        Hw1_spin->setMaximum(100);
        Hw2_spin = new QSpinBox(centralWidget);
        Hw2_spin->setObjectName(QStringLiteral("Hw2_spin"));
        Hw2_spin->setGeometry(QRect(470, 300, 81, 61));
        Hw2_spin->setFont(font1);
        Hw2_spin->setMaximum(100);
        Hw2_slider = new QSlider(centralWidget);
        Hw2_slider->setObjectName(QStringLiteral("Hw2_slider"));
        Hw2_slider->setGeometry(QRect(90, 320, 361, 20));
        Hw2_slider->setMaximum(100);
        Hw2_slider->setOrientation(Qt::Horizontal);
        Hw3_slider = new QSlider(centralWidget);
        Hw3_slider->setObjectName(QStringLiteral("Hw3_slider"));
        Hw3_slider->setGeometry(QRect(90, 460, 361, 20));
        Hw3_slider->setMaximum(100);
        Hw3_slider->setOrientation(Qt::Horizontal);
        Hw3_spin = new QSpinBox(centralWidget);
        Hw3_spin->setObjectName(QStringLiteral("Hw3_spin"));
        Hw3_spin->setGeometry(QRect(470, 440, 81, 61));
        Hw3_spin->setFont(font1);
        Hw3_spin->setMaximum(100);
        Hw4_spin = new QSpinBox(centralWidget);
        Hw4_spin->setObjectName(QStringLiteral("Hw4_spin"));
        Hw4_spin->setGeometry(QRect(470, 580, 81, 61));
        Hw4_spin->setFont(font1);
        Hw4_spin->setMaximum(100);
        Hw4_slider = new QSlider(centralWidget);
        Hw4_slider->setObjectName(QStringLiteral("Hw4_slider"));
        Hw4_slider->setGeometry(QRect(90, 600, 361, 20));
        Hw4_slider->setMaximum(100);
        Hw4_slider->setOrientation(Qt::Horizontal);
        Hw5_spin = new QSpinBox(centralWidget);
        Hw5_spin->setObjectName(QStringLiteral("Hw5_spin"));
        Hw5_spin->setGeometry(QRect(470, 720, 81, 61));
        Hw5_spin->setFont(font1);
        Hw5_spin->setMaximum(100);
        Hw5_slider = new QSlider(centralWidget);
        Hw5_slider->setObjectName(QStringLiteral("Hw5_slider"));
        Hw5_slider->setGeometry(QRect(90, 740, 361, 20));
        Hw5_slider->setMaximum(100);
        Hw5_slider->setOrientation(Qt::Horizontal);
        Hw6_slider = new QSlider(centralWidget);
        Hw6_slider->setObjectName(QStringLiteral("Hw6_slider"));
        Hw6_slider->setGeometry(QRect(90, 880, 361, 20));
        Hw6_slider->setMaximum(100);
        Hw6_slider->setOrientation(Qt::Horizontal);
        Hw6_spin = new QSpinBox(centralWidget);
        Hw6_spin->setObjectName(QStringLiteral("Hw6_spin"));
        Hw6_spin->setGeometry(QRect(470, 860, 81, 61));
        Hw6_spin->setFont(font1);
        Hw6_spin->setMaximum(100);
        Hw7_spin = new QSpinBox(centralWidget);
        Hw7_spin->setObjectName(QStringLiteral("Hw7_spin"));
        Hw7_spin->setGeometry(QRect(470, 1000, 81, 61));
        Hw7_spin->setFont(font1);
        Hw7_spin->setMaximum(100);
        Hw7_slider = new QSlider(centralWidget);
        Hw7_slider->setObjectName(QStringLiteral("Hw7_slider"));
        Hw7_slider->setGeometry(QRect(90, 1020, 361, 20));
        Hw7_slider->setMaximum(100);
        Hw7_slider->setOrientation(Qt::Horizontal);
        Hw8_slider = new QSlider(centralWidget);
        Hw8_slider->setObjectName(QStringLiteral("Hw8_slider"));
        Hw8_slider->setGeometry(QRect(90, 1160, 361, 20));
        Hw8_slider->setMaximum(100);
        Hw8_slider->setOrientation(Qt::Horizontal);
        Hw8_spin = new QSpinBox(centralWidget);
        Hw8_spin->setObjectName(QStringLiteral("Hw8_spin"));
        Hw8_spin->setGeometry(QRect(470, 1140, 81, 61));
        Hw8_spin->setFont(font1);
        Hw8_spin->setMaximum(100);
        Homework_1 = new QLabel(centralWidget);
        Homework_1->setObjectName(QStringLiteral("Homework_1"));
        Homework_1->setGeometry(QRect(70, 130, 351, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        Homework_1->setFont(font2);
        Homework_2 = new QLabel(centralWidget);
        Homework_2->setObjectName(QStringLiteral("Homework_2"));
        Homework_2->setGeometry(QRect(70, 270, 351, 31));
        Homework_2->setFont(font2);
        Homewor_3 = new QLabel(centralWidget);
        Homewor_3->setObjectName(QStringLiteral("Homewor_3"));
        Homewor_3->setGeometry(QRect(70, 410, 351, 31));
        Homewor_3->setFont(font2);
        Homework_4 = new QLabel(centralWidget);
        Homework_4->setObjectName(QStringLiteral("Homework_4"));
        Homework_4->setGeometry(QRect(70, 550, 351, 31));
        Homework_4->setFont(font2);
        Homework_5 = new QLabel(centralWidget);
        Homework_5->setObjectName(QStringLiteral("Homework_5"));
        Homework_5->setGeometry(QRect(70, 690, 351, 31));
        Homework_5->setFont(font2);
        Homework_6 = new QLabel(centralWidget);
        Homework_6->setObjectName(QStringLiteral("Homework_6"));
        Homework_6->setGeometry(QRect(70, 830, 351, 31));
        Homework_6->setFont(font2);
        Homework_7 = new QLabel(centralWidget);
        Homework_7->setObjectName(QStringLiteral("Homework_7"));
        Homework_7->setGeometry(QRect(70, 970, 351, 31));
        Homework_7->setFont(font2);
        Homework_8 = new QLabel(centralWidget);
        Homework_8->setObjectName(QStringLiteral("Homework_8"));
        Homework_8->setGeometry(QRect(70, 1110, 351, 31));
        Homework_8->setFont(font2);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 240, 571, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 380, 571, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 520, 571, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(20, 660, 571, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(20, 800, 571, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(20, 940, 571, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(20, 1080, 571, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        Midterm_1 = new QLabel(centralWidget);
        Midterm_1->setObjectName(QStringLiteral("Midterm_1"));
        Midterm_1->setGeometry(QRect(740, 130, 351, 31));
        Midterm_1->setFont(font2);
        Mt1_spin = new QSpinBox(centralWidget);
        Mt1_spin->setObjectName(QStringLiteral("Mt1_spin"));
        Mt1_spin->setGeometry(QRect(1140, 160, 81, 61));
        Mt1_spin->setFont(font1);
        Mt1_spin->setMaximum(100);
        Mt1_slider = new QSlider(centralWidget);
        Mt1_slider->setObjectName(QStringLiteral("Mt1_slider"));
        Mt1_slider->setGeometry(QRect(760, 180, 361, 20));
        Mt1_slider->setMaximum(100);
        Mt1_slider->setOrientation(Qt::Horizontal);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(630, 80, 20, 1241));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(690, 240, 571, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        Mt2_spin = new QSpinBox(centralWidget);
        Mt2_spin->setObjectName(QStringLiteral("Mt2_spin"));
        Mt2_spin->setGeometry(QRect(1140, 300, 81, 61));
        Mt2_spin->setFont(font1);
        Mt2_spin->setMaximum(100);
        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(690, 380, 571, 20));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        Mt2_slider = new QSlider(centralWidget);
        Mt2_slider->setObjectName(QStringLiteral("Mt2_slider"));
        Mt2_slider->setGeometry(QRect(760, 320, 361, 20));
        Mt2_slider->setMaximum(100);
        Mt2_slider->setOrientation(Qt::Horizontal);
        Midterm_2 = new QLabel(centralWidget);
        Midterm_2->setObjectName(QStringLiteral("Midterm_2"));
        Midterm_2->setGeometry(QRect(740, 270, 351, 31));
        Midterm_2->setFont(font2);
        Final_spin = new QSpinBox(centralWidget);
        Final_spin->setObjectName(QStringLiteral("Final_spin"));
        Final_spin->setGeometry(QRect(1140, 440, 81, 61));
        Final_spin->setFont(font1);
        Final_spin->setMaximum(100);
        Final = new QLabel(centralWidget);
        Final->setObjectName(QStringLiteral("Final"));
        Final->setGeometry(QRect(740, 410, 351, 31));
        Final->setFont(font2);
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(690, 520, 571, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        Final_slider = new QSlider(centralWidget);
        Final_slider->setObjectName(QStringLiteral("Final_slider"));
        Final_slider->setGeometry(QRect(760, 460, 361, 20));
        Final_slider->setMaximum(100);
        Final_slider->setOrientation(Qt::Horizontal);
        Schema_Box = new QComboBox(centralWidget);
        Schema_Box->addItem(QString());
        Schema_Box->addItem(QString());
        Schema_Box->setObjectName(QStringLiteral("Schema_Box"));
        Schema_Box->setGeometry(QRect(740, 720, 481, 41));
        Schema_Box->setFont(font2);
        line_12 = new QFrame(centralWidget);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(690, 660, 571, 20));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralWidget);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(20, 70, 571, 20));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(740, 840, 481, 71));
        pushButton->setFont(font1);
        Score_display = new QLineEdit(centralWidget);
        Score_display->setObjectName(QStringLiteral("Score_display"));
        Score_display->setGeometry(QRect(1050, 990, 91, 61));
        Schema_Box_2 = new QComboBox(centralWidget);
        Schema_Box_2->addItem(QString());
        Schema_Box_2->addItem(QString());
        Schema_Box_2->setObjectName(QStringLiteral("Schema_Box_2"));
        Schema_Box_2->setGeometry(QRect(70, 30, 481, 31));
        Schema_Box_2->setFont(font2);
        line_14 = new QFrame(centralWidget);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(690, 800, 571, 20));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        Final_Project_slider = new QSlider(centralWidget);
        Final_Project_slider->setObjectName(QStringLiteral("Final_Project_slider"));
        Final_Project_slider->setGeometry(QRect(760, 600, 361, 20));
        Final_Project_slider->setMaximum(100);
        Final_Project_slider->setOrientation(Qt::Horizontal);
        Final_Project = new QLabel(centralWidget);
        Final_Project->setObjectName(QStringLiteral("Final_Project"));
        Final_Project->setGeometry(QRect(740, 550, 351, 31));
        Final_Project->setFont(font2);
        Final_Project_spin = new QSpinBox(centralWidget);
        Final_Project_spin->setObjectName(QStringLiteral("Final_Project_spin"));
        Final_Project_spin->setGeometry(QRect(1140, 580, 81, 61));
        Final_Project_spin->setFont(font1);
        Final_Project_spin->setMaximum(100);
        Final_Project_2 = new QLabel(centralWidget);
        Final_Project_2->setObjectName(QStringLiteral("Final_Project_2"));
        Final_Project_2->setGeometry(QRect(740, 970, 351, 31));
        Final_Project_2->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1289, 20));
        menuGrade_Calculator = new QMenu(menuBar);
        menuGrade_Calculator->setObjectName(QStringLiteral("menuGrade_Calculator"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuGrade_Calculator->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(Hw1_spin, SIGNAL(valueChanged(int)), Hw1_slider, SLOT(setValue(int)));
        QObject::connect(Hw1_slider, SIGNAL(valueChanged(int)), Hw1_spin, SLOT(setValue(int)));
        QObject::connect(Hw2_slider, SIGNAL(valueChanged(int)), Hw2_spin, SLOT(setValue(int)));
        QObject::connect(Hw2_spin, SIGNAL(valueChanged(int)), Hw2_slider, SLOT(setValue(int)));
        QObject::connect(Hw3_spin, SIGNAL(valueChanged(int)), Hw3_slider, SLOT(setValue(int)));
        QObject::connect(Hw3_slider, SIGNAL(valueChanged(int)), Hw3_spin, SLOT(setValue(int)));
        QObject::connect(Hw4_slider, SIGNAL(valueChanged(int)), Hw4_spin, SLOT(setValue(int)));
        QObject::connect(Hw4_spin, SIGNAL(valueChanged(int)), Hw4_slider, SLOT(setValue(int)));
        QObject::connect(Hw5_slider, SIGNAL(valueChanged(int)), Hw5_spin, SLOT(setValue(int)));
        QObject::connect(Hw5_spin, SIGNAL(valueChanged(int)), Hw5_slider, SLOT(setValue(int)));
        QObject::connect(Hw6_slider, SIGNAL(valueChanged(int)), Hw6_spin, SLOT(setValue(int)));
        QObject::connect(Hw6_spin, SIGNAL(valueChanged(int)), Hw6_slider, SLOT(setValue(int)));
        QObject::connect(Hw7_spin, SIGNAL(valueChanged(int)), Hw7_slider, SLOT(setValue(int)));
        QObject::connect(Hw7_slider, SIGNAL(valueChanged(int)), Hw7_spin, SLOT(setValue(int)));
        QObject::connect(Hw8_slider, SIGNAL(valueChanged(int)), Hw8_spin, SLOT(setValue(int)));
        QObject::connect(Hw8_spin, SIGNAL(valueChanged(int)), Hw8_slider, SLOT(setValue(int)));
        QObject::connect(Mt1_spin, SIGNAL(valueChanged(int)), Mt1_slider, SLOT(setValue(int)));
        QObject::connect(Mt1_slider, SIGNAL(valueChanged(int)), Mt1_spin, SLOT(setValue(int)));
        QObject::connect(Mt2_slider, SIGNAL(valueChanged(int)), Mt2_spin, SLOT(setValue(int)));
        QObject::connect(Mt2_spin, SIGNAL(valueChanged(int)), Mt2_slider, SLOT(setValue(int)));
        QObject::connect(Final_spin, SIGNAL(valueChanged(int)), Final_slider, SLOT(setValue(int)));
        QObject::connect(Final_slider, SIGNAL(valueChanged(int)), Final_spin, SLOT(setValue(int)));
        QObject::connect(Final_Project_spin, SIGNAL(valueChanged(int)), Final_Project_slider, SLOT(setValue(int)));
        QObject::connect(Final_Project_slider, SIGNAL(valueChanged(int)), Final_Project_spin, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Homework_1->setText(QApplication::translate("MainWindow", "Homework 1", nullptr));
        Homework_2->setText(QApplication::translate("MainWindow", "Homework 2", nullptr));
        Homewor_3->setText(QApplication::translate("MainWindow", "Homework 3", nullptr));
        Homework_4->setText(QApplication::translate("MainWindow", "Homework 4", nullptr));
        Homework_5->setText(QApplication::translate("MainWindow", "Homework 5", nullptr));
        Homework_6->setText(QApplication::translate("MainWindow", "Homework 6", nullptr));
        Homework_7->setText(QApplication::translate("MainWindow", "Homework 7", nullptr));
        Homework_8->setText(QApplication::translate("MainWindow", "Homework 8", nullptr));
        Midterm_1->setText(QApplication::translate("MainWindow", "Midterm 1", nullptr));
        Midterm_2->setText(QApplication::translate("MainWindow", "Midterm 2", nullptr));
        Final->setText(QApplication::translate("MainWindow", "Final", nullptr));
        Schema_Box->setItemText(0, QApplication::translate("MainWindow", "Scheme A", nullptr));
        Schema_Box->setItemText(1, QApplication::translate("MainWindow", "Scheme B", nullptr));

        pushButton->setText(QApplication::translate("MainWindow", "Calculate Grade", nullptr));
        Schema_Box_2->setItemText(0, QApplication::translate("MainWindow", "Pic 10B Grade Calculator", nullptr));
        Schema_Box_2->setItemText(1, QApplication::translate("MainWindow", "Pic 10C Grade Calculator", nullptr));

        Final_Project->setText(QApplication::translate("MainWindow", "Final Project", nullptr));
        Final_Project_2->setText(QApplication::translate("MainWindow", "Overall Score", nullptr));
        menuGrade_Calculator->setTitle(QApplication::translate("MainWindow", "Grade Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
