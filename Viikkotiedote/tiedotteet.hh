#ifndef TIEDOTTEET_HH
#define TIEDOTTEET_HH

#include "tiedote.hh"

#include <vector>
#include <QString>

class Tiedotteet
{
public:
    Tiedotteet();

    std::vector<Tiedote> tiedotteet() const;

    void addTiedote(QString otsikko, QString teksti);

private:

    std::vector<Tiedote> tiedotteet_;
};

#endif // TIEDOTTEET_HH
