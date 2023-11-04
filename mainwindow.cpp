#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "pointshift.h"
#include "pointshiftwithfriend.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Shift_clicked()
{
    Vector3D::Point3D point (ui->PointX->text().toDouble(), ui->PointY->text().toDouble(), ui->PointZ->text().toDouble());
    Vector3D vector (ui->VectorX->text().toDouble(), ui->VectorY->text().toDouble(), ui->VectorZ->text().toDouble());
    ui->OldPointPos->setText("Old point position: (" + QString::number(point.getPx()) + ";" + QString::number(point.getPy()) + ";" + QString::number(point.getPz()) + ")");
    point.moveByVector(vector);
    ui->NewPointPos->setText("New point position: (" + QString::number(point.getPx()) + ";" + QString::number(point.getPy()) + ";" + QString::number(point.getPz()) + ")");
    ui->VectorL->setText("New point position: (" + QString::number(vector.getVx()) + ";" + QString::number(vector.getVy()) + ";" + QString::number(vector.getVz()) + ")");
    ui->PointX->clear();
    ui->PointY->clear();
    ui->PointZ->clear();
    ui->VectorX->clear();
    ui->VectorY->clear();
    ui->VectorZ->clear();
}


void MainWindow::on_Shift_2_clicked()
{
    Point3Df point (ui->PointX->text().toDouble(), ui->PointY->text().toDouble(), ui->PointZ->text().toDouble());
    Vector3Df vector (ui->VectorX->text().toDouble(), ui->VectorY->text().toDouble(), ui->VectorZ->text().toDouble());
    ui->OldPointPos->setText("Old point position: (" + QString::number(point.getPx()) + ";" + QString::number(point.getPy()) + ";" + QString::number(point.getPz()) + ")");
    point.moveByVector(vector);
    ui->NewPointPos->setText("New point position: (" + QString::number(point.getPx()) + ";" + QString::number(point.getPy()) + ";" + QString::number(point.getPz()) + ")");
    ui->VectorL->setText("New point position: (" + QString::number(vector.getVx()) + ";" + QString::number(vector.getVy()) + ";" + QString::number(vector.getVz()) + ")");
    ui->PointX->clear();
    ui->PointY->clear();
    ui->PointZ->clear();
    ui->VectorX->clear();
    ui->VectorY->clear();
    ui->VectorZ->clear();
}

