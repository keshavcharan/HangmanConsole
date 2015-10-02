#include <iostream>
#include "HangmanIO.h"
#include "HangmanProcessing.h"

using namespace std;
int main()
{
    HangmanIO hangmanIO;
    HangmanProcessing hangmanProcessing;
    char* cityname = hangmanIO.getInputFromUserOne();
    //char *word[10] = {"HYDERABAD", "VISAKHAPATNAM", "MUMBAI", "CHENNAI", "BENGALURU", "KOLKATA", "NEWDELHI", "JAIPUR", "COCHIN", "AHMEDABAD"};
    bool noresultyet = true;
    // Write a Random number generator between
    // get array value of that random index


    cout << "Fill the blanks to guess the word. One letter at a time." << endl;
    cout << "Any letter that doesn't fit into the word will go into wrong letters." << endl;
    cout << "The game ends when the number of wrong letters are five" << endl << endl;
    cout << "GUESS THE CITY !" << endl;

    hangmanProcessing.displayCityLetters(0, cityname);
    hangmanProcessing.displayWrongLetters(0, false);

    while(noresultyet)
    {
        char letter = hangmanIO.passGuessLetter();
        noresultyet = hangmanProcessing.displayWrongLetters(letter, hangmanProcessing.displayCityLetters(letter, cityname));
    }
}
