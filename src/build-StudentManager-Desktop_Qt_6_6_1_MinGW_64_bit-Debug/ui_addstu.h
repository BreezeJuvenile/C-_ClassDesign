/********************************************************************************
** Form generated from reading UI file 'addstu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTU_H
#define UI_ADDSTU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addstu
{
public:
    QLabel *label_8;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *stul_Mmark;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *stul_Pmark;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *stus_Emark;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *stus_Cmark;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLineEdit *stus_Mmark;
    QRadioButton *stus;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_16;
    QLineEdit *stum_Emark;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_17;
    QLineEdit *stum_Mmark;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_18;
    QLineEdit *stum_Cmark;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_20;
    QLineEdit *stum_Gmark;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_21;
    QLineEdit *stum_Hmark;
    QRadioButton *stum;
    QRadioButton *stul;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *stul_Emark;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *major;
    QSpacerItem *horizontalSpacer_6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lid;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lname;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QRadioButton *male;
    QRadioButton *female;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *lage;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *lstuclass;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *btnok;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btncancel;
    QWidget *widget;
    QButtonGroup *stuchoose;
    QButtonGroup *sexchoose;

    void setupUi(QDialog *addstu)
    {
        if (addstu->objectName().isEmpty())
            addstu->setObjectName("addstu");
        addstu->resize(550, 630);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addstu->sizePolicy().hasHeightForWidth());
        addstu->setSizePolicy(sizePolicy);
        addstu->setMinimumSize(QSize(550, 630));
        addstu->setMaximumSize(QSize(550, 630));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        addstu->setWindowIcon(icon);
        addstu->setStyleSheet(QString::fromUtf8("background-image: url(:/images/chunSe.gif);"));
        label_8 = new QLabel(addstu);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 10, 501, 41));
        label_8->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        label_8->setAlignment(Qt::AlignCenter);
        layoutWidget_3 = new QWidget(addstu);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(380, 530, 161, 24));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_10->addWidget(label_12);

        stul_Mmark = new QLineEdit(layoutWidget_3);
        stul_Mmark->setObjectName("stul_Mmark");
        stul_Mmark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stul_Mmark->setMaxLength(3);

        horizontalLayout_10->addWidget(stul_Mmark);

        horizontalLayout_10->setStretch(0, 3);
        horizontalLayout_10->setStretch(1, 1);
        layoutWidget_4 = new QWidget(addstu);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(200, 530, 161, 24));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_4);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_11->addWidget(label_13);

        stul_Pmark = new QLineEdit(layoutWidget_4);
        stul_Pmark->setObjectName("stul_Pmark");
        stul_Pmark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stul_Pmark->setMaxLength(3);

        horizontalLayout_11->addWidget(stul_Pmark);

        horizontalLayout_11->setStretch(0, 3);
        horizontalLayout_11->setStretch(1, 1);
        layoutWidget_2 = new QWidget(addstu);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 310, 161, 24));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_8->addWidget(label_10);

        stus_Emark = new QLineEdit(layoutWidget_2);
        stus_Emark->setObjectName("stus_Emark");
        stus_Emark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";\n"
""));
        stus_Emark->setMaxLength(3);

        horizontalLayout_8->addWidget(stus_Emark);

        horizontalLayout_8->setStretch(0, 3);
        horizontalLayout_8->setStretch(1, 1);
        layoutWidget_5 = new QWidget(addstu);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(380, 310, 161, 24));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_5);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_12->addWidget(label_14);

        stus_Cmark = new QLineEdit(layoutWidget_5);
        stus_Cmark->setObjectName("stus_Cmark");
        stus_Cmark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stus_Cmark->setMaxLength(3);

        horizontalLayout_12->addWidget(stus_Cmark);

        horizontalLayout_12->setStretch(0, 3);
        horizontalLayout_12->setStretch(1, 1);
        layoutWidget_6 = new QWidget(addstu);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(200, 310, 161, 24));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_6);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_13->addWidget(label_15);

        stus_Mmark = new QLineEdit(layoutWidget_6);
        stus_Mmark->setObjectName("stus_Mmark");
        stus_Mmark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stus_Mmark->setMaxLength(3);

        horizontalLayout_13->addWidget(stus_Mmark);

        horizontalLayout_13->setStretch(0, 3);
        horizontalLayout_13->setStretch(1, 1);
        stus = new QRadioButton(addstu);
        stuchoose = new QButtonGroup(addstu);
        stuchoose->setObjectName("stuchoose");
        stuchoose->addButton(stus);
        stus->setObjectName("stus");
        stus->setGeometry(QRect(20, 270, 471, 31));
        stus->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        layoutWidget_7 = new QWidget(addstu);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(20, 380, 161, 24));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_7);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_14->addWidget(label_16);

        stum_Emark = new QLineEdit(layoutWidget_7);
        stum_Emark->setObjectName("stum_Emark");
        stum_Emark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stum_Emark->setMaxLength(3);

        horizontalLayout_14->addWidget(stum_Emark);

        horizontalLayout_14->setStretch(0, 3);
        horizontalLayout_14->setStretch(1, 1);
        layoutWidget_8 = new QWidget(addstu);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(200, 380, 161, 24));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_8);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_15->addWidget(label_17);

        stum_Mmark = new QLineEdit(layoutWidget_8);
        stum_Mmark->setObjectName("stum_Mmark");
        stum_Mmark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stum_Mmark->setMaxLength(3);

        horizontalLayout_15->addWidget(stum_Mmark);

        horizontalLayout_15->setStretch(0, 3);
        horizontalLayout_15->setStretch(1, 1);
        layoutWidget_9 = new QWidget(addstu);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(380, 380, 161, 24));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_9);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_16->addWidget(label_18);

        stum_Cmark = new QLineEdit(layoutWidget_9);
        stum_Cmark->setObjectName("stum_Cmark");
        stum_Cmark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stum_Cmark->setMaxLength(3);

        horizontalLayout_16->addWidget(stum_Cmark);

        horizontalLayout_16->setStretch(0, 3);
        horizontalLayout_16->setStretch(1, 1);
        layoutWidget_11 = new QWidget(addstu);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(20, 420, 161, 24));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_11);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_18->addWidget(label_20);

        stum_Gmark = new QLineEdit(layoutWidget_11);
        stum_Gmark->setObjectName("stum_Gmark");
        stum_Gmark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stum_Gmark->setMaxLength(3);

        horizontalLayout_18->addWidget(stum_Gmark);

        horizontalLayout_18->setStretch(0, 3);
        horizontalLayout_18->setStretch(1, 1);
        layoutWidget_12 = new QWidget(addstu);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(200, 420, 161, 24));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_12);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_19->addWidget(label_21);

        stum_Hmark = new QLineEdit(layoutWidget_12);
        stum_Hmark->setObjectName("stum_Hmark");
        stum_Hmark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stum_Hmark->setMaxLength(3);

        horizontalLayout_19->addWidget(stum_Hmark);

        horizontalLayout_19->setStretch(0, 3);
        horizontalLayout_19->setStretch(1, 1);
        stum = new QRadioButton(addstu);
        stuchoose->addButton(stum);
        stum->setObjectName("stum");
        stum->setGeometry(QRect(20, 340, 471, 31));
        stum->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stul = new QRadioButton(addstu);
        stuchoose->addButton(stul);
        stul->setObjectName("stul");
        stul->setGeometry(QRect(20, 450, 471, 31));
        stul->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        layoutWidget = new QWidget(addstu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 530, 161, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_7->addWidget(label_9);

        stul_Emark = new QLineEdit(layoutWidget);
        stul_Emark->setObjectName("stul_Emark");
        stul_Emark->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        stul_Emark->setMaxLength(3);

        horizontalLayout_7->addWidget(stul_Emark);

        horizontalLayout_7->setStretch(0, 3);
        horizontalLayout_7->setStretch(1, 1);
        layoutWidget1 = new QWidget(addstu);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 490, 471, 24));
        layoutWidget1->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_6->addWidget(label_7);

        major = new QComboBox(layoutWidget1);
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->setObjectName("major");
        major->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_6->addWidget(major);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 3);
        horizontalLayout_6->setStretch(2, 8);
        layoutWidget2 = new QWidget(addstu);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 71, 501, 191));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout->addWidget(label);

        lid = new QLineEdit(layoutWidget2);
        lid->setObjectName("lid");
        lid->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        lid->setMaxLength(9);
        lid->setEchoMode(QLineEdit::Normal);
        lid->setReadOnly(false);
        lid->setClearButtonEnabled(true);

        horizontalLayout->addWidget(lid);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_2->addWidget(label_2);

        lname = new QLineEdit(layoutWidget2);
        lname->setObjectName("lname");
        lname->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        lname->setMaxLength(5);
        lname->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(lname);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_3->addWidget(label_3);

        male = new QRadioButton(layoutWidget2);
        sexchoose = new QButtonGroup(addstu);
        sexchoose->setObjectName("sexchoose");
        sexchoose->addButton(male);
        male->setObjectName("male");
        male->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));
        male->setCheckable(true);
        male->setChecked(false);

        horizontalLayout_3->addWidget(male);

        female = new QRadioButton(layoutWidget2);
        sexchoose->addButton(female);
        female->setObjectName("female");
        female->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_3->addWidget(female);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_4->addWidget(label_4);

        lage = new QComboBox(layoutWidget2);
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->addItem(QString());
        lage->setObjectName("lage");

        horizontalLayout_4->addWidget(lage);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 6);
        horizontalLayout_4->setStretch(2, 12);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        horizontalLayout_5->addWidget(label_5);

        lstuclass = new QComboBox(layoutWidget2);
        lstuclass->addItem(QString());
        lstuclass->addItem(QString());
        lstuclass->addItem(QString());
        lstuclass->addItem(QString());
        lstuclass->addItem(QString());
        lstuclass->addItem(QString());
        lstuclass->addItem(QString());
        lstuclass->addItem(QString());
        lstuclass->addItem(QString());
        lstuclass->setObjectName("lstuclass");

        horizontalLayout_5->addWidget(lstuclass);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 6);
        horizontalLayout_5->setStretch(2, 12);

        verticalLayout->addLayout(horizontalLayout_5);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"Agency FB\";"));

        verticalLayout->addWidget(label_6);

        layoutWidget3 = new QWidget(addstu);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(160, 580, 221, 41));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        btnok = new QPushButton(layoutWidget3);
        btnok->setObjectName("btnok");

        horizontalLayout_17->addWidget(btnok);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        btncancel = new QPushButton(layoutWidget3);
        btncancel->setObjectName("btncancel");

        horizontalLayout_17->addWidget(btncancel);

        horizontalLayout_17->setStretch(0, 5);
        horizontalLayout_17->setStretch(1, 2);
        horizontalLayout_17->setStretch(2, 5);
        widget = new QWidget(addstu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(300, 140, 105, 98));
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/images/kekelaba1.gif);"));
        layoutWidget1->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        label_8->raise();
        layoutWidget1->raise();
        layoutWidget_3->raise();
        layoutWidget_4->raise();
        layoutWidget_2->raise();
        layoutWidget_5->raise();
        layoutWidget_6->raise();
        stus->raise();
        layoutWidget_7->raise();
        layoutWidget_8->raise();
        layoutWidget_9->raise();
        layoutWidget_11->raise();
        layoutWidget_12->raise();
        stum->raise();
        stul->raise();
        widget->raise();
        QWidget::setTabOrder(lid, lname);
        QWidget::setTabOrder(lname, male);
        QWidget::setTabOrder(male, female);
        QWidget::setTabOrder(female, stus);
        QWidget::setTabOrder(stus, stus_Emark);
        QWidget::setTabOrder(stus_Emark, stus_Mmark);
        QWidget::setTabOrder(stus_Mmark, stus_Cmark);
        QWidget::setTabOrder(stus_Cmark, stum);
        QWidget::setTabOrder(stum, stum_Emark);
        QWidget::setTabOrder(stum_Emark, stum_Mmark);
        QWidget::setTabOrder(stum_Mmark, stum_Cmark);
        QWidget::setTabOrder(stum_Cmark, stum_Gmark);
        QWidget::setTabOrder(stum_Gmark, stum_Hmark);
        QWidget::setTabOrder(stum_Hmark, stul);
        QWidget::setTabOrder(stul, major);
        QWidget::setTabOrder(major, stul_Emark);
        QWidget::setTabOrder(stul_Emark, stul_Pmark);
        QWidget::setTabOrder(stul_Pmark, stul_Mmark);
        QWidget::setTabOrder(stul_Mmark, btnok);
        QWidget::setTabOrder(btnok, btncancel);

        retranslateUi(addstu);

        QMetaObject::connectSlotsByName(addstu);
    } // setupUi

    void retranslateUi(QDialog *addstu)
    {
        addstu->setWindowTitle(QCoreApplication::translate("addstu", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("addstu", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_12->setText(QCoreApplication::translate("addstu", "\351\253\230\346\225\260\346\210\220\347\273\251\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("addstu", "\347\250\213\345\272\217\350\256\276\350\256\241\346\210\220\347\273\251\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("addstu", "\350\213\261\350\257\255\346\210\220\347\273\251\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("addstu", "\350\257\255\346\226\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("addstu", "\346\225\260\345\255\246\346\210\220\347\273\251\357\274\232", nullptr));
        stus->setText(QCoreApplication::translate("addstu", "\345\260\217\345\255\246\347\224\237", nullptr));
        label_16->setText(QCoreApplication::translate("addstu", "\350\213\261\350\257\255\346\210\220\347\273\251\357\274\232", nullptr));
        label_17->setText(QCoreApplication::translate("addstu", "\346\225\260\345\255\246\346\210\220\347\273\251\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("addstu", "\350\257\255\346\226\207\346\210\220\347\273\251\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("addstu", "\345\234\260\347\220\206\346\210\220\347\273\251\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("addstu", "\345\216\206\345\217\262\346\210\220\347\273\251\357\274\232", nullptr));
        stum->setText(QCoreApplication::translate("addstu", "\344\270\255\345\255\246\347\224\237", nullptr));
        stul->setText(QCoreApplication::translate("addstu", "\345\244\247\345\255\246\347\224\237", nullptr));
        label_9->setText(QCoreApplication::translate("addstu", "\350\213\261\350\257\255\346\210\220\347\273\251\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("addstu", "\344\270\223\344\270\232\357\274\232", nullptr));
        major->setItemText(0, QCoreApplication::translate("addstu", "\350\256\241\347\256\227\346\234\272\347\261\273", nullptr));
        major->setItemText(1, QCoreApplication::translate("addstu", "\346\234\272\346\242\260\347\261\273", nullptr));
        major->setItemText(2, QCoreApplication::translate("addstu", "\350\207\252\345\212\250\345\214\226\347\261\273", nullptr));
        major->setItemText(3, QCoreApplication::translate("addstu", "\347\224\265\345\255\220\344\277\241\346\201\257\347\261\273", nullptr));
        major->setItemText(4, QCoreApplication::translate("addstu", "\347\273\217\346\265\216\345\255\246\347\261\273", nullptr));

        label->setText(QCoreApplication::translate("addstu", "\345\255\246\345\217\267\357\274\232", nullptr));
        lid->setPlaceholderText(QCoreApplication::translate("addstu", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\2109\344\275\215\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("addstu", "\345\247\223\345\220\215\357\274\232", nullptr));
        lname->setPlaceholderText(QCoreApplication::translate("addstu", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("addstu", "\346\200\247\345\210\253\357\274\232", nullptr));
        male->setText(QCoreApplication::translate("addstu", "\347\224\267", nullptr));
        female->setText(QCoreApplication::translate("addstu", "\345\245\263", nullptr));
        label_4->setText(QCoreApplication::translate("addstu", "\345\271\264\351\276\204\357\274\232", nullptr));
        lage->setItemText(0, QCoreApplication::translate("addstu", "6", nullptr));
        lage->setItemText(1, QCoreApplication::translate("addstu", "7", nullptr));
        lage->setItemText(2, QCoreApplication::translate("addstu", "8", nullptr));
        lage->setItemText(3, QCoreApplication::translate("addstu", "9", nullptr));
        lage->setItemText(4, QCoreApplication::translate("addstu", "10", nullptr));
        lage->setItemText(5, QCoreApplication::translate("addstu", "11", nullptr));
        lage->setItemText(6, QCoreApplication::translate("addstu", "12", nullptr));
        lage->setItemText(7, QCoreApplication::translate("addstu", "13", nullptr));
        lage->setItemText(8, QCoreApplication::translate("addstu", "14", nullptr));
        lage->setItemText(9, QCoreApplication::translate("addstu", "15", nullptr));
        lage->setItemText(10, QCoreApplication::translate("addstu", "16", nullptr));
        lage->setItemText(11, QCoreApplication::translate("addstu", "17", nullptr));
        lage->setItemText(12, QCoreApplication::translate("addstu", "18", nullptr));
        lage->setItemText(13, QCoreApplication::translate("addstu", "19", nullptr));
        lage->setItemText(14, QCoreApplication::translate("addstu", "20", nullptr));
        lage->setItemText(15, QCoreApplication::translate("addstu", "21", nullptr));
        lage->setItemText(16, QCoreApplication::translate("addstu", "22", nullptr));

        label_5->setText(QCoreApplication::translate("addstu", "\347\217\255\347\272\247\357\274\232", nullptr));
        lstuclass->setItemText(0, QCoreApplication::translate("addstu", "232", nullptr));
        lstuclass->setItemText(1, QCoreApplication::translate("addstu", "231", nullptr));
        lstuclass->setItemText(2, QCoreApplication::translate("addstu", "233", nullptr));
        lstuclass->setItemText(3, QCoreApplication::translate("addstu", "222", nullptr));
        lstuclass->setItemText(4, QCoreApplication::translate("addstu", "221", nullptr));
        lstuclass->setItemText(5, QCoreApplication::translate("addstu", "211", nullptr));
        lstuclass->setItemText(6, QCoreApplication::translate("addstu", "223", nullptr));
        lstuclass->setItemText(7, QCoreApplication::translate("addstu", "212", nullptr));
        lstuclass->setItemText(8, QCoreApplication::translate("addstu", "213", nullptr));

        lstuclass->setCurrentText(QCoreApplication::translate("addstu", "232", nullptr));
        label_6->setText(QCoreApplication::translate("addstu", "*\346\240\271\346\215\256\345\234\250\350\257\273\347\212\266\345\206\265\345\241\253\345\206\231\346\210\220\347\273\251\357\274\232\357\274\210\346\234\252\345\241\253\345\206\231\345\210\231\351\273\230\350\256\244\344\270\2720\345\210\206\357\274\201\357\274\211", nullptr));
        btnok->setText(QCoreApplication::translate("addstu", "\347\241\256\350\256\244", nullptr));
        btncancel->setText(QCoreApplication::translate("addstu", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addstu: public Ui_addstu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTU_H
