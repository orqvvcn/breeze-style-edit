#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'breezestyleconfig.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREEZESTYLECONFIG_H
#define UI_BREEZESTYLECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BreezeStyleConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *_windowDragLabel;
    QCheckBox *_viewDrawFocusIndicator;
    QLabel *_mnemonicsLabel;
    QComboBox *_mnemonicsMode;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *_windowDragMode;
    QSpacerItem *verticalSpacer;
    QCheckBox *_tabBarDrawCenteredTabs;
    QCheckBox *_toolBarDrawItemSeparator;
    QCheckBox *_sliderDrawTickMarks;
    QCheckBox *_splitterProxyEnabled;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *_dockWidgetDrawFrame;
    QCheckBox *_sidePanelDrawFrame;
    QCheckBox *_menuItemDrawThinFocus;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *_scrollBarAddLineLabel;
    QLabel *_scrollBarSubLineLabel;
    QComboBox *_scrollBarSubLineButtons;
    QComboBox *_scrollBarAddLineButtons;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_5;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *_menuOpacityTransparentLabel;
    QSpacerItem *horizontalSpacer_6;
    QLabel *_menuOpacityOpaqueLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *_menuGroupDescription;
    QSlider *_menuOpacity;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *BreezeStyleConfig)
    {
        if (BreezeStyleConfig->objectName().isEmpty())
            BreezeStyleConfig->setObjectName("BreezeStyleConfig");
        BreezeStyleConfig->resize(562, 264);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BreezeStyleConfig->sizePolicy().hasHeightForWidth());
        BreezeStyleConfig->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(BreezeStyleConfig);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(BreezeStyleConfig);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        _windowDragLabel = new QLabel(tab);
        _windowDragLabel->setObjectName("_windowDragLabel");
        sizePolicy.setHeightForWidth(_windowDragLabel->sizePolicy().hasHeightForWidth());
        _windowDragLabel->setSizePolicy(sizePolicy);
        _windowDragLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_windowDragLabel, 6, 1, 1, 1);

        _viewDrawFocusIndicator = new QCheckBox(tab);
        _viewDrawFocusIndicator->setObjectName("_viewDrawFocusIndicator");

        gridLayout->addWidget(_viewDrawFocusIndicator, 2, 1, 1, 4);

        _mnemonicsLabel = new QLabel(tab);
        _mnemonicsLabel->setObjectName("_mnemonicsLabel");
        _mnemonicsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(_mnemonicsLabel, 5, 1, 1, 1);

        _mnemonicsMode = new QComboBox(tab);
        _mnemonicsMode->addItem(QString());
        _mnemonicsMode->addItem(QString());
        _mnemonicsMode->addItem(QString());
        _mnemonicsMode->setObjectName("_mnemonicsMode");

        gridLayout->addWidget(_mnemonicsMode, 5, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(65, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 4, 1, 1);

        _windowDragMode = new QComboBox(tab);
        _windowDragMode->addItem(QString());
        _windowDragMode->addItem(QString());
        _windowDragMode->addItem(QString());
        _windowDragMode->setObjectName("_windowDragMode");

        gridLayout->addWidget(_windowDragMode, 6, 2, 1, 2);

        verticalSpacer = new QSpacerItem(20, 49, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 3);

        _tabBarDrawCenteredTabs = new QCheckBox(tab);
        _tabBarDrawCenteredTabs->setObjectName("_tabBarDrawCenteredTabs");

        gridLayout->addWidget(_tabBarDrawCenteredTabs, 0, 1, 1, 4);

        _toolBarDrawItemSeparator = new QCheckBox(tab);
        _toolBarDrawItemSeparator->setObjectName("_toolBarDrawItemSeparator");

        gridLayout->addWidget(_toolBarDrawItemSeparator, 1, 1, 1, 4);

        _sliderDrawTickMarks = new QCheckBox(tab);
        _sliderDrawTickMarks->setObjectName("_sliderDrawTickMarks");

        gridLayout->addWidget(_sliderDrawTickMarks, 3, 1, 1, 4);

        _splitterProxyEnabled = new QCheckBox(tab);
        _splitterProxyEnabled->setObjectName("_splitterProxyEnabled");

        gridLayout->addWidget(_splitterProxyEnabled, 4, 1, 1, 4);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        _dockWidgetDrawFrame = new QCheckBox(tab_3);
        _dockWidgetDrawFrame->setObjectName("_dockWidgetDrawFrame");

        verticalLayout_3->addWidget(_dockWidgetDrawFrame);

        _sidePanelDrawFrame = new QCheckBox(tab_3);
        _sidePanelDrawFrame->setObjectName("_sidePanelDrawFrame");

        verticalLayout_3->addWidget(_sidePanelDrawFrame);

        _menuItemDrawThinFocus = new QCheckBox(tab_3);
        _menuItemDrawThinFocus->setObjectName("_menuItemDrawThinFocus");

        verticalLayout_3->addWidget(_menuItemDrawThinFocus);

        verticalSpacer_3 = new QSpacerItem(20, 117, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_6 = new QGridLayout(tab_4);
        gridLayout_6->setObjectName("gridLayout_6");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        _scrollBarAddLineLabel = new QLabel(tab_4);
        _scrollBarAddLineLabel->setObjectName("_scrollBarAddLineLabel");
        _scrollBarAddLineLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(_scrollBarAddLineLabel, 1, 0, 1, 1);

        _scrollBarSubLineLabel = new QLabel(tab_4);
        _scrollBarSubLineLabel->setObjectName("_scrollBarSubLineLabel");
        _scrollBarSubLineLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(_scrollBarSubLineLabel, 0, 0, 1, 1);

        _scrollBarSubLineButtons = new QComboBox(tab_4);
        _scrollBarSubLineButtons->addItem(QString());
        _scrollBarSubLineButtons->addItem(QString());
        _scrollBarSubLineButtons->addItem(QString());
        _scrollBarSubLineButtons->setObjectName("_scrollBarSubLineButtons");

        gridLayout_6->addWidget(_scrollBarSubLineButtons, 0, 1, 1, 1);

        _scrollBarAddLineButtons = new QComboBox(tab_4);
        _scrollBarAddLineButtons->addItem(QString());
        _scrollBarAddLineButtons->addItem(QString());
        _scrollBarAddLineButtons->addItem(QString());
        _scrollBarAddLineButtons->setObjectName("_scrollBarAddLineButtons");

        gridLayout_6->addWidget(_scrollBarAddLineButtons, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 2, 0, 1, 3);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        gridLayout_2 = new QGridLayout(tab_5);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 10, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        _menuOpacityTransparentLabel = new QLabel(tab_5);
        _menuOpacityTransparentLabel->setObjectName("_menuOpacityTransparentLabel");

        horizontalLayout_2->addWidget(_menuOpacityTransparentLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        _menuOpacityOpaqueLabel = new QLabel(tab_5);
        _menuOpacityOpaqueLabel->setObjectName("_menuOpacityOpaqueLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(_menuOpacityOpaqueLabel->sizePolicy().hasHeightForWidth());
        _menuOpacityOpaqueLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(_menuOpacityOpaqueLabel);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        _menuGroupDescription = new QLabel(tab_5);
        _menuGroupDescription->setObjectName("_menuGroupDescription");

        horizontalLayout->addWidget(_menuGroupDescription);

        _menuOpacity = new QSlider(tab_5);
        _menuOpacity->setObjectName("_menuOpacity");
        _menuOpacity->setMinimum(0);
        _menuOpacity->setMaximum(100);
        _menuOpacity->setSingleStep(1);
        _menuOpacity->setPageStep(10);
        _menuOpacity->setValue(100);
        _menuOpacity->setOrientation(Qt::Horizontal);
        _menuOpacity->setInvertedAppearance(false);
        _menuOpacity->setInvertedControls(false);
        _menuOpacity->setTickPosition(QSlider::TicksBelow);
        _menuOpacity->setTickInterval(10);

        horizontalLayout->addWidget(_menuOpacity);


        gridLayout_2->addLayout(horizontalLayout, 7, 0, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(542, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 9, 0, 1, 2);

        tabWidget->addTab(tab_5, QString());

        verticalLayout_2->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        _windowDragLabel->setBuddy(_windowDragMode);
        _mnemonicsLabel->setBuddy(_mnemonicsMode);
        _scrollBarAddLineLabel->setBuddy(_scrollBarAddLineButtons);
        _scrollBarSubLineLabel->setBuddy(_scrollBarSubLineButtons);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, _tabBarDrawCenteredTabs);
        QWidget::setTabOrder(_tabBarDrawCenteredTabs, _toolBarDrawItemSeparator);
        QWidget::setTabOrder(_toolBarDrawItemSeparator, _viewDrawFocusIndicator);
        QWidget::setTabOrder(_viewDrawFocusIndicator, _sliderDrawTickMarks);
        QWidget::setTabOrder(_sliderDrawTickMarks, _splitterProxyEnabled);
        QWidget::setTabOrder(_splitterProxyEnabled, _mnemonicsMode);
        QWidget::setTabOrder(_mnemonicsMode, _windowDragMode);
        QWidget::setTabOrder(_windowDragMode, _dockWidgetDrawFrame);
        QWidget::setTabOrder(_dockWidgetDrawFrame, _sidePanelDrawFrame);
        QWidget::setTabOrder(_sidePanelDrawFrame, _menuItemDrawThinFocus);
        QWidget::setTabOrder(_menuItemDrawThinFocus, _scrollBarSubLineButtons);
        QWidget::setTabOrder(_scrollBarSubLineButtons, _scrollBarAddLineButtons);

        retranslateUi(BreezeStyleConfig);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BreezeStyleConfig);
    } // setupUi

    void retranslateUi(QWidget *BreezeStyleConfig)
    {
        _windowDragLabel->setText(tr2i18n("W&indows' drag mode:", nullptr));
        _viewDrawFocusIndicator->setText(tr2i18n("Draw focus indicator in lists", nullptr));
        _mnemonicsLabel->setText(tr2i18n("&Keyboard accelerators visibility:", nullptr));
        _mnemonicsMode->setItemText(0, tr2i18n("Always hide", nullptr));
        _mnemonicsMode->setItemText(1, tr2i18n("Show when Alt key is pressed", nullptr));
        _mnemonicsMode->setItemText(2, tr2i18n("Always show", nullptr));

        _windowDragMode->setItemText(0, tr2i18n("Drag windows from titlebar only", nullptr));
        _windowDragMode->setItemText(1, tr2i18n("Drag windows from titlebar, menubar and toolbars", nullptr));
        _windowDragMode->setItemText(2, tr2i18n("Drag windows from all empty areas", nullptr));

        _tabBarDrawCenteredTabs->setText(tr2i18n("Center tabbar tabs", nullptr));
        _toolBarDrawItemSeparator->setText(tr2i18n("Draw toolbar item separators", nullptr));
        _sliderDrawTickMarks->setText(tr2i18n("Draw slider tick marks", nullptr));
        _splitterProxyEnabled->setText(tr2i18n("Enable extended resize handles", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("General", nullptr));
        _dockWidgetDrawFrame->setText(tr2i18n("Draw frame around dockable panels", nullptr));
        _sidePanelDrawFrame->setText(tr2i18n("Draw frame around side panels", nullptr));
        _menuItemDrawThinFocus->setText(tr2i18n("Draw a thin line to indicate focus in menus and menubars", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), tr2i18n("Frames", nullptr));
        _scrollBarAddLineLabel->setText(tr2i18n("Bottom arrow button t&ype:", nullptr));
        _scrollBarSubLineLabel->setText(tr2i18n("&Top arrow button type:", nullptr));
        _scrollBarSubLineButtons->setItemText(0, tr2i18n("No buttons", nullptr));
        _scrollBarSubLineButtons->setItemText(1, tr2i18n("One button", nullptr));
        _scrollBarSubLineButtons->setItemText(2, tr2i18n("Two buttons", nullptr));

        _scrollBarAddLineButtons->setItemText(0, tr2i18n("No buttons", nullptr));
        _scrollBarAddLineButtons->setItemText(1, tr2i18n("One button", nullptr));
        _scrollBarAddLineButtons->setItemText(2, tr2i18n("Two buttons", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_4), tr2i18n("Scrollbars", nullptr));
        _menuOpacityTransparentLabel->setText(tr2i18n("Transparent", nullptr));
        _menuOpacityOpaqueLabel->setText(tr2i18n("Opaque", nullptr));
        _menuGroupDescription->setText(tr2i18n("Menu:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), tr2i18n("Transparency", nullptr));
        (void)BreezeStyleConfig;
    } // retranslateUi

};

namespace Ui {
    class BreezeStyleConfig: public Ui_BreezeStyleConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // BREEZESTYLECONFIG_H

