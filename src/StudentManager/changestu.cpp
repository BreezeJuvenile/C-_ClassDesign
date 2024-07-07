#include "changestu.h"
#include "ui_changestu.h"

changestu::changestu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changestu)
{
    ui->setupUi(this);
    //标题
    setWindowTitle("修改/查询信息");
}

changestu::~changestu()
{
    delete ui;
}

//获取修改前需要的学号和文件信息
void changestu::changeShow(QString idline,QStringList stu_line)
{
    idLine=idline;//得到对应行信息
    stu_lines=stu_line;//得到全部信息列表
    processStu(idLine);

}

//处理得到的信息填到表上
void changestu::processStu(QString idLine)
{
    //按空格分开
    QStringList subs=idLine.split(" ");
    //就读类型
    QString what =subs[0];
    //学号
    ui->lid->setText(subs[1]);
    //学号不可修改
    ui->lid->setEnabled(false);
    //姓名
    ui->lname->setText(subs[2]);
    //性别
    if(subs[3]=="男")
    {
        ui->male->setChecked(true);
    }
    else if(subs[3]=="女")
    {
        ui->female->setChecked(true);
    }
    //年龄  count()表示年龄选项数
    for(int i = 0;i < ui->lage->count();i++)
    {
        if(subs[4] == ui->lage->itemText(i))
        {
            ui->lage->setCurrentIndex(i);//选中对应序号年龄
            break;
        }
    }
    for(int i=0;i<ui->lstuclass->count();i++)//班别
    {
        if(subs[5]==ui->lstuclass->itemText(i))
        {
            ui->lstuclass->setCurrentIndex(i);//选中对应序号班别
            break;
        }
    }

    //以下处理小中大学生
    if(what == "小学生")
    {
        ui->stus->setChecked(true);//选中小学生
        ui->stus_Emark->setText(subs[6]);
        ui->stus_Mmark->setText(subs[7]);
        ui->stus_Cmark->setText(subs[8]);
    }
    else if(what == "中学生")
    {
        ui->stum->setChecked(true);//选中中学生
        ui->stum_Emark->setText(subs[6]);
        ui->stum_Mmark->setText(subs[7]);
        ui->stum_Cmark->setText(subs[8]);
        ui->stum_Gmark->setText(subs[9]);
        ui->stum_Hmark->setText(subs[10]);
    }
    else if(what=="大学生")
    {
        ui->stul->setChecked(true);//选中 中学生
        for(int i=0;i<ui->major->count();i++)//专业
        {
            if(subs[6]==ui->major->itemText(i))
            {
                ui->major->setCurrentIndex(i);//选中对应序号班别
                break;
            }
        }
        ui->stul_Emark->setText(subs[7]);
        ui->stul_Pmark->setText(subs[8]);
        ui->stul_Mmark->setText(subs[9]);
    }
}

void changestu::on_btncancel_clicked()//点击取消，退出窗口
{
    this->close();
}

void changestu::on_btnok_clicked()//点击修改
{
    QString cnt;//修改后的信息

    //获取信息 姓名 学号 性别 班级
    QString name=this->ui->lname->text();
    QString id=this->ui->lid->text();
    QString sex;
    QString age=this->ui->lage->currentText();
    QString stuclass=this->ui->lstuclass->currentText();
    //初始化为信息无误
    int flag=1;
    int checkMark=1;//检查是否填写完成绩

    //判断性别
    if(this->ui->male->isChecked())//点击男
    {
        sex="男";
    }
    else if(this->ui->female->isChecked())//点击女
    {
        sex="女";
    }

    //判断学生就读类型
    if(this->ui->stus->isChecked())//点击小学生
    {
        if(ui->stus_Emark->text()==""||ui->stus_Mmark->text()==""||ui->stus_Cmark->text()=="")
            checkMark=0;
        cnt="小学生 "
              +id+" "
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
        //检查信息完整性
        if(ui->stum_Emark->text()==""||ui->stum_Mmark->text()==""||ui->stum_Cmark->text()==""
                ||ui->stum_Gmark->text()==""||ui->stum_Hmark->text()=="")
        {
            checkMark=0;
        }

        //存放信息
        cnt="中学生 "
              +id+" "
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
    else if(this->ui->stul->isChecked())  //点击大学生
    {
        //检测信息完整性
        if(ui->stul_Emark->text()==""||ui->stul_Pmark->text()==""||ui->stul_Mmark->text()=="")
        {
            checkMark=0;
        }
        //获取专业
        QString major=this->ui->major->currentText();
        //存放信息
        cnt="大学生 "
              +id+" "
              +name+" "
              +sex+" "
              +age+" "
              +stuclass+" "
              +major+" "
              +this->ui->stul_Emark->text()+" "
              +this->ui->stul_Pmark->text()+" "
              +this->ui->stul_Mmark->text()+"\n";
    }
    qDebug("%d",flag);//输出flag

    //判断填写的信息是否合法
    if(name.length()<1||id.length()<9||flag==0||checkMark==0) //信息填写不全
    {
        //警告
        QMessageBox::warning(this,"错误","信息填写不完整，请重新检查！");
        //不完整，信息有误
        flag=0;
    }
    //信息无误
    if(flag==1)
    {
        int ret =QMessageBox::question(this,"请确认信息","请确认是否填写无误？","保存","取消");
        //确认保存
        if(ret==0)
        {
            //修改信息
            writeStu(cnt);

            this->close();
        }
    }
}

//修改文件中的信息
void changestu::writeStu(QString cnt)
{
    QFile f("stu.txt");
    //打开判断
    if (!f.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::critical(this,"错误","文件打开失败！信息未保存！");
        return;
    }
    //重写文件被修改信息
    for(int i=0;i<stu_lines.size();i++)
    {
        QString temp=stu_lines[i].trimmed();//trimmed()用去去除前后的空格
                                            //以防万一
                                            //如果不用应该也没关系
        //那一行需要修改的信息 通过学号判断
        if(temp==idLine)
        {
            QTextStream out(&f);
            //写入修改后的信息
            out<<cnt;
            continue;
        }
        QTextStream out(&f);
        out<<stu_lines[i];
        out<<"\n";

    }

    QMessageBox::warning(this,"提示","成功修改信息");
    f.close();
}

/**************************************** 填写初始化 *************************************/

//填信息时，需要先选择就读类型在填写属性
//故在选择就读类型前 填的分数等信息 将全部作废 并初始化用户选择的就读类型中的信息

//对于小学生
void changestu::on_stus_clicked()
{

    this->ui->stus_Cmark->setText("0");
    this->ui->stus_Emark->setText("0");
    this->ui->stus_Mmark->setText("0");//默认成绩为0
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
    //初始化专业
    this->ui->major->setCurrentIndex(0);

    this->ui->stum->setCheckable(false);this->ui->stum->setCheckable(true);//取消按钮
    this->ui->stul->setCheckable(false);this->ui->stul->setCheckable(true);//取消按钮

    this->ui->stus->setFocus();//初始化光标位置
}

//对于中学生
void changestu::on_stum_clicked()
{
    //初始化中学生成绩
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
    //初始化专业
    this->ui->major->setCurrentIndex(0);

    this->ui->stus->setCheckable(false);this->ui->stus->setCheckable(true);//取消按钮
    this->ui->stul->setCheckable(false);this->ui->stul->setCheckable(true);//取消按钮
    this->ui->stum->setFocus();//初始化光标位置
}

//对于大学生
void changestu::on_stul_clicked()
{
    this->ui->stul_Emark->setText("0");this->ui->stul_Mmark->setText("0");this->ui->stul_Pmark->setText("0");//默认成绩
    this->ui->stus_Cmark->clear();this->ui->stus_Emark->clear();this->ui->stus_Mmark->clear();
    this->ui->stum_Cmark->clear();this->ui->stum_Emark->clear();this->ui->stum_Gmark->clear();
    this->ui->stum_Hmark->clear();this->ui->stum_Mmark->clear();
    this->ui->stus->setCheckable(false);this->ui->stus->setCheckable(true);//取消按钮
    this->ui->stum->setCheckable(false);this->ui->stum->setCheckable(true);//取消按钮
    this->ui->stul->setFocus();//初始化光标位置
}
