#include "addstu.h"
#include "ui_addstu.h"
#include<QMessageBox>
#include<QPushButton>
#include<QString>
#include<QDebug>
#include<QList>
#include<QAbstractButton>
#include<QFile>
#include<QTextStream>
#include<QIODevice>
// #include<QTime>
// #include<QRandomGenerator>

addstu::addstu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addstu)
{
    ui->setupUi(this);
    //标题
    setWindowTitle("添加信息");

    readFile();
    // //判断文件是否打开成功
    // if(readFile()==-1)//打开失败
    // {
    //     QMessageBox::critical(this,"错误","文件打开失败");
    //     this->close();//关闭窗口
    // }



}

addstu::~addstu()
{
    delete ui;
}

/********************************** 基本点击事件 ****************************************/

//点击确认信息
void addstu::on_btnok_clicked()
{
    QString cnt;//最终信息
    //获取信息 姓名 学号 年龄 性别 班级
    // QString str =  QString::number(QRandomGenerator::global()->bounded(2014000,2014999));
    QString name=this->ui->lname->text();
    // QString id = str;
    // this->ui->lid->setText(str);
    QString id = this->ui->lid->text();

    QString sex;
    QString age=this->ui->lage->currentText();
    QString stuclass=this->ui->lstuclass->currentText();

    int checkMark=1;//检查是否填写完成绩
    int flag=1;//初始化为信息无误
    //下面为判断性别 多选一
    if(this->ui->male->isChecked())//点击男
    {
        sex="男";
    }
    else if(this->ui->female->isChecked())//点击女
    {
        sex="女";
    }
    //下面为判断学生就读情况
    if(this->ui->stus->isChecked())//点击小学生
    {
        //初始化空编辑栏
        if(ui->stus_Emark->text()==""||ui->stus_Mmark->text()==""||ui->stus_Cmark->text()=="")
        {
            checkMark=0;
        }

        //存放输入的信息至cut
        cnt="小学生 "+id+" "
                    +name+" "
                    +sex+" "
                    +age+" "
                    +stuclass+" "
                    +this->ui->stus_Emark->text()+" "
                    +this->ui->stus_Mmark->text()+" "
                    +this->ui->stus_Cmark->text()+"\n";
    }
    else if(this->ui->stum->isChecked())//点击中学生
    {
        if(ui->stum_Emark->text()==""||ui->stum_Mmark->text()==""||ui->stum_Cmark->text()==""
                ||ui->stum_Gmark->text()==""||ui->stum_Hmark->text()=="") checkMark=0;

        cnt="中学生 "+id+" "
                    +name+" "
                    +sex+" "
                    +age+" "
                    +stuclass+" "
                    +this->ui->stum_Emark->text()+" "
                    +this->ui->stum_Mmark->text()+" "
                    +this->ui->stum_Cmark->text()+" "
                    +this->ui->stum_Gmark->text()+" "
                    +this->ui->stum_Hmark->text()+"\n";
    }
    else if(this->ui->stul->isChecked())//点击大学生
    {
        if(ui->stul_Emark->text()==""||ui->stul_Pmark->text()==""||ui->stul_Mmark->text()=="")
        {
            checkMark=0;
        }

        QString major=this->ui->major->currentText();//获取专业

        cnt="大学生 "+id+" "
                    +name+" "
                    +sex+" "
                    +age+" "
                    +stuclass+" "
                    +major+" "
                    +this->ui->stul_Emark->text()+" "
                    +this->ui->stul_Pmark->text()+" "
                    +this->ui->stul_Mmark->text()+"\n";
    }

    qDebug("%d",flag);//输出flag标志

    //判断填写的信息是否合法（字符长度 学号长度 是否填写）
    if(name.length()<1||id.length()<9||flag==0||checkMark==0)//信息填写不全
    {
            QMessageBox::warning(this,"错误","信息填写不完整，请重新检查！");
            flag=0;//信息有误
    }
    if(findID(id)==0)//学号重复
    {
        QMessageBox::warning(this,"错误","学号重复！！请重新填写");
        flag=0;//信息有误
    }
    if(flag==1)//信息无误
    {
        int ret =QMessageBox::question(this,"请确认信息","请确认是否填写无误？","保存","取消");
        if(ret==0)//确认保存
        {
            writeToFile(cnt);//写文件
            clearall();//清空
        }
    }
}

//点击取消退出窗口
void addstu::on_btncancel_clicked()
{
    this->close();
}



//******************************其他功能函数*********************************//

//为保证先选择学历再填写分数的顺序故设定次功能
//点击某一类后清空其他类中所有属性的数据并初始化选择类的属性

void addstu::on_stus_clicked() //选择小学生
{
    //初始化成绩为0
    this->ui->stus_Cmark->setText("0");
    this->ui->stus_Emark->setText("0");
    this->ui->stus_Mmark->setText("0");

    //清空中学生
    this->ui->stum_Cmark->clear();
    this->ui->stum_Emark->clear();
    this->ui->stum_Gmark->clear();
    this->ui->stum_Hmark->clear();
    this->ui->stum_Mmark->clear();

    //清空大学生
    this->ui->stul_Emark->clear();
    this->ui->stul_Mmark->clear();
    this->ui->stul_Pmark->clear();
    this->ui->major->setCurrentIndex(0);//初始化专业

    this->ui->stum->setCheckable(false);this->ui->stum->setCheckable(true);//取消中学生按钮
    this->ui->stul->setCheckable(false);this->ui->stul->setCheckable(true);//取消大学生按钮

    this->ui->stus->setFocus();//初始化光标位置
}

void addstu::on_stum_clicked() //选择中学生
{
    //成绩初始化
    this->ui->stum_Cmark->setText("0");
    this->ui->stum_Emark->setText("0");
    this->ui->stum_Gmark->setText("0");
    this->ui->stum_Hmark->setText("0");
    this->ui->stum_Mmark->setText("0");

    //清空小学生
    this->ui->stus_Cmark->clear();
    this->ui->stus_Emark->clear();
    this->ui->stus_Mmark->clear();

    //清空大学生
    this->ui->stul_Emark->clear();
    this->ui->stul_Mmark->clear();
    this->ui->stul_Pmark->clear();
    this->ui->major->setCurrentIndex(0);//初始化专业

    this->ui->stus->setCheckable(false);this->ui->stus->setCheckable(true);//取消小学生按钮
    this->ui->stul->setCheckable(false);this->ui->stul->setCheckable(true);//取消大学生按钮

    this->ui->stum->setFocus();//初始化光标位置
}

void addstu::on_stul_clicked() //选择大学生
{
    this->ui->stul_Emark->setText("0");
    this->ui->stul_Mmark->setText("0");
    this->ui->stul_Pmark->setText("0");//默认成绩

    this->ui->stus_Cmark->clear();
    this->ui->stus_Emark->clear();
    this->ui->stus_Mmark->clear();

    this->ui->stum_Cmark->clear();
    this->ui->stum_Emark->clear();
    this->ui->stum_Gmark->clear();
    this->ui->stum_Hmark->clear();
    this->ui->stum_Mmark->clear();

    this->ui->stus->setCheckable(false);this->ui->stus->setCheckable(true);//取消小学生按钮
    this->ui->stum->setCheckable(false);this->ui->stum->setCheckable(true);//取消高中生按钮

    this->ui->stul->setFocus();//初始化光标位置
}

/*********************** 辅助功能函数 ***********************/

//确认信息后清除界面
void addstu::clearall()
{
    //清空学号、姓名、初始化默认的年龄
    this->ui->lid->clear();
    this->ui->lname->clear();
    this->ui->lage->setCurrentIndex(0);
    this->ui->lstuclass->setCurrentIndex(0);

    //取消所有按钮
    this->ui->male->setCheckable(false);
    this->ui->male->setCheckable(true);

    this->ui->female->setCheckable(false);
    this->ui->female->setCheckable(true);

    this->ui->stus->setCheckable(false);
    this->ui->stus->setCheckable(true);

    this->ui->stum->setCheckable(false);
    this->ui->stum->setCheckable(true);

    this->ui->stul->setCheckable(false);
    this->ui->stul->setCheckable(true);
    //清空小学生
    this->ui->stus_Cmark->clear();
    this->ui->stus_Emark->clear();
    this->ui->stus_Mmark->clear();
    //清空中学生
    this->ui->stum_Cmark->clear();
    this->ui->stum_Emark->clear();
    this->ui->stum_Gmark->clear();
    this->ui->stum_Hmark->clear();
    this->ui->stum_Mmark->clear();
    //清空大学生
    this->ui->stul_Emark->clear();
    this->ui->stul_Mmark->clear();
    this->ui->stul_Pmark->clear();
    //初始化专业为计算机类
    this->ui->major->setCurrentIndex(0);
    //初始化光标位置
    this->ui->lid->setFocus();
}

//判断学号是否重复  --
int addstu::findID(QString id)
{
    //从第一行开始查找
    for(int row=0;row<stu_lines.length();row++)//遍历容器
    {
        QString line =stu_lines.at(row);//取出信息
        line=line.trimmed();//去掉空字符
        QStringList subs=line.split(" ");//按空格分开

        //初始状态subs中无信息，则第一个为空格，所以判断时要与第二个字符串比较，即at(1)
        if(id==subs.at(1))//学号重复
        {
            return 0;
        }
    }
    return 1;
}

//启动系统时先读取最初文件信息，便于及时更新信息（因为存放新数据时需要先判断之前是否存在相同学号的数据）
//读文件
int addstu::readFile()
{
    QFile file("stu.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))//打开不成功
    {
        return -1;
    }
    QTextStream in(&file);

    //将信息从文件内读取并另外存放至list容器
    while(!in.atEnd())//没读到文件尾则继续读
    {
          QString line =in.readLine();//读取一行
          stu_lines.append(line);//每行 都存放到list中
    }
    file.close();//关闭
    return 0;//读取成功
}

//读写文件：
void addstu::writeToFile(QString cnt)//保存学生信息
{
    QFile file("stu.txt");
    if(!file.open(QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::warning(this,"错误","文件打开失败，信息未保存");
        return;
    }
    QTextStream out(&file);
    out<<cnt;//写cnt进文件中
    file.close();
}
