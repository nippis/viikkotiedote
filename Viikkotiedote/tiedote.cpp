#include "tiedote.hh"

Tiedote::Tiedote(QString otsikko, QString teksti):
    title_(otsikko), text_(teksti)
{
    widget_ = new TiedoteWidget();
}

QString Tiedote::title() const
{
    return title_;
}

QString Tiedote::text() const
{
    return text_;
}

TiedoteWidget* Tiedote::widget() const
{
    return widget_;
}

void Tiedote::setTitle(QString &input)
{
    title_ = input;
}

void Tiedote::setText(QString &input)
{
    text_ = input;
}

void Tiedote::setWidget(TiedoteWidget *input)
{
    widget_ = input;
}
