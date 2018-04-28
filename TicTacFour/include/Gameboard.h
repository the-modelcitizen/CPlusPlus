#ifndef GAMEBOARD_H
#define GAMEBOARD_H


class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard();
    printGameboard();
    char getGameSpace(int, int);
    void setGameSpace(int, int, char);
    int checkRows();
    int checkColumns();
    int checkDiagonals();
    int checkForWinner();
};

#endif // GAMEBOARD_H
