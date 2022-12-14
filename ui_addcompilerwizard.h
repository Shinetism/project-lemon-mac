/********************************************************************************
** Form generated from reading UI file 'addcompilerwizard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPILERWIZARD_H
#define UI_ADDCOMPILERWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_AddCompilerWizard
{
public:
    QWizardPage *selectTypePage;
    QVBoxLayout *verticalLayout_6;
    QLabel *stepOneLabel;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *customRadioButton;
    QVBoxLayout *verticalLayout;
    QRadioButton *builtinRadioButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFrame *compilersCollection;
    QHBoxLayout *horizontalLayout;
    QCheckBox *gccCheck;
    QCheckBox *gppCheck;
    QCheckBox *fpcCheck;
    QCheckBox *fbcCheck;
    QCheckBox *jdkCheck;
    QCheckBox *pythonCheck;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWizardPage *customPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *stepTwoLabel;
    QGridLayout *gridLayout_3;
    QLabel *compilerNameLabel;
    QLineEdit *compilerName;
    QLabel *compilerTypeLabel;
    QComboBox *typeSelect;
    QLabel *compilerLocationLabel;
    QLineEdit *compilerLocation;
    QToolButton *compilerSelectButton;
    QLabel *interpreterLocationLabel;
    QLineEdit *interpreterLocation;
    QToolButton *interpreterSelectButton;
    QLabel *sourceFileExtensionsLabel;
    QLineEdit *sourceFileExtensions;
    QLabel *bytecodeFileExtensionsLabel;
    QLineEdit *bytecodeFileExtensions;
    QLabel *defaultCompilerArgumentsLabel;
    QLineEdit *defaultCompilerArguments;
    QLabel *defaultInterpreterArgumentsLabel;
    QLineEdit *defaultInterpreterArguments;
    QSpacerItem *verticalSpacer_3;
    QWizardPage *builtinCompilersPage;
    QVBoxLayout *verticalLayout_12;
    QLabel *stepTwoLabel_2;
    QGridLayout *gridLayout;
    QGroupBox *gccGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *gccPath;
    QToolButton *gccSelectButton;
    QCheckBox *gccO2Check;
    QGroupBox *gppGroupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *gppPath;
    QToolButton *gppSelectButton;
    QCheckBox *gppO2Check;
    QGroupBox *fpcGroupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *fpcPath;
    QToolButton *fpcSelectButton;
    QCheckBox *fpcO2Check;
    QGroupBox *fbcGroupBox;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *fbcPath;
    QToolButton *fbcSelectButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *javaGroupBox;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *javacPath;
    QToolButton *javacSelectButton;
    QLabel *label_2;
    QLineEdit *javaPath;
    QToolButton *javaSelectButton;
    QHBoxLayout *horizontalLayout_13;
    QLabel *javaMemoryLimitLabel;
    QLineEdit *javaMemoryLimit;
    QLabel *javaMbLabel;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *pythonGroupBox;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *pythonPath;
    QToolButton *pythonSelectButton;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QWizardPage *finishPage;
    QVBoxLayout *verticalLayout_5;
    QLabel *stepThreeLabel;
    QPlainTextEdit *logViewer;

    void setupUi(QWizard *AddCompilerWizard)
    {
        if (AddCompilerWizard->objectName().isEmpty())
            AddCompilerWizard->setObjectName(QString::fromUtf8("AddCompilerWizard"));
        AddCompilerWizard->resize(470, 450);
        AddCompilerWizard->setMinimumSize(QSize(470, 450));
        AddCompilerWizard->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        selectTypePage = new QWizardPage();
        selectTypePage->setObjectName(QString::fromUtf8("selectTypePage"));
        verticalLayout_6 = new QVBoxLayout(selectTypePage);
        verticalLayout_6->setSpacing(8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        stepOneLabel = new QLabel(selectTypePage);
        stepOneLabel->setObjectName(QString::fromUtf8("stepOneLabel"));
        stepOneLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));
        stepOneLabel->setWordWrap(true);

        verticalLayout_6->addWidget(stepOneLabel);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        customRadioButton = new QRadioButton(selectTypePage);
        customRadioButton->setObjectName(QString::fromUtf8("customRadioButton"));
        customRadioButton->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        verticalLayout_3->addWidget(customRadioButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        builtinRadioButton = new QRadioButton(selectTypePage);
        builtinRadioButton->setObjectName(QString::fromUtf8("builtinRadioButton"));
        builtinRadioButton->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        builtinRadioButton->setChecked(true);

        verticalLayout->addWidget(builtinRadioButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        compilersCollection = new QFrame(selectTypePage);
        compilersCollection->setObjectName(QString::fromUtf8("compilersCollection"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(compilersCollection->sizePolicy().hasHeightForWidth());
        compilersCollection->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(compilersCollection);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gccCheck = new QCheckBox(compilersCollection);
        gccCheck->setObjectName(QString::fromUtf8("gccCheck"));
        gccCheck->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        gccCheck->setText(QString::fromUtf8("gcc"));
        gccCheck->setChecked(true);

        horizontalLayout->addWidget(gccCheck);

        gppCheck = new QCheckBox(compilersCollection);
        gppCheck->setObjectName(QString::fromUtf8("gppCheck"));
        gppCheck->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        gppCheck->setText(QString::fromUtf8("g++"));
        gppCheck->setChecked(true);

        horizontalLayout->addWidget(gppCheck);

        fpcCheck = new QCheckBox(compilersCollection);
        fpcCheck->setObjectName(QString::fromUtf8("fpcCheck"));
        fpcCheck->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        fpcCheck->setText(QString::fromUtf8("fpc"));
        fpcCheck->setChecked(true);

        horizontalLayout->addWidget(fpcCheck);

        fbcCheck = new QCheckBox(compilersCollection);
        fbcCheck->setObjectName(QString::fromUtf8("fbcCheck"));
        fbcCheck->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        fbcCheck->setText(QString::fromUtf8("fbc"));

        horizontalLayout->addWidget(fbcCheck);

        jdkCheck = new QCheckBox(compilersCollection);
        jdkCheck->setObjectName(QString::fromUtf8("jdkCheck"));
        jdkCheck->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        jdkCheck->setText(QString::fromUtf8("jdk"));

        horizontalLayout->addWidget(jdkCheck);

        pythonCheck = new QCheckBox(compilersCollection);
        pythonCheck->setObjectName(QString::fromUtf8("pythonCheck"));
        pythonCheck->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        pythonCheck->setText(QString::fromUtf8("python"));

        horizontalLayout->addWidget(pythonCheck);


        horizontalLayout_2->addWidget(compilersCollection);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_12->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_12);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        AddCompilerWizard->addPage(selectTypePage);
        customPage = new QWizardPage();
        customPage->setObjectName(QString::fromUtf8("customPage"));
        verticalLayout_4 = new QVBoxLayout(customPage);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        stepTwoLabel = new QLabel(customPage);
        stepTwoLabel->setObjectName(QString::fromUtf8("stepTwoLabel"));
        stepTwoLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));
        stepTwoLabel->setWordWrap(true);

        verticalLayout_4->addWidget(stepTwoLabel);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        gridLayout_3->setVerticalSpacing(9);
        compilerNameLabel = new QLabel(customPage);
        compilerNameLabel->setObjectName(QString::fromUtf8("compilerNameLabel"));
        compilerNameLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(compilerNameLabel, 0, 0, 1, 1);

        compilerName = new QLineEdit(customPage);
        compilerName->setObjectName(QString::fromUtf8("compilerName"));
        compilerName->setMinimumSize(QSize(61, 0));
        compilerName->setMaximumSize(QSize(150, 16777215));
        compilerName->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(compilerName, 0, 1, 1, 1);

        compilerTypeLabel = new QLabel(customPage);
        compilerTypeLabel->setObjectName(QString::fromUtf8("compilerTypeLabel"));
        compilerTypeLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(compilerTypeLabel, 1, 0, 1, 1);

        typeSelect = new QComboBox(customPage);
        typeSelect->addItem(QString());
        typeSelect->addItem(QString());
        typeSelect->addItem(QString());
        typeSelect->setObjectName(QString::fromUtf8("typeSelect"));
        typeSelect->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(typeSelect, 1, 1, 1, 2);

        compilerLocationLabel = new QLabel(customPage);
        compilerLocationLabel->setObjectName(QString::fromUtf8("compilerLocationLabel"));
        compilerLocationLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(compilerLocationLabel, 2, 0, 1, 1);

        compilerLocation = new QLineEdit(customPage);
        compilerLocation->setObjectName(QString::fromUtf8("compilerLocation"));
        compilerLocation->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(compilerLocation, 2, 1, 1, 1);

        compilerSelectButton = new QToolButton(customPage);
        compilerSelectButton->setObjectName(QString::fromUtf8("compilerSelectButton"));
        compilerSelectButton->setStyleSheet(QString::fromUtf8("font-size:9pt;"));
        compilerSelectButton->setText(QString::fromUtf8("..."));

        gridLayout_3->addWidget(compilerSelectButton, 2, 2, 1, 1);

        interpreterLocationLabel = new QLabel(customPage);
        interpreterLocationLabel->setObjectName(QString::fromUtf8("interpreterLocationLabel"));
        interpreterLocationLabel->setEnabled(false);
        interpreterLocationLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(interpreterLocationLabel, 3, 0, 1, 1);

        interpreterLocation = new QLineEdit(customPage);
        interpreterLocation->setObjectName(QString::fromUtf8("interpreterLocation"));
        interpreterLocation->setEnabled(false);
        interpreterLocation->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(interpreterLocation, 3, 1, 1, 1);

        interpreterSelectButton = new QToolButton(customPage);
        interpreterSelectButton->setObjectName(QString::fromUtf8("interpreterSelectButton"));
        interpreterSelectButton->setEnabled(false);
        interpreterSelectButton->setStyleSheet(QString::fromUtf8("font-size:9pt;"));
        interpreterSelectButton->setText(QString::fromUtf8("..."));

        gridLayout_3->addWidget(interpreterSelectButton, 3, 2, 1, 1);

        sourceFileExtensionsLabel = new QLabel(customPage);
        sourceFileExtensionsLabel->setObjectName(QString::fromUtf8("sourceFileExtensionsLabel"));
        sourceFileExtensionsLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(sourceFileExtensionsLabel, 4, 0, 1, 1);

        sourceFileExtensions = new QLineEdit(customPage);
        sourceFileExtensions->setObjectName(QString::fromUtf8("sourceFileExtensions"));
        sourceFileExtensions->setMinimumSize(QSize(61, 0));
        sourceFileExtensions->setMaximumSize(QSize(81, 16777215));
        sourceFileExtensions->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(sourceFileExtensions, 4, 1, 1, 1);

        bytecodeFileExtensionsLabel = new QLabel(customPage);
        bytecodeFileExtensionsLabel->setObjectName(QString::fromUtf8("bytecodeFileExtensionsLabel"));
        bytecodeFileExtensionsLabel->setEnabled(false);
        bytecodeFileExtensionsLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(bytecodeFileExtensionsLabel, 5, 0, 1, 1);

        bytecodeFileExtensions = new QLineEdit(customPage);
        bytecodeFileExtensions->setObjectName(QString::fromUtf8("bytecodeFileExtensions"));
        bytecodeFileExtensions->setEnabled(false);
        bytecodeFileExtensions->setMinimumSize(QSize(61, 0));
        bytecodeFileExtensions->setMaximumSize(QSize(81, 16777215));
        bytecodeFileExtensions->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(bytecodeFileExtensions, 5, 1, 1, 1);

        defaultCompilerArgumentsLabel = new QLabel(customPage);
        defaultCompilerArgumentsLabel->setObjectName(QString::fromUtf8("defaultCompilerArgumentsLabel"));
        defaultCompilerArgumentsLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(defaultCompilerArgumentsLabel, 6, 0, 1, 1);

        defaultCompilerArguments = new QLineEdit(customPage);
        defaultCompilerArguments->setObjectName(QString::fromUtf8("defaultCompilerArguments"));
        defaultCompilerArguments->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(defaultCompilerArguments, 6, 1, 1, 2);

        defaultInterpreterArgumentsLabel = new QLabel(customPage);
        defaultInterpreterArgumentsLabel->setObjectName(QString::fromUtf8("defaultInterpreterArgumentsLabel"));
        defaultInterpreterArgumentsLabel->setEnabled(false);
        defaultInterpreterArgumentsLabel->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(defaultInterpreterArgumentsLabel, 7, 0, 1, 1);

        defaultInterpreterArguments = new QLineEdit(customPage);
        defaultInterpreterArguments->setObjectName(QString::fromUtf8("defaultInterpreterArguments"));
        defaultInterpreterArguments->setEnabled(false);
        defaultInterpreterArguments->setStyleSheet(QString::fromUtf8("font-size:11pt;"));

        gridLayout_3->addWidget(defaultInterpreterArguments, 7, 1, 1, 2);


        verticalLayout_4->addLayout(gridLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 110, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        AddCompilerWizard->addPage(customPage);
        builtinCompilersPage = new QWizardPage();
        builtinCompilersPage->setObjectName(QString::fromUtf8("builtinCompilersPage"));
        verticalLayout_12 = new QVBoxLayout(builtinCompilersPage);
        verticalLayout_12->setSpacing(8);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        stepTwoLabel_2 = new QLabel(builtinCompilersPage);
        stepTwoLabel_2->setObjectName(QString::fromUtf8("stepTwoLabel_2"));
        stepTwoLabel_2->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));
        stepTwoLabel_2->setWordWrap(true);

        verticalLayout_12->addWidget(stepTwoLabel_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gccGroupBox = new QGroupBox(builtinCompilersPage);
        gccGroupBox->setObjectName(QString::fromUtf8("gccGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gccGroupBox->sizePolicy().hasHeightForWidth());
        gccGroupBox->setSizePolicy(sizePolicy1);
        gccGroupBox->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        gccGroupBox->setTitle(QString::fromUtf8("gcc"));
        verticalLayout_2 = new QVBoxLayout(gccGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gccPath = new QLineEdit(gccGroupBox);
        gccPath->setObjectName(QString::fromUtf8("gccPath"));

        horizontalLayout_3->addWidget(gccPath);

        gccSelectButton = new QToolButton(gccGroupBox);
        gccSelectButton->setObjectName(QString::fromUtf8("gccSelectButton"));
        gccSelectButton->setText(QString::fromUtf8("..."));

        horizontalLayout_3->addWidget(gccSelectButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        gccO2Check = new QCheckBox(gccGroupBox);
        gccO2Check->setObjectName(QString::fromUtf8("gccO2Check"));
        gccO2Check->setStyleSheet(QString::fromUtf8("font-size:10pt;"));

        verticalLayout_2->addWidget(gccO2Check);


        gridLayout->addWidget(gccGroupBox, 0, 0, 1, 1);

        gppGroupBox = new QGroupBox(builtinCompilersPage);
        gppGroupBox->setObjectName(QString::fromUtf8("gppGroupBox"));
        sizePolicy1.setHeightForWidth(gppGroupBox->sizePolicy().hasHeightForWidth());
        gppGroupBox->setSizePolicy(sizePolicy1);
        gppGroupBox->setMaximumSize(QSize(16777215, 100));
        gppGroupBox->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        gppGroupBox->setTitle(QString::fromUtf8("g++"));
        verticalLayout_7 = new QVBoxLayout(gppGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        gppPath = new QLineEdit(gppGroupBox);
        gppPath->setObjectName(QString::fromUtf8("gppPath"));

        horizontalLayout_9->addWidget(gppPath);

        gppSelectButton = new QToolButton(gppGroupBox);
        gppSelectButton->setObjectName(QString::fromUtf8("gppSelectButton"));
        gppSelectButton->setText(QString::fromUtf8("..."));

        horizontalLayout_9->addWidget(gppSelectButton);


        verticalLayout_7->addLayout(horizontalLayout_9);

        gppO2Check = new QCheckBox(gppGroupBox);
        gppO2Check->setObjectName(QString::fromUtf8("gppO2Check"));
        gppO2Check->setStyleSheet(QString::fromUtf8("font-size:10pt;"));

        verticalLayout_7->addWidget(gppO2Check);


        gridLayout->addWidget(gppGroupBox, 0, 1, 1, 1);

        fpcGroupBox = new QGroupBox(builtinCompilersPage);
        fpcGroupBox->setObjectName(QString::fromUtf8("fpcGroupBox"));
        sizePolicy1.setHeightForWidth(fpcGroupBox->sizePolicy().hasHeightForWidth());
        fpcGroupBox->setSizePolicy(sizePolicy1);
        fpcGroupBox->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        fpcGroupBox->setTitle(QString::fromUtf8("fpc"));
        verticalLayout_8 = new QVBoxLayout(fpcGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(8);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        fpcPath = new QLineEdit(fpcGroupBox);
        fpcPath->setObjectName(QString::fromUtf8("fpcPath"));

        horizontalLayout_10->addWidget(fpcPath);

        fpcSelectButton = new QToolButton(fpcGroupBox);
        fpcSelectButton->setObjectName(QString::fromUtf8("fpcSelectButton"));
        fpcSelectButton->setText(QString::fromUtf8("..."));

        horizontalLayout_10->addWidget(fpcSelectButton);


        verticalLayout_8->addLayout(horizontalLayout_10);

        fpcO2Check = new QCheckBox(fpcGroupBox);
        fpcO2Check->setObjectName(QString::fromUtf8("fpcO2Check"));
        fpcO2Check->setStyleSheet(QString::fromUtf8("font-size:10pt;"));

        verticalLayout_8->addWidget(fpcO2Check);


        gridLayout->addWidget(fpcGroupBox, 1, 0, 1, 1);

        fbcGroupBox = new QGroupBox(builtinCompilersPage);
        fbcGroupBox->setObjectName(QString::fromUtf8("fbcGroupBox"));
        fbcGroupBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(fbcGroupBox->sizePolicy().hasHeightForWidth());
        fbcGroupBox->setSizePolicy(sizePolicy1);
        fbcGroupBox->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        fbcGroupBox->setTitle(QString::fromUtf8("fbc"));
        verticalLayout_9 = new QVBoxLayout(fbcGroupBox);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(8);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        fbcPath = new QLineEdit(fbcGroupBox);
        fbcPath->setObjectName(QString::fromUtf8("fbcPath"));

        horizontalLayout_11->addWidget(fbcPath);

        fbcSelectButton = new QToolButton(fbcGroupBox);
        fbcSelectButton->setObjectName(QString::fromUtf8("fbcSelectButton"));
        fbcSelectButton->setText(QString::fromUtf8("..."));

        horizontalLayout_11->addWidget(fbcSelectButton);


        verticalLayout_9->addLayout(horizontalLayout_11);

        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);


        gridLayout->addWidget(fbcGroupBox, 1, 1, 1, 1);

        javaGroupBox = new QGroupBox(builtinCompilersPage);
        javaGroupBox->setObjectName(QString::fromUtf8("javaGroupBox"));
        javaGroupBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(javaGroupBox->sizePolicy().hasHeightForWidth());
        javaGroupBox->setSizePolicy(sizePolicy1);
        javaGroupBox->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        javaGroupBox->setTitle(QString::fromUtf8("Java"));
        verticalLayout_10 = new QVBoxLayout(javaGroupBox);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(8);
        label = new QLabel(javaGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        label->setText(QString::fromUtf8("javac"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        javacPath = new QLineEdit(javaGroupBox);
        javacPath->setObjectName(QString::fromUtf8("javacPath"));

        gridLayout_2->addWidget(javacPath, 0, 1, 1, 1);

        javacSelectButton = new QToolButton(javaGroupBox);
        javacSelectButton->setObjectName(QString::fromUtf8("javacSelectButton"));
        javacSelectButton->setText(QString::fromUtf8("..."));

        gridLayout_2->addWidget(javacSelectButton, 0, 2, 1, 1);

        label_2 = new QLabel(javaGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:10pt;"));
        label_2->setText(QString::fromUtf8("java"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        javaPath = new QLineEdit(javaGroupBox);
        javaPath->setObjectName(QString::fromUtf8("javaPath"));

        gridLayout_2->addWidget(javaPath, 1, 1, 1, 1);

        javaSelectButton = new QToolButton(javaGroupBox);
        javaSelectButton->setObjectName(QString::fromUtf8("javaSelectButton"));
        javaSelectButton->setText(QString::fromUtf8("..."));

        gridLayout_2->addWidget(javaSelectButton, 1, 2, 1, 1);


        verticalLayout_10->addLayout(gridLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(8);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        javaMemoryLimitLabel = new QLabel(javaGroupBox);
        javaMemoryLimitLabel->setObjectName(QString::fromUtf8("javaMemoryLimitLabel"));
        javaMemoryLimitLabel->setStyleSheet(QString::fromUtf8("font-size:10pt;"));

        horizontalLayout_13->addWidget(javaMemoryLimitLabel);

        javaMemoryLimit = new QLineEdit(javaGroupBox);
        javaMemoryLimit->setObjectName(QString::fromUtf8("javaMemoryLimit"));
        javaMemoryLimit->setMinimumSize(QSize(50, 0));
        javaMemoryLimit->setMaximumSize(QSize(50, 16777215));
        javaMemoryLimit->setText(QString::fromUtf8("512"));

        horizontalLayout_13->addWidget(javaMemoryLimit);

        javaMbLabel = new QLabel(javaGroupBox);
        javaMbLabel->setObjectName(QString::fromUtf8("javaMbLabel"));
        javaMbLabel->setStyleSheet(QString::fromUtf8("font-size:10pt;"));

        horizontalLayout_13->addWidget(javaMbLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_13);


        gridLayout->addWidget(javaGroupBox, 2, 0, 1, 1);

        pythonGroupBox = new QGroupBox(builtinCompilersPage);
        pythonGroupBox->setObjectName(QString::fromUtf8("pythonGroupBox"));
        pythonGroupBox->setEnabled(false);
        sizePolicy1.setHeightForWidth(pythonGroupBox->sizePolicy().hasHeightForWidth());
        pythonGroupBox->setSizePolicy(sizePolicy1);
        pythonGroupBox->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        pythonGroupBox->setTitle(QString::fromUtf8("Python"));
        verticalLayout_11 = new QVBoxLayout(pythonGroupBox);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(8);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        pythonPath = new QLineEdit(pythonGroupBox);
        pythonPath->setObjectName(QString::fromUtf8("pythonPath"));

        horizontalLayout_14->addWidget(pythonPath);

        pythonSelectButton = new QToolButton(pythonGroupBox);
        pythonSelectButton->setObjectName(QString::fromUtf8("pythonSelectButton"));
        pythonSelectButton->setText(QString::fromUtf8("..."));

        horizontalLayout_14->addWidget(pythonSelectButton);


        verticalLayout_11->addLayout(horizontalLayout_14);

        verticalSpacer_6 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_6);


        gridLayout->addWidget(pythonGroupBox, 2, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout);

        verticalSpacer_7 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);

        AddCompilerWizard->addPage(builtinCompilersPage);
        finishPage = new QWizardPage();
        finishPage->setObjectName(QString::fromUtf8("finishPage"));
        verticalLayout_5 = new QVBoxLayout(finishPage);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        stepThreeLabel = new QLabel(finishPage);
        stepThreeLabel->setObjectName(QString::fromUtf8("stepThreeLabel"));
        stepThreeLabel->setStyleSheet(QString::fromUtf8("font-size:12pt;font-weight:bold;"));
        stepThreeLabel->setWordWrap(true);

        verticalLayout_5->addWidget(stepThreeLabel);

        logViewer = new QPlainTextEdit(finishPage);
        logViewer->setObjectName(QString::fromUtf8("logViewer"));
        logViewer->setMinimumSize(QSize(310, 220));
        logViewer->setStyleSheet(QString::fromUtf8("font-size:11pt;"));
        logViewer->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_5->addWidget(logViewer);

        AddCompilerWizard->addPage(finishPage);

        retranslateUi(AddCompilerWizard);
        QObject::connect(builtinRadioButton, SIGNAL(toggled(bool)), compilersCollection, SLOT(setVisible(bool)));
        QObject::connect(gccCheck, SIGNAL(toggled(bool)), gccGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(gppCheck, SIGNAL(toggled(bool)), gppGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(fpcCheck, SIGNAL(toggled(bool)), fpcGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(fbcCheck, SIGNAL(toggled(bool)), fbcGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(jdkCheck, SIGNAL(toggled(bool)), javaGroupBox, SLOT(setEnabled(bool)));
        QObject::connect(pythonCheck, SIGNAL(toggled(bool)), pythonGroupBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AddCompilerWizard);
    } // setupUi

    void retranslateUi(QWizard *AddCompilerWizard)
    {
        AddCompilerWizard->setWindowTitle(QCoreApplication::translate("AddCompilerWizard", "Add Compilers Wizard", nullptr));
        stepOneLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Step I: Choose whether you want to use built-in configuration for certain compilers or customize a compiler's configuration.", nullptr));
        customRadioButton->setText(QCoreApplication::translate("AddCompilerWizard", "Custom Configuration", nullptr));
        builtinRadioButton->setText(QCoreApplication::translate("AddCompilerWizard", "Built-in Configuration (Tick the compilers you want to add)", nullptr));
        stepTwoLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Step II: Select compiler's location to configure it.", nullptr));
        compilerNameLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Compiler Name", nullptr));
        compilerTypeLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Compiler Type", nullptr));
        typeSelect->setItemText(0, QCoreApplication::translate("AddCompilerWizard", "Typical (Generate executable file)", nullptr));
        typeSelect->setItemText(1, QCoreApplication::translate("AddCompilerWizard", "Interpretive (Generate byte-code file)", nullptr));
        typeSelect->setItemText(2, QCoreApplication::translate("AddCompilerWizard", "Interpretive (Run source code directly)", nullptr));

        compilerLocationLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Compiler's Location", nullptr));
        interpreterLocationLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Interpreter's Location", nullptr));
        sourceFileExtensionsLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Source File Extensions", nullptr));
        bytecodeFileExtensionsLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Byte-code File Extensions", nullptr));
        defaultCompilerArgumentsLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Default Compiler's Arguments", nullptr));
        defaultInterpreterArgumentsLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Default Interpreter's Arguments", nullptr));
        stepTwoLabel_2->setText(QCoreApplication::translate("AddCompilerWizard", "Step II: Select compilers' locations to configure them.", nullptr));
        gccO2Check->setText(QCoreApplication::translate("AddCompilerWizard", "Enable O2 Optimization", nullptr));
        gppO2Check->setText(QCoreApplication::translate("AddCompilerWizard", "Enable O2 Optimization", nullptr));
        fpcO2Check->setText(QCoreApplication::translate("AddCompilerWizard", "Enable O2 Optimization", nullptr));
        javaMemoryLimitLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Memory Limit", nullptr));
        javaMbLabel->setText(QCoreApplication::translate("AddCompilerWizard", "MB", nullptr));
        stepThreeLabel->setText(QCoreApplication::translate("AddCompilerWizard", "Step III: Check the result and finish the wizard.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCompilerWizard: public Ui_AddCompilerWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPILERWIZARD_H
