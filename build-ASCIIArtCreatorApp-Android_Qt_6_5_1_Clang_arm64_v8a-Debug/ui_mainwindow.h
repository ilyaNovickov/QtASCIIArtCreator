/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionExit;
    QAction *action_Copy;
    QAction *actionAbout_program;
    QAction *actionAbout_Qt;
    QAction *actionSelect_All;
    QAction *actionaction_Start;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *widthSpineBox;
    QLabel *label_3;
    QSpinBox *heightSpineBox;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox;
    QCheckBox *invertColorCheckBox;
    QComboBox *comboBox;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *fontSizeLabel;
    QSlider *horizontalSlider;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuEdit;
    QMenu *menuSettings;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(795, 585);
        MainWindow->setMinimumSize(QSize(160, 0));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName("action_Open");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/open.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Open->setIcon(icon);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName("action_Save");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icons/res/icons/save.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Save->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName("action_Copy");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/copy.png"), QSize(), QIcon::Normal, QIcon::On);
        action_Copy->setIcon(icon2);
        actionAbout_program = new QAction(MainWindow);
        actionAbout_program->setObjectName("actionAbout_program");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/res/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/res/icons/about.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAbout_program->setIcon(icon3);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName("actionAbout_Qt");
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName("actionSelect_All");
        actionaction_Start = new QAction(MainWindow);
        actionaction_Start->setObjectName("actionaction_Start");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/icons/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/res/icons/new.png"), QSize(), QIcon::Normal, QIcon::On);
        actionaction_Start->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        widthSpineBox = new QSpinBox(groupBox);
        widthSpineBox->setObjectName("widthSpineBox");
        widthSpineBox->setMinimum(2);
        widthSpineBox->setMaximum(1000);
        widthSpineBox->setValue(500);

        horizontalLayout_3->addWidget(widthSpineBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        heightSpineBox = new QSpinBox(groupBox);
        heightSpineBox->setObjectName("heightSpineBox");
        heightSpineBox->setMinimum(2);
        heightSpineBox->setMaximum(1000);
        heightSpineBox->setValue(500);

        horizontalLayout_3->addWidget(heightSpineBox);


        horizontalLayout_2->addWidget(groupBox);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        checkBox = new QCheckBox(widget_5);
        checkBox->setObjectName("checkBox");
        checkBox->setTristate(false);

        horizontalLayout_4->addWidget(checkBox);

        invertColorCheckBox = new QCheckBox(widget_5);
        invertColorCheckBox->setObjectName("invertColorCheckBox");

        horizontalLayout_4->addWidget(invertColorCheckBox);


        verticalLayout_2->addWidget(widget_5);

        comboBox = new QComboBox(widget_3);
        comboBox->setObjectName("comboBox");

        verticalLayout_2->addWidget(comboBox);


        horizontalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        fontSizeLabel = new QLabel(widget_4);
        fontSizeLabel->setObjectName("fontSizeLabel");

        verticalLayout_3->addWidget(fontSizeLabel);

        horizontalSlider = new QSlider(widget_4);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(32);
        horizontalSlider->setPageStep(4);
        horizontalSlider->setValue(9);
        horizontalSlider->setSliderPosition(9);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);
        horizontalSlider->setTickInterval(1);

        verticalLayout_3->addWidget(horizontalSlider);


        horizontalLayout_2->addWidget(widget_4);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setFrameShadow(QFrame::Raised);
        scrollArea->setLineWidth(2);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 364, 280));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        plainTextEdit->setFont(font);
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEdit->setReadOnly(true);

        horizontalLayout->addWidget(plainTextEdit);


        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 795, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName("menu_File");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName("menuSettings");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        menuEdit->addAction(action_Copy);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuAbout->addAction(actionAbout_program);
        menuAbout->addAction(actionAbout_Qt);
        toolBar->addAction(action_Open);
        toolBar->addAction(action_Save);
        toolBar->addSeparator();
        toolBar->addAction(action_Copy);
        toolBar->addSeparator();
        toolBar->addAction(actionaction_Start);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(actionSelect_All, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::selectAll));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ASCII Art Creator", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        action_Copy->setText(QCoreApplication::translate("MainWindow", "&Copy", nullptr));
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_program->setText(QCoreApplication::translate("MainWindow", "About program", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select &All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_All->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionaction_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Image Size", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Hide Image", nullptr));
        invertColorCheckBox->setText(QCoreApplication::translate("MainWindow", "Invevrt Color", nullptr));
        fontSizeLabel->setText(QCoreApplication::translate("MainWindow", "Font Size : -1", nullptr));
        label->setText(QString());
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
