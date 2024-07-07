#include "mainwindow.h"
#include "addstu.h"
#include "querystu.h"
#include "sortstu.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //标题
    setWindowTitle("学生成绩管理系统");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//点击添加
void MainWindow::on_pushButton_clicked()
{
    addstu a;
    a.exec();//添加学生窗口
}

//点击查询
void MainWindow::on_pushButton_2_clicked()
{
    querystu b;
    b.exec();//查询学生窗口
}

//点击统计排序
void MainWindow::on_pushButton_3_clicked()
{
    sortstu c;
    c.exec();
}


