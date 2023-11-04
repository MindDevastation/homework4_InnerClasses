#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pointshift.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
//    Vector3D pshift;


private slots:
    void on_Shift_clicked();

    void on_Shift_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
