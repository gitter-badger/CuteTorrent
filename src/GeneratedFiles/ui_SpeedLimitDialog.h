/********************************************************************************
** Form generated from reading UI file 'SpeedLimitDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEEDLIMITDIALOG_H
#define UI_SPEEDLIMITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpeedLimitDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *titleBar;
    QHBoxLayout *horizontalLayout;
    QLabel *tbMenu;
    QLabel *LTitle;
    QPushButton *pbClose;
    QWidget *m_centralWidget;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QLabel *label;
    QSlider *horizontalSlider;

    void setupUi(QWidget *SpeedLimitDialog)
    {
        if (SpeedLimitDialog->objectName().isEmpty())
            SpeedLimitDialog->setObjectName(QString::fromUtf8("SpeedLimitDialog"));
        SpeedLimitDialog->resize(274, 119);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/app.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedLimitDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SpeedLimitDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 0);
        titleBar = new QWidget(SpeedLimitDialog);
        titleBar->setObjectName(QString::fromUtf8("titleBar"));
        titleBar->setMinimumSize(QSize(0, 23));
        titleBar->setMaximumSize(QSize(16777215, 23));
        titleBar->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(titleBar);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 0, 1, 0);
        tbMenu = new QLabel(titleBar);
        tbMenu->setObjectName(QString::fromUtf8("tbMenu"));
        tbMenu->setMaximumSize(QSize(15, 15));
        tbMenu->setPixmap(QPixmap(QString::fromUtf8(":/icons/app.ico")));
        tbMenu->setScaledContents(true);

        horizontalLayout->addWidget(tbMenu);

        LTitle = new QLabel(titleBar);
        LTitle->setObjectName(QString::fromUtf8("LTitle"));
        LTitle->setMinimumSize(QSize(100, 22));
        LTitle->setMaximumSize(QSize(16777215, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        font.setStyleStrategy(QFont::PreferDefault);
        LTitle->setFont(font);
        LTitle->setStyleSheet(QString::fromUtf8(""));
        LTitle->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(LTitle);

        pbClose = new QPushButton(titleBar);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setMinimumSize(QSize(22, 22));
        pbClose->setMaximumSize(QSize(22, 22));
        pbClose->setIconSize(QSize(22, 22));
        pbClose->setFlat(true);

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addWidget(titleBar);

        m_centralWidget = new QWidget(SpeedLimitDialog);
        m_centralWidget->setObjectName(QString::fromUtf8("m_centralWidget"));
        gridLayout = new QGridLayout(m_centralWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(m_centralWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        spinBox = new QSpinBox(m_centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 0, 1, 1, 1);

        label = new QLabel(m_centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSlider = new QSlider(m_centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(500000);
        horizontalSlider->setSingleStep(100);
        horizontalSlider->setPageStep(1000);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 2);


        verticalLayout->addWidget(m_centralWidget);


        retranslateUi(SpeedLimitDialog);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), SpeedLimitDialog, SLOT(OnSpeedChanged(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), SpeedLimitDialog, SLOT(OnSpeedChanged(int)));

        QMetaObject::connectSlotsByName(SpeedLimitDialog);
    } // setupUi

    void retranslateUi(QWidget *SpeedLimitDialog)
    {
        SpeedLimitDialog->setWindowTitle(QApplication::translate("SpeedLimitDialog", "SPEED_LIMIT_DIALOG", 0, QApplication::UnicodeUTF8));
        tbMenu->setText(QString());
        LTitle->setText(QApplication::translate("SpeedLimitDialog", "SPEED_LIMIT_DIALOG", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SpeedLimitDialog", "LIMIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpeedLimitDialog: public Ui_SpeedLimitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEEDLIMITDIALOG_H
