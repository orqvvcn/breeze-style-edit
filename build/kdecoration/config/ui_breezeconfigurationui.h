#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'breezeconfigurationui.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREEZECONFIGURATIONUI_H
#define UI_BREEZECONFIGURATIONUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "config/breezeexceptionlistwidget.h"
#include "kcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_BreezeConfigurationUI
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QComboBox *titleAlignment;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QComboBox *buttonSize;
    QCheckBox *outlineCloseButton;
    QCheckBox *drawBorderOnMaximizedWindows;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *drawBorderOnMaximizedWindowsHelpLabel;
    QCheckBox *drawBackgroundGradient;
    QSpacerItem *verticalSpacer;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *shadowSize;
    QLabel *label_2;
    QSpinBox *shadowStrength;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    KColorButton *shadowColor;
    QLabel *label_6;
    QComboBox *outlineIntensity;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    Breeze::ExceptionListWidget *exceptions;

    void setupUi(QWidget *BreezeConfigurationUI)
    {
        if (BreezeConfigurationUI->objectName().isEmpty())
            BreezeConfigurationUI->setObjectName("BreezeConfigurationUI");
        BreezeConfigurationUI->resize(428, 418);
        verticalLayout = new QVBoxLayout(BreezeConfigurationUI);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(BreezeConfigurationUI);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName("gridLayout_4");
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        titleAlignment = new QComboBox(tab);
        titleAlignment->addItem(QString());
        titleAlignment->addItem(QString());
        titleAlignment->addItem(QString());
        titleAlignment->addItem(QString());
        titleAlignment->setObjectName("titleAlignment");

        gridLayout_4->addWidget(titleAlignment, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        buttonSize = new QComboBox(tab);
        buttonSize->addItem(QString());
        buttonSize->addItem(QString());
        buttonSize->addItem(QString());
        buttonSize->addItem(QString());
        buttonSize->addItem(QString());
        buttonSize->setObjectName("buttonSize");

        gridLayout_4->addWidget(buttonSize, 1, 1, 1, 1);

        outlineCloseButton = new QCheckBox(tab);
        outlineCloseButton->setObjectName("outlineCloseButton");

        gridLayout_4->addWidget(outlineCloseButton, 2, 0, 1, 3);

        drawBorderOnMaximizedWindows = new QCheckBox(tab);
        drawBorderOnMaximizedWindows->setObjectName("drawBorderOnMaximizedWindows");

        gridLayout_4->addWidget(drawBorderOnMaximizedWindows, 3, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        drawBorderOnMaximizedWindowsHelpLabel = new QLabel(tab);
        drawBorderOnMaximizedWindowsHelpLabel->setObjectName("drawBorderOnMaximizedWindowsHelpLabel");
        drawBorderOnMaximizedWindowsHelpLabel->setWordWrap(true);

        horizontalLayout->addWidget(drawBorderOnMaximizedWindowsHelpLabel);


        gridLayout_4->addLayout(horizontalLayout, 4, 0, 1, 3);

        drawBackgroundGradient = new QCheckBox(tab);
        drawBackgroundGradient->setObjectName("drawBackgroundGradient");

        gridLayout_4->addWidget(drawBackgroundGradient, 5, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 6, 0, 1, 3);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout = new QGridLayout(tab_4);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(tab_4);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        shadowSize = new QComboBox(tab_4);
        shadowSize->addItem(QString());
        shadowSize->addItem(QString());
        shadowSize->addItem(QString());
        shadowSize->addItem(QString());
        shadowSize->addItem(QString());
        shadowSize->setObjectName("shadowSize");

        gridLayout->addWidget(shadowSize, 0, 1, 1, 1);

        label_2 = new QLabel(tab_4);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        shadowStrength = new QSpinBox(tab_4);
        shadowStrength->setObjectName("shadowStrength");
        shadowStrength->setMinimum(10);
        shadowStrength->setMaximum(100);

        gridLayout->addWidget(shadowStrength, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        label_5 = new QLabel(tab_4);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        shadowColor = new KColorButton(tab_4);
        shadowColor->setObjectName("shadowColor");

        gridLayout->addWidget(shadowColor, 2, 1, 1, 1);

        label_6 = new QLabel(tab_4);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        outlineIntensity = new QComboBox(tab_4);
        outlineIntensity->addItem(QString());
        outlineIntensity->addItem(QString());
        outlineIntensity->addItem(QString());
        outlineIntensity->addItem(QString());
        outlineIntensity->addItem(QString());
        outlineIntensity->setObjectName("outlineIntensity");

        gridLayout->addWidget(outlineIntensity, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 0, 1, 3);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        exceptions = new Breeze::ExceptionListWidget(tab_3);
        exceptions->setObjectName("exceptions");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exceptions->sizePolicy().hasHeightForWidth());
        exceptions->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(exceptions);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(titleAlignment);
        label_4->setBuddy(buttonSize);
        label->setBuddy(shadowSize);
        label_2->setBuddy(shadowStrength);
        label_6->setBuddy(outlineIntensity);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, titleAlignment);
        QWidget::setTabOrder(titleAlignment, buttonSize);
        QWidget::setTabOrder(buttonSize, outlineCloseButton);
        QWidget::setTabOrder(outlineCloseButton, drawBorderOnMaximizedWindows);
        QWidget::setTabOrder(drawBorderOnMaximizedWindows, drawBackgroundGradient);
        QWidget::setTabOrder(drawBackgroundGradient, shadowSize);
        QWidget::setTabOrder(shadowSize, shadowStrength);
        QWidget::setTabOrder(shadowStrength, shadowColor);

        retranslateUi(BreezeConfigurationUI);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BreezeConfigurationUI);
    } // setupUi

    void retranslateUi(QWidget *BreezeConfigurationUI)
    {
        label_3->setText(tr2i18n("Tit&le alignment:", nullptr));
        titleAlignment->setItemText(0, tr2i18n("Left", nullptr));
        titleAlignment->setItemText(1, tr2i18n("Center", nullptr));
        titleAlignment->setItemText(2, tr2i18n("Center (Full Width)", nullptr));
        titleAlignment->setItemText(3, tr2i18n("Right", nullptr));

        label_4->setText(tr2i18n("B&utton size:", nullptr));
        buttonSize->setItemText(0, tr2i18n("Tiny", nullptr));
        buttonSize->setItemText(1, tr2i18n("Small", "@item:inlistbox Button size:"));
        buttonSize->setItemText(2, tr2i18n("Medium", "@item:inlistbox Button size:"));
        buttonSize->setItemText(3, tr2i18n("Large", "@item:inlistbox Button size:"));
        buttonSize->setItemText(4, tr2i18n("Very Large", "@item:inlistbox Button size:"));

        outlineCloseButton->setText(tr2i18n("Draw a circle around close button", nullptr));
        drawBorderOnMaximizedWindows->setText(tr2i18n("Draw border on maximized and tiled windows", nullptr));
        drawBorderOnMaximizedWindowsHelpLabel->setText(tr2i18n("This setting will allow you to resize from window edges touching screen edges. Scrollbars and window close buttons will shift positions and will not touch screen edges.", nullptr));
        drawBackgroundGradient->setText(tr2i18n("Draw titlebar background gradient", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("General", nullptr));
        label->setText(tr2i18n("Shadow size:", nullptr));
        shadowSize->setItemText(0, tr2i18n("None", "@item:inlistbox Button size:"));
        shadowSize->setItemText(1, tr2i18n("Small", "@item:inlistbox Button size:"));
        shadowSize->setItemText(2, tr2i18n("Medium", "@item:inlistbox Button size:"));
        shadowSize->setItemText(3, tr2i18n("Large", "@item:inlistbox Button size:"));
        shadowSize->setItemText(4, tr2i18n("Very Large", "@item:inlistbox Button size:"));

        label_2->setText(tr2i18n("Shadow strength:", "strength of the shadow (from transparent to opaque)"));
        shadowStrength->setSuffix(tr2i18n("%", nullptr));
        label_5->setText(tr2i18n("Shadow color:", nullptr));
        label_6->setText(tr2i18n("Outline intensity:", "outline intensity"));
        outlineIntensity->setItemText(0, tr2i18n("Off", "@item:inlistbox Outline intensity:"));
        outlineIntensity->setItemText(1, tr2i18n("Low", "@item:inlistbox Outline intensity:"));
        outlineIntensity->setItemText(2, tr2i18n("Medium", "@item:inlistbox Outline intensity:"));
        outlineIntensity->setItemText(3, tr2i18n("High", "@item:inlistbox Outline intensity:"));
        outlineIntensity->setItemText(4, tr2i18n("Maximum", "@item:inlistbox Outline intensity:"));

        tabWidget->setTabText(tabWidget->indexOf(tab_4), tr2i18n("Shadows and Outline", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), tr2i18n("Window-Specific Overrides", nullptr));
        (void)BreezeConfigurationUI;
    } // retranslateUi

};

namespace Ui {
    class BreezeConfigurationUI: public Ui_BreezeConfigurationUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BREEZECONFIGURATIONUI_H

