#include "luottotili.h"

Luottotili::Luottotili() {

}

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    luottoraja = lr;
    cout << "luottoraja=" << luottoraja << endl;
}

bool Luottotili::withdraw(double summa)
{
    cout << "ennen saldo=" << saldo << " summa=" << summa << endl;

    if (summa < 0)
        return false;

    if (saldo + summa > luottoraja)
            return false;
    else
    {
        saldo += summa;
        return true;
    }
}

bool Luottotili::deposit(double summa)
{
    if (summa < 0)
        return false;

    saldo += summa;
    return true;
}
