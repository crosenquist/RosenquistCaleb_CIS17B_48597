#include <QtGui>
#include <finddialog.h>

FindDialog::FindDialog(QWidget *parent)
    : QDialog(Parent)
{
    label    = new QLabel(tr("Find &what:"));
    lineEdit = new QLineEdit;
    label   -> setBuddy(lineEdit);

    caseCheckBox = new QCheckBox(tr("Match &case"));
    backwardCheckBox = new QCheckBox(tr("Search &backward"));

    findButton  = new QPushButton(tr("&Find"));
    findButton -> setDefault(true);
    findButton -> setEnabled(false);
    closeButton = new QPushButton(tr("Close"));

    //Signal and Slot Connections
    connect(lineEdit, SIGNAL(textChanged(const QString &)),
            this, SLOT(enableFindButton(const QString &)));
    connect(findButton, SIGNAL(clicked()),
            this, SLOT(findClicked()))
}
