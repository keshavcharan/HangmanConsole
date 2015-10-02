#ifndef HANGMANIO_H
#define HANGMANIO_H


class HangmanIO
{
    public:
        HangmanIO();
        char * getInputFromUserOne();
        int getCityLength();
        char passGuessLetter();
        virtual ~HangmanIO();
    protected:
    private:
};

#endif // HANGMANIO_H
