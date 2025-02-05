#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
public:
    Asiakas(string n, double lr);
    bool talletus(double summa);

    bool tiliSiirto(double summa, Asiakas &saaja);

    string getNimi() const;

private:
    Pankkitili kayttotili;
    Luottotili luottotili;
    string nimi;
};

#endif // ASIAKAS_H
