#include "sortstu.h"
#include "ui_sortstu.h"

sortstu::sortstu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortstu)
{
    ui->setupUi(this);

    //标题
    setWindowTitle("信息排序");

    readFile();//读文件，确保数据最新
    processStu();//求总分
    ui->sortbtn->setFocus();

    //创建模型
    this->model=new QStandardItemModel;//表格模型1
    this->ui->tableView->setModel(model);
    ui->tableView->setSortingEnabled(true);

    this->model2=new QStandardItemModel;//表格模型2
    this->ui->tableView2->setModel(model2);
    ui->tableView->setSortingEnabled(true);

    this->model3=new QStandardItemModel;//表格模型3
    this->ui->tableView3->setModel(model3);
    ui->tableView->setSortingEnabled(true);
}

sortstu::~sortstu()
{
    delete model;
    delete model2;
    delete model3;
    delete ui;
}

//多态性 学生类-----------------------------------------------------
class Student//开始写继承XXX//学生信息
{
public:
    virtual int sortStu(int way) = 0;//按排序方式排序//纯虚函数

    int sortTable(int way)
    {
        return sortStu(way);
    }

public:
    QString id,name,sex,age,stuClass;
};

class StudentS:public Student//小学生
{
public:
    virtual int sortStu(int way)//按照way排序
    {
        return way+5;//返回排序对应列
    }

public:
    QString Emark,Mmark,Cmark;
};

class StudentM:public Student//中学生
{
public:
    virtual int sortStu(int way)//按照way排序
    {
        return way+5;//返回排序对应列
    }

public:
    QString Emark,Mmark,Cmark,Gmark,Hmark;
};

class StudentL:public Student//大学生
{
public:
    virtual int sortStu(int way)//按照way排序
    {
        return way+6;//返回排序对应列
    }

public:
    QString major,Emark,Pmark,Mmark;
};

//********************************************************************


void sortstu::on_sortbtn_clicked()//点击排序
{
    int flag;//要排的列， 升序或降序
    //已经获取过what了
    flag=ui->sortflag->currentIndex();
    //选择的排序方式对应索引值
    int way=ui->sortway->currentIndex();

    //选择排序学生类别及方式
    if(way == 0 || what == 0)
    {
        QMessageBox::warning(this,"提示","请选择排序方式");
        return;
    }

    //小学生
    if(what==1)
    {
        //建一个学生类指针
        Student *stu = new StudentS;
        col=stu->sortTable(way);//得到要排的序号
        //释放
        delete stu;
    }

    //中学生
    if(what==2)
    {
        Student *stu=new StudentM;
        col=stu->sortTable(way);
        delete stu;
    }

    //大学生
    else if(what==3)
    {
        Student *stu=new StudentL;
        col=stu->sortTable(way);
        delete stu;
    }

    //设置对应搜索条件的表头
    this->model3->setHorizontalHeaderItem(
        0,new QStandardItem(this->model->headerData(col,Qt::Horizontal).toString()));

    //复制对应列
    docopy();

    //****************************** 排序 ********************************
    //降序
    if(flag==1)
    {
        this->model->sort(col,Qt::DescendingOrder);
        this->model3->sort(0,Qt::DescendingOrder);

    }
    //升序
    if(flag==0)
    {
        this->model->sort(col,Qt::AscendingOrder);
        this->model3->sort(0,Qt::AscendingOrder);
    }

}

//复制对应列信息到model3
void sortstu::docopy()
{
    for(int i=0;i<sum;i++)//行
    {
        QString temp=model->data(model->index(i,col)).toString();
        QStandardItem *item=new QStandardItem(temp);
        item->setData(temp.toDouble(),Qt::DisplayRole);
        this->model3->setItem(i,0,item);
    }
}


//下面是一堆函数
//读文件
void sortstu::readFile()
{
    stu_lines.clear();//清空
    QFile file("stu.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))//打开不成功
    {
        QMessageBox::critical(this,"错误","文件打开失败");
        this->close();//关闭窗口
    }
    QTextStream in(&file);

    while(!in.atEnd())//没读到文件尾则继续读
    {
          QString line =in.readLine();//读取一行
          stu_lines.append(line);//每行都存放到list中
    }
    file.close();//关闭
}

//清空并设置表头
void sortstu::cleartable(int what)
{
    this->model->clear();
    this->model2->clear();
    this->model3->clear();

    this->model->setHorizontalHeaderItem(0,new QStandardItem("就读状况"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("学号"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("姓名"));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("性别"));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("年龄"));
    this->model->setHorizontalHeaderItem(5,new QStandardItem("班级"));

    //小学生
    if(what==1)
    {
        this->model->setHorizontalHeaderItem(6,new QStandardItem("英语成绩"));
        this->model->setHorizontalHeaderItem(7,new QStandardItem("数学成绩"));
        this->model->setHorizontalHeaderItem(8,new QStandardItem("语文成绩"));
        this->model->setHorizontalHeaderItem(9,new QStandardItem("总分"));

        this->model2->setHorizontalHeaderItem(0,new QStandardItem("英语平均分"));
        this->model2->setHorizontalHeaderItem(1,new QStandardItem("数学平均分"));
        this->model2->setHorizontalHeaderItem(2,new QStandardItem("语文平均分"));
        this->model2->setHorizontalHeaderItem(3,new QStandardItem("总分平均分"));
    }

    //中学生
    if(what==2)
    {
        this->model->setHorizontalHeaderItem(6,new QStandardItem("英语成绩"));
        this->model->setHorizontalHeaderItem(7,new QStandardItem("数学成绩"));
        this->model->setHorizontalHeaderItem(8,new QStandardItem("语文成绩"));
        this->model->setHorizontalHeaderItem(9,new QStandardItem("地理成绩"));
        this->model->setHorizontalHeaderItem(10,new QStandardItem("历史成绩"));
        this->model->setHorizontalHeaderItem(11,new QStandardItem("总分"));

        this->model2->setHorizontalHeaderItem(0,new QStandardItem("英语平均分"));
        this->model2->setHorizontalHeaderItem(1,new QStandardItem("数学平均分"));
        this->model2->setHorizontalHeaderItem(2,new QStandardItem("语文平均分"));
        this->model2->setHorizontalHeaderItem(3,new QStandardItem("地理平均分"));
        this->model2->setHorizontalHeaderItem(4,new QStandardItem("历史平均分"));
        this->model2->setHorizontalHeaderItem(5,new QStandardItem("总分平均分"));
    }

    //大学生
    if(what==3)
    {
        this->model->setHorizontalHeaderItem(6,new QStandardItem("专业"));
        this->model->setHorizontalHeaderItem(7,new QStandardItem("英语成绩"));
        this->model->setHorizontalHeaderItem(8,new QStandardItem("程序成绩"));
        this->model->setHorizontalHeaderItem(9,new QStandardItem("高数成绩"));
        this->model->setHorizontalHeaderItem(10,new QStandardItem("总分"));

        this->model2->setHorizontalHeaderItem(0,new QStandardItem("英语平均分"));
        this->model2->setHorizontalHeaderItem(1,new QStandardItem("程序设计平均分"));
        this->model2->setHorizontalHeaderItem(2,new QStandardItem("高数平均分"));
        this->model2->setHorizontalHeaderItem(3,new QStandardItem("总分平均分"));
    }
}

//求所有人一起的总分
void sortstu::processStu()
{
    //初始化二维数组a为0
    memset(a,0,sizeof(a));
    //遍历容器
    for(int i=0;i<stu_lines.length();i++)
    {
        QString line =stu_lines.at(i), source=stu_lines.at(i);//取出信息
        line=line.trimmed();//去掉空字符
        QStringList subs=line.split(" ");//按空格分开

        QString cnt;
        double total;

        if(subs.at(0)=="小学生")
        {
            //每个人所有分数的总分
            total=subs[6].toDouble()+subs[7].toDouble()+subs[8].toDouble();
            //求英语总分
            a[0][0]+=subs[6].toDouble();
            //数学总分
            a[0][1]+=subs[7].toDouble();
            //语文总分
            a[0][2]+=subs[8].toDouble();
            //求所有科的总分
            a[0][3]+=total;
        }

        if(subs.at(0)=="中学生")
        {
            total=subs[6].toDouble()+subs[7].toDouble()+subs[8].toDouble()
                    +subs[9].toDouble()+subs[10].toDouble();

            //求各科总分 英语 数学 语文 地理 历史
            a[1][0]+=subs[6].toDouble();
            a[1][1]+=subs[7].toDouble();
            a[1][2]+=subs[8].toDouble();
            a[1][3]+=subs[9].toDouble();
            a[1][4]+=subs[10].toDouble();
            a[1][5]+=total;//求总分
        }

        if(subs.at(0)=="大学生")
        {
            total=subs[7].toDouble()+subs[8].toDouble()+subs[9].toDouble();
            //求各科总分 英语 程序设计 高数
            a[2][0]+=subs[7].toDouble();
            a[2][1]+=subs[8].toDouble();
            a[2][2]+=subs[9].toDouble();
            //求所有的总分
            a[2][3]+=total;
        }
        //数字转换成字符 存储
        cnt=QString::number(total, 'f', 0);//保留0位小数
        //替换list第i行
        stu_lines.replace(i,source+" "+cnt);
    }
    //已经算完各个分数相加

}

//选择就读类型以及排序标准选项
void sortstu::on_sortwhat_currentIndexChanged(int index)
{
    what=index;
    //初始化
    sum=0;
    //清空信息
    if(index==0)
    {
        ui->sumShow1->setText("XXX");
        ui->sumShow2->setText("XX");
        this->model->clear();
        this->model2->clear();
        this->model3->clear();
        ui->sortway->clear();ui->sortway->addItem("请先选择上一项");
    }
    //选小学生时的其他框选项
    if(index==1)
    {
        disPlayAll();
        ui->sumShow1->setText("小学生");
        ui->sortway->clear();ui->sortway->addItem("请选择排序方式");
        ui->sortway->addItem("按英语成绩排序");ui->sortway->addItem("按数学成绩排序");
        ui->sortway->addItem("按语文成绩排序");ui->sortway->addItem("按总分成绩排序");
    }
    //中学生时的其他框中的选项
    if(index==2)
    {
        disPlayAll();
        ui->sumShow1->setText("中学生");
        ui->sortway->clear();ui->sortway->addItem("请选择排序方式");
        ui->sortway->addItem("按英语成绩排序");ui->sortway->addItem("按数学成绩排序");
        ui->sortway->addItem("按语文成绩排序");ui->sortway->addItem("按地理成绩排序");
        ui->sortway->addItem("按历史成绩排序");ui->sortway->addItem("按总分成绩排序");
    }
    //选大学生时的其他框中的选项
    if(index==3)
    {
        disPlayAll();
        ui->sumShow1->setText("大学生");
        ui->sortway->clear();ui->sortway->addItem("请选择排序方式");
        ui->sortway->addItem("按英语成绩排序");ui->sortway->addItem("按程序成绩排序");
        ui->sortway->addItem("按高数成绩排序");ui->sortway->addItem("按总分成绩排序");
    }
    //信息不为空
    if(index!=0)
    {
        ui->sumShow2->setText(QString::number(sum));//设置人数
    }
    //展示所有的平均分
    disPlayAve();
}

//显示小中大
void sortstu::disPlayAll()
{
    cleartable(what);
    int row=0;//从第一行开始显示

    //遍历存储信息的列表
    for(int i=0;i<stu_lines.length();i++)
    {
        //取出信息
        QString line =stu_lines.at(i);
        line=line.trimmed();//去掉空字符
        QStringList subs=line.split(" ");//按空格分开
        //符合就读类型就+1
        if(subs.at(0)==ui->sortwhat->currentText())
        {
            sum++;
            disPlay(row++,subs);
        }
    }
}

//显示一行信息
void sortstu::disPlay(int row,QStringList subs)
{
    //遍历表格中的每一列信息
    for(int i=0;i<subs.length();i++)
    {
        //存放和显示表格中分数之前的信息
        if((what==3 && i==6) || (i<6))
        {
            this->model->setItem(row,i,new QStandardItem(subs.at(i)));//传递字符串
        }
        else//传入数值才能排成绩，此时存放和显示成绩
        {
            //创建存放信息的项目
            QStandardItem *item=new QStandardItem(subs.at(i));
            //转浮点
            item->setData(subs.at(i).toDouble(),Qt::DisplayRole);
            //显示
            this->model->setItem(row,i,item);
        }
    }

}

//显示平均分
void sortstu::disPlayAve()
{
    //cnt=QString::number(total, 'f', 0);//保留0位小数
    if(what==1)//小学生
    {
        for(int i=0;i<4;i++)//4列信息
        {
            double b=a[0][i]/sum; //计算
            //转字符
            QString item=QString::number(b,'f',1);
            this->model2->setItem(0,i,new QStandardItem(item));//传递字符串
        }
    }
    else if(what==2)//中学生
    {
        for(int i=0;i<6;i++)//6列信息
        {
            double b=a[1][i]/sum;
            QString item=QString::number(b,'f',1);
            this->model2->setItem(0,i,new QStandardItem(item));//传递字符串
        }
    }
    else if(what==3)//大学生
    {
        for(int i=0;i<4;i++)//4列信息
        {
            double b=a[2][i]/sum;
            QString item=QString::number(b,'f',1);
            this->model2->setItem(0,i,new QStandardItem(item));//传递字符串
        }
    }
}
