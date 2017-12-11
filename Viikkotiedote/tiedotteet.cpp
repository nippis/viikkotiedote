#include "tiedotteet.hh"

Tiedotteet::Tiedotteet()
{

}

std::vector<Tiedote*> Tiedotteet::tiedotteet() const
{
    return tiedotteet_;
}
