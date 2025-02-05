#include "pankkitili.h"

Pankkitili::Pankkitili() {}

Pankkitili::Pankkitili(string o) : omistaja(o) {}

bool Pankkitili::withdraw(double summa)
{
    if (summa <= 0 || summa > saldo)
{
    return false;
}
saldo -= summa;
return true;
}

bool Pankkitili::deposit(double summa)
{
    if (summa > 0)
    {
        saldo += summa;
        return true;
    }
    return false;
}
