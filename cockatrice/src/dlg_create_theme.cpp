#include <QDialogButtonBox>
#include <QListWidget>
#include <QStackedWidget>
#include <QVBoxLayout>

#include "dlg_create_theme.h"

DlgCreateTheme::DlgCreateTheme(QWidget *parent) : QDialog(parent)
{
    contentsWidget = new QListWidget;
    contentsWidget->setViewMode(QListView::IconMode);
    contentsWidget->setMovement(QListView::Static);
    contentsWidget->setMinimumHeight(40);
    contentsWidget->setMaximumHeight(40);
    contentsWidget->setSpacing(5);

    pagesWidget = new QStackedWidget;
    pagesWidget->addWidget(new GeneralCreateThemePage);

    createList();
    contentsWidget->setCurrentRow(0);

    QVBoxLayout *vboxLayout = new QVBoxLayout;
    vboxLayout->addWidget(contentsWidget);
    vboxLayout->addWidget(pagesWidget);

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(vboxLayout);
    mainLayout->addSpacing(12);
    mainLayout->addWidget(buttonBox);
    setLayout(mainLayout);

    retranslateUi();

    adjustSize();
}

void DlgCreateTheme::createList()
{
    generalButton = new QListWidgetItem(contentsWidget);
    generalButton->setTextAlignment(Qt::AlignHCenter);
    generalButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
}

void DlgCreateTheme::retranslateUi()
{
    setWindowTitle(tr("Settings"));

    generalButton->setText(tr("General"));

    contentsWidget->reset();
}

GeneralCreateThemePage::GeneralCreateThemePage() {}
