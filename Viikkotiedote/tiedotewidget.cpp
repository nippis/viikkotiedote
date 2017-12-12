#include "tiedotewidget.hh"

TiedoteWidget::TiedoteWidget(QWidget *parent) : QWidget(parent)
{
    QPushButton *moveUpButton = new QPushButton;
    QPushButton *moveDownButton = new QPushButton;

    title_ = new QLabel;
    number_ = new QLabel;

    moveUpButton->setText("Siirrä ylös");
    moveDownButton->setText("Siirrä alas");

    QHBoxLayout *mainLayout = new QHBoxLayout;
    setLayout(mainLayout);
    mainLayout->addWidget(number_);
    mainLayout->addWidget(title_);
    mainLayout->addWidget(moveUpButton);
    mainLayout->addWidget(moveDownButton);
}
