#include "tiedotteet.hh"

Tiedotteet::Tiedotteet()
{

}

std::vector<Tiedote> Tiedotteet::tiedotteet() const
{
    return tiedotteet_;
}

void Tiedotteet::addTiedote(QString otsikko, QString teksti)
{
    Tiedote newTiedote = Tiedote(otsikko, teksti);
    tiedotteet_.push_back(newTiedote);
}
