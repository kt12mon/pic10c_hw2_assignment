#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Schema_Box_currentIndexChanged(const QString &arg1);

    void on_Schema_Box_2_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    bool scheme_A = true;
    bool pic10b = true;
};

#endif // MAINWINDOW_H
