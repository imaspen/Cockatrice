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
    QListWidgetItem *generalButton;
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

#endif