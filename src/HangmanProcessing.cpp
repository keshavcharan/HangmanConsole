#include <iostream>
#include "HangmanIO.h"
#include "HangmanProcessing.h"

    using namespace std;
    HangmanIO hangmanIO;
    char wrongletter[5] = {'_','_','_','_','_'};
    char citydisplay[20];
    bool gameover =false;
    int count = 0;
    int citycount = 0;
    char* city;
    HangmanProcessing::HangmanProcessing()
    {
    }

    bool HangmanProcessing :: displayCityLetters(char letter, char* cityname)
    {
        city = cityname;
        bool letterexists = false;
        int length = hangmanIO.getCityLength();
        for(int i = 0; i < length; i++)
        {
            if(letter == 0)
                citydisplay[i] = '_';
            else if(*(cityname + i) == letter)
                letterexists = true;

            if(*(cityname + i) == letter && citydisplay[i] == '_')
            {
                citycount++;
                citydisplay[i] = letter;
            }

            cout << citydisplay[i];
            cout << ' ';
        }
        cout << endl << endl;
        if(citycount == length)
        {
            cout << "WELL DONE !";
            gameover = true;
        }

        return letterexists;
    }

    bool HangmanProcessing :: displayWrongLetters(char letter, bool letterexists)
    {
        if(gameover)
            return false;

        cout << "WRONG LETTERS" << endl;
        for(int i =0; i < 5; i++)
        {
            if(letter == 0)
                wrongletter[i] = '_';
            else if(wrongletter[i] == '_' && !letterexists)
            {
                count++;
                wrongletter[i] = letter;
                letterexists = true;
            }

            cout << wrongletter[i];
            cout << ' ';
        }
        cout << endl << endl;
        if(count == 5)
        {
            cout << "GAME OVER : The city name is " << city;
            return false;
        }
        return true;
    }


HangmanProcessing::~HangmanProcessing()
{
    delete [] wrongletter;
}
