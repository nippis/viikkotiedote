#ifndef TIEDOTE_HH
#define TIEDOTE_HH

#include "tiedotewidget.hh"

#include <QString>

class Tiedote
{
public:
    Tiedote(QString otsikko, QString teksti);

    QString title() const;
    QString text() const;
    TiedoteWidget* widget() const;

    void setTitle(QString& input);
    void setText(QString& input);
    void setWidget(TiedoteWidget* input);

private:

    QString title_;
    QString text_;
    TiedoteWidget* widget_;
};

#endif // TIEDOTE_HH
