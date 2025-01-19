#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int mn) {
    maxNumber = mn;
    cout << "Game konstruktori maxNumber: " << maxNumber << endl;
}

Game::~Game() {
    cout << "Game destruktori" << endl;
}

int Game::game(int maxnum) {
    int numOfGuesses = 0;
    int randomNumber = 0;
    int playerGuess = 0;

    cout << "Maxnum = " << maxnum << endl;

    srand(time(NULL));  // Varmista, että tämä kutsutaan vain kerran ohjelman alussa
    randomNumber = rand() % maxnum;

    while (randomNumber != playerGuess) {
        cout << "Anna luku: " << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess == randomNumber) {
            cout << "Oikein!" << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Luku on suurempi" << endl;
        } else {
            cout << "Luku on pienempi" << endl;
        }
    }

    return numOfGuesses;
}

void Game::play() {
    cout << "Game play" << endl;
    int numOfGuesses = game(maxNumber);
    cout << "Arvausten määrä: " << numOfGuesses << endl;
    printGameresult(numOfGuesses);
}

void Game::printGameresult(int numOfGuesses) {
    cout << "Pelin tulos: Arvauksia tehty: " << numOfGuesses << endl;
}
