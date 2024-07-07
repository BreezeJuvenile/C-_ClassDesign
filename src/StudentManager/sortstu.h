#ifndef SORTSTU_H
#define SORTSTU_H

#include <QDialog>
#include <QFile>
#include <QList>
#include <QString>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTableView>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QStringList>
#include <QModelIndex>

namespace Ui {
class sortstu;
}

class sortstu : public QDialog
{
    Q_OBJECT

public:
    explicit sortstu(QWidget *parent = 0);
    ~sortstu();

    //读取文件
    void readFile();
    //清空并初始化显示框
    void cleartable(int what);
    //显示
    void disPlay(int row,QStringList subs);
    //求总分
    void processStu();
    //把小中大学生全部列出来
    void disPlayAll();
    //复制信息至第三个表
    void docopy();
    //显示平均分
    void disPlayAve();

private slots:

    void on_sortwhat_currentIndexChanged(int index);

    void on_sortbtn_clicked();

private:
    Ui::sortstu *ui;

    QList<QString>stu_lines;//读取列表存为list
    QList<QString>ave[3];//各科平均分
    double a[3][6];//记录各科总分的二维数组，辅助求平均分

    QStandardItemModel *model;//显示的model

    QStandardItemModel *model2;//显示的model2//统计

    QStandardItemModel *model3;//显示的model3

    int what;//判断就读类型
    int sum;//某种学生人数
    int col;//要排的列号
};

#endif // SORTSTU_H
