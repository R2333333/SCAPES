/********************************************************************************
** Form generated from reading UI file 'enterfilename.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERFILENAME_H
#define UI_ENTERFILENAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EnterFileName
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EnterFileName)
    {
        if (EnterFileName->objectName().isEmpty())
            EnterFileName->setObjectName(QString::fromUtf8("EnterFileName"));
        EnterFileName->resize(580, 114);
        verticalLayout = new QVBoxLayout(EnterFileName);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(EnterFileName);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(EnterFileName);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(EnterFileName);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EnterFileName);
        QObject::connect(buttonBox, SIGNAL(accepted()), EnterFileName, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EnterFileName, SLOT(reject()));

        QMetaObject::connectSlotsByName(EnterFileName);
    } // setupUi

    void retranslateUi(QDialog *EnterFileName)
    {
        EnterFileName->setWindowTitle(QCoreApplication::translate("EnterFileName", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EnterFileName", "Please enter file name :)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterFileName: public Ui_EnterFileName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERFILENAME_H
