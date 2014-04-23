#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsScene"
#include "QGraphicsView"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsScene scene;
    scene.addText("Hello, world!");

    QGraphicsView view(&scene);

    view.show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
