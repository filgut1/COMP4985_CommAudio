/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QAction *actionAudio_Stream;
    QAction *actionMulticast_Stream;
    QAction *actionVOIP;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menuAudio_Server;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName(QStringLiteral("Application"));
        Application->resize(732, 466);
        actionAudio_Stream = new QAction(Application);
        actionAudio_Stream->setObjectName(QStringLiteral("actionAudio_Stream"));
        actionMulticast_Stream = new QAction(Application);
        actionMulticast_Stream->setObjectName(QStringLiteral("actionMulticast_Stream"));
        actionVOIP = new QAction(Application);
        actionVOIP->setObjectName(QStringLiteral("actionVOIP"));
        centralWidget = new QWidget(Application);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Application->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Application);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 732, 21));
        menuAudio_Server = new QMenu(menuBar);
        menuAudio_Server->setObjectName(QStringLiteral("menuAudio_Server"));
        Application->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Application);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Application->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Application);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Application->setStatusBar(statusBar);

        menuBar->addAction(menuAudio_Server->menuAction());
        menuAudio_Server->addAction(actionAudio_Stream);
        menuAudio_Server->addAction(actionMulticast_Stream);
        menuAudio_Server->addAction(actionVOIP);

        retranslateUi(Application);

        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QMainWindow *Application)
    {
        Application->setWindowTitle(QApplication::translate("Application", "Application", 0));
        actionAudio_Stream->setText(QApplication::translate("Application", "Audio Streamer", 0));
        actionMulticast_Stream->setText(QApplication::translate("Application", "Radio", 0));
        actionVOIP->setText(QApplication::translate("Application", "VOIP", 0));
        menuAudio_Server->setTitle(QApplication::translate("Application", "Options", 0));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
