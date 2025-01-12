#include <iostream>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int arvausten_lukumaara = 0;
    int maxnum = 40;
    arvausten_lukumaara = game(maxnum);
    cout << "Arvauksia: " << arvausten_lukumaara << endl;

    return 0;

}

int game(int maxnum) {

int arvausten_lukumaara = 0;
int satunnaisluku = 0;
int arvaus = 0;

cout << "Maxnum=" << maxnum << endl,

    //satunnaisluku = 15;nnaisluku) {
    srand(time(NULL));
    satunnaisluku = rand() % maxnum;

while (satunnaisluku != arvaus){
    cout << "Anna luku? " << endl;
    cin >> arvaus;
    arvausten_lukumaara++;
    if (arvaus == satunnaisluku) {
        cout << "Oikein!" << endl;


    }
     if (arvaus < satunnaisluku) {
        cout << "Luku on suurempi" << endl;
    }
     if (arvaus > satunnaisluku) {
        cout << "Luku on pienempi" << endl;
    }



}

return arvausten_lukumaara;


}
