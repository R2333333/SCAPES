/********************************************************************************
** Form generated from reading UI file 'manageprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEPROGRAM_H
#define UI_MANAGEPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ManageProgram
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ManageProgram)
    {
        if (ManageProgram->objectName().isEmpty())
            ManageProgram->setObjectName(QString::fromUtf8("ManageProgram"));
        ManageProgram->resize(400, 300);
        verticalLayout = new QVBoxLayout(ManageProgram);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(ManageProgram);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ManageProgram);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(ManageProgram);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(ManageProgram);

        QMetaObject::connectSlotsByName(ManageProgram);
    } // setupUi

    void retranslateUi(QDialog *ManageProgram)
    {
        ManageProgram->setWindowTitle(QCoreApplication::translate("ManageProgram", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ManageProgram", "Create Program", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ManageProgram", "Open Program", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ManageProgram", "Compile Program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageProgram: public Ui_ManageProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPROGRAM_H
