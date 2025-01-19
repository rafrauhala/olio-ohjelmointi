#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;

class Game
{
public:
    Game(int);
    ~Game();

    void play();

private:

    void printGameresult(int numOfGuesses);

    int maxNumber;


};

#endif // GAME_H
