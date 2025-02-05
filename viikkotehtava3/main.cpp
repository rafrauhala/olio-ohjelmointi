#include <iostream>
#include "asiakas.h"

using namespace std;


int main()
{
    Asiakas A("Mikko", 1000);
    Asiakas B("Johannes", 1000);
    Asiakas C("Janne", 1000);

    A.tiliSiirto(50, B);
    B.tiliSiirto(100, C);

    return 0;
}
