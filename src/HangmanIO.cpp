#include <iostream>
#include "HangmanIO.h"

using namespace std;

    char* in;
    int citylength = 0;

    HangmanIO::HangmanIO()
    {

    }

    char* HangmanIO :: getInputFromUserOne()
    {
        char* inp = new char[256];
        cout << "Welcome to Hangman" << endl;
        cout << "Player 1 - Please Enter a city name" << endl;
        cin.getline(inp, 256);

        for(char* i = inp; *i != '\0'; i++)
        {
            citylength++;
        }
        return inp;
    }

    char HangmanIO :: passGuessLetter()
    {
        char guessletter;
        cout << "ENTER A LETTER" << endl;
        cin >> guessletter;
        cin.ignore();
        return guessletter;
    }

    int HangmanIO:: getCityLength()
    {
        return citylength;
    }

    HangmanIO::~HangmanIO()
    {

    }
