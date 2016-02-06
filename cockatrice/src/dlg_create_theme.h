#ifndef DLG_CREATE_THEME_H
#define DLG_CREATE_THEME_H

#include <QDialog>

class DlgCreateTheme : public QDialog {
    Q_OBJECT
public:
    DlgCreateTheme(QWidget *parent = 0);
};

class AbstractCreateThemePage : public QWidget {};

class GeneralCreateThemePage : public AbstractCreateThemePage {
    Q_OBJECT
public:
    GeneralCreateThemePage();
};

#endif