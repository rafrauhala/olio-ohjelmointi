#include "asiakas.h"

Asiakas::Asiakas(string n, double lr)
    : kayttotili(n), luottotili(n, lr), nimi(n)
{
    cout << "nimi=" << nimi << endl;
}

bool Asiakas::talletus(double summa)
{
    cout << "asiakas " << nimi << " tallettaa" << endl;
    bool onnistuiko = kayttotili.deposit(summa);
    if (!onnistuiko) {
        cout << "meni pieleen" << endl;
    }
    return onnistuiko;
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    bool onnistuiko = kayttotili.withdraw(summa);

    if (onnistuiko)
    {

        saaja.talletus(summa);
        cout << "Siirrettiin " << summa << " euroa asiakkaalta " << nimi << " asiakkaalle " << saaja.getNimi() << endl;
        return true;
    }

     else
     {
        cout << "Tilisiirto epaonnistui: Ei tarpeeksi varaa." << endl;
        return false;
     }

}

string Asiakas::getNimi() const
{
    return nimi;
}

