#ifndef HANGMANPROCESSING_H
#define HANGMANPROCESSING_H


class HangmanProcessing
{
    public:
        HangmanProcessing();
        virtual ~HangmanProcessing();
        bool displayCityLetters(char letter, char* cityname);
        bool displayWrongLetters(char letter, bool letterexists);
        HangmanIO hangmanIO;
    protected:
    private:
};

#endif // HANGMANPROCESSING_H
