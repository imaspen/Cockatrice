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
    contentsWidget->setMinimumHeight(31);
    contentsWidget->setMaximumHeight(31);
    contentsWidget->setSpacing(5);
    contentsWidget->setMinimumWidth(890);
    contentsWidget->setWrapping(false);

    pagesWidget = new QStackedWidget;
    pagesWidget->addWidget(new GeneralCreateThemePage);
    pagesWidget->addWidget(new SettingsCreateThemePage);
    pagesWidget->addWidget(new CountersCreateThemePage);
    pagesWidget->addWidget(new CountriesCreateThemePage);
    pagesWidget->addWidget(new GendersCreateThemePage);
    pagesWidget->addWidget(new IconsCreateThemePage);
    pagesWidget->addWidget(new PhasesCreateThemePage);
    pagesWidget->addWidget(new ReplaysCreateThemePage);
    pagesWidget->addWidget(new UserLevelsCreateThemePage);
    pagesWidget->addWidget(new ZonesCreateThemePage);

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

    settingsButton = new QListWidgetItem(contentsWidget);
    settingsButton->setTextAlignment(Qt::AlignHCenter);
    settingsButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    countersButton = new QListWidgetItem(contentsWidget);
    countersButton->setTextAlignment(Qt::AlignHCenter);
    countersButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    countriesButton = new QListWidgetItem(contentsWidget);
    countriesButton->setTextAlignment(Qt::AlignHCenter);
    countriesButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    gendersButton = new QListWidgetItem(contentsWidget);
    gendersButton->setTextAlignment(Qt::AlignHCenter);
    gendersButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    iconsButton = new QListWidgetItem(contentsWidget);
    iconsButton->setTextAlignment(Qt::AlignHCenter);
    iconsButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    phasesButton = new QListWidgetItem(contentsWidget);
    phasesButton->setTextAlignment(Qt::AlignHCenter);
    phasesButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    replaysButton = new QListWidgetItem(contentsWidget);
    replaysButton->setTextAlignment(Qt::AlignHCenter);
    replaysButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    userLevelsButton = new QListWidgetItem(contentsWidget);
    userLevelsButton->setTextAlignment(Qt::AlignHCenter);
    userLevelsButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    zonesButton = new QListWidgetItem(contentsWidget);
    zonesButton->setTextAlignment(Qt::AlignHCenter);
    zonesButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
}

void DlgCreateTheme::retranslateUi()
{
    setWindowTitle(tr("Settings"));

    generalButton->setText(tr("General"));
    settingsButton->setText(tr("Settings"));
    countersButton->setText(tr("Counters"));
    countriesButton->setText(tr("Countries"));
    gendersButton->setText(tr("Genders"));
    iconsButton->setText(tr("Icons"));
    phasesButton->setText(tr("Phases"));
    replaysButton->setText(tr("Replays"));
    userLevelsButton->setText(tr("User Levels"));
    zonesButton->setText(tr("Zones"));

    contentsWidget->reset();
}

GeneralCreateThemePage::GeneralCreateThemePage() {}

SettingsCreateThemePage::SettingsCreateThemePage() {}

CountersCreateThemePage::CountersCreateThemePage() {}

CountriesCreateThemePage::CountriesCreateThemePage() {}

GendersCreateThemePage::GendersCreateThemePage() {}

IconsCreateThemePage::IconsCreateThemePage() {}

PhasesCreateThemePage::PhasesCreateThemePage() {}

ReplaysCreateThemePage::ReplaysCreateThemePage() {}

UserLevelsCreateThemePage::UserLevelsCreateThemePage() {}

ZonesCreateThemePage::ZonesCreateThemePage() {}
