#include "addtiedotewindow.hh"

AddTiedoteWindow::AddTiedoteWindow(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout;
    QHBoxLayout *buttonLayout = new QHBoxLayout;

    setLayout(mainLayout);

    // Ikkunan komponentit
    QLabel *otsikkoLabel = new QLabel;
    otsikkoLabel->setText("Viestin otsikko:");
    QLabel *tekstiLabel = new QLabel;
    tekstiLabel->setText("Viestin leipäteksti");

    otsikkoEdit_ = new QTextEdit;
    tekstiEdit_ = new QTextEdit;

    QPushButton *buttonAddTiedote = new QPushButton;
    buttonAddTiedote->setText("Lisää tiedote");
    QPushButton *buttonCancel = new QPushButton;
    buttonCancel->setText("Peruuta");

    // Sijoitus leiskaan
    mainLayout->addWidget(otsikkoLabel);
    mainLayout->addWidget(otsikkoEdit_);
    mainLayout->addWidget(tekstiLabel);
    mainLayout->addWidget(tekstiEdit_);
    mainLayout->addLayout(buttonLayout);
    buttonLayout->addWidget(buttonAddTiedote);
    buttonLayout->addWidget(buttonCancel);

    connect(buttonAddTiedote, SIGNAL(pressed()), this, SLOT(addTiedote()));
    connect(buttonCancel, SIGNAL(pressed()), this, SLOT(cancel()));

}

AddTiedoteWindow::~AddTiedoteWindow()
{
    delete this;
}

void AddTiedoteWindow::addTiedote()
{
    emit tiedoteAdded(otsikkoEdit_->toPlainText(), tekstiEdit_->toPlainText());
    this->close();
}

void AddTiedoteWindow::cancel()
{
    this->close();
}
