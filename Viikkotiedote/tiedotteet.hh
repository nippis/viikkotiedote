#ifndef TIEDOTTEET_HH
#define TIEDOTTEET_HH

#include "tiedote.hh"

#include <vector>

class Tiedotteet
{
public:
    Tiedotteet();

    std::vector<Tiedote*> tiedotteet() const;

private:

    std::vector<Tiedote*> tiedotteet_;
};

#endif // TIEDOTTEET_HH
