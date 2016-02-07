#ifndef DLG_CREATE_THEME_H
#define DLG_CREATE_THEME_H

#include <QDialog>
#include <QListWidget>
#include <QListWidgetItem>
#include <QStackedWidget>

class DlgCreateTheme : public QDialog {
    Q_OBJECT
public:
    DlgCreateTheme(QWidget *parent = 0);
private:
    QListWidget *contentsWidget;
    QListWidgetItem *generalButton, *settingsButton, *countersButton, *countriesButton, *gendersButton;
    QListWidgetItem *iconsButton, *phasesButton, *replaysButton, *userLevelsButton, *zonesButton;
    QStackedWidget *pagesWidget;
    void createList();
    void retranslateUi();
};

class AbstractCreateThemePage : public QWidget {};

class GeneralCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    GeneralCreateThemePage();
};

class SettingsCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    SettingsCreateThemePage();
};

class CountersCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    CountersCreateThemePage();
};

class CountriesCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    CountriesCreateThemePage();
};

class GendersCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    GendersCreateThemePage();
};

class IconsCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    IconsCreateThemePage();
};

class PhasesCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    PhasesCreateThemePage();
};

class ReplaysCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    ReplaysCreateThemePage();
};

class UserLevelsCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    UserLevelsCreateThemePage();
};

class ZonesCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    ZonesCreateThemePage();
};

#endif