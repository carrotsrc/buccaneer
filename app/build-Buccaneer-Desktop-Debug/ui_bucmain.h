/********************************************************************************
** Form generated from reading UI file 'bucmain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUCMAIN_H
#define UI_BUCMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BucMain
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *mainBlock;
    QFrame *frame;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalMainlines;
    QVBoxLayout *verticalRack;
    QFrame *frame_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BucMain)
    {
        if (BucMain->objectName().isEmpty())
            BucMain->setObjectName(QString::fromUtf8("BucMain"));
        BucMain->resize(933, 572);
        centralWidget = new QWidget(BucMain);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 931, 521));
        mainBlock = new QHBoxLayout(horizontalLayoutWidget);
        mainBlock->setSpacing(6);
        mainBlock->setContentsMargins(11, 11, 11, 11);
        mainBlock->setObjectName(QString::fromUtf8("mainBlock"));
        mainBlock->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(horizontalLayoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(300, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_2 = new QWidget(frame);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 281, 501));
        verticalMainlines = new QVBoxLayout(verticalLayoutWidget_2);
        verticalMainlines->setSpacing(6);
        verticalMainlines->setContentsMargins(11, 11, 11, 11);
        verticalMainlines->setObjectName(QString::fromUtf8("verticalMainlines"));
        verticalMainlines->setContentsMargins(0, 0, 0, 0);

        mainBlock->addWidget(frame);

        verticalRack = new QVBoxLayout();
        verticalRack->setSpacing(6);
        verticalRack->setObjectName(QString::fromUtf8("verticalRack"));
        frame_2 = new QFrame(horizontalLayoutWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalRack->addWidget(frame_2);


        mainBlock->addLayout(verticalRack);

        BucMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BucMain);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 933, 20));
        BucMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BucMain);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BucMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BucMain);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BucMain->setStatusBar(statusBar);

        retranslateUi(BucMain);

        QMetaObject::connectSlotsByName(BucMain);
    } // setupUi

    void retranslateUi(QMainWindow *BucMain)
    {
        BucMain->setWindowTitle(QApplication::translate("BucMain", "BucMain", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BucMain: public Ui_BucMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUCMAIN_H