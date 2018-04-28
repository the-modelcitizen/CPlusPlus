#include "Gameboard.h"

#include <iostream>

using namespace std;

Gameboard::Gameboard()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            gameSpace[i][j] = '-';
        }
    }
}

Gameboard::printGameboard()
{
    for(int i=0;i<4;i++)
    {
        std::cout<<"\n";
        for(int j=0;j<4;j++)
        {
            std::cout<<gameSpace[i][j]<<" ";
        }
    }
    return 0;
}

char Gameboard::getGameSpace(int row, int col)
{
    return gameSpace[row][col];
}

void Gameboard::setGameSpace(int row, int col, char letter)
{
    gameSpace[row][col] = letter;
}

int Gameboard::checkRows()
{
    int winner = 0;
    for(int i=0;i<4;i++)
    {
        int xColumn = 0;
        int oColumn = 0;
        for(int j=0;j<4;j++)
        {
            if(gameSpace[i][j] == 'x')
            {
                xColumn++;
            }
            if(gameSpace[i][j] == 'o')
            {
                oColumn++;
            }
        }
        if(xColumn == 4)
        {
            winner = 1;
        }
        if(oColumn == 4)
        {
            winner = 2;
        }
    } return winner;
}

int Gameboard::checkColumns()
{
    int winner = 0;
    for(int i=0;i<4;i++)
    {
        int xCol = 0;
        int oCol = 0;
        for(int j=0;j<4;j++)
        {
            if(gameSpace[j][i] == 'x')
            {
                xCol++;
            }
            if(gameSpace[j][i] == 'o')
            {
                oCol++;
            }
        }
        if(xCol == 4)
        {
            winner = 1;
        }
        if(oCol == 4)
        {
            winner = 2;
        }
    }return winner;
}

int Gameboard::checkDiagonals()
{
    int winner = 0;
    int xDiag1 = 0;
    int oDiag1 = 0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i == j)
            {
               if(gameSpace[i][j] == 'x')
               {
                   xDiag1++;
               }
               if(gameSpace[i][j] == 'o')
               {
                   oDiag1++;
               }
            }
        }
        if(xDiag1 == 4)
        {
            winner = 1;
        }
        if(oDiag1 == 4)
        {
            winner = 2;
        }
    }

    int xDiag2 = 0;
    int oDiag2 = 0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i + j == 3)
            {
               if(gameSpace[i][j] == 'x')
               {
                   xDiag2++;
               }
               if(gameSpace[i][j] == 'o')
               {
                   oDiag2++;
               }
            }
        }
        if(xDiag2 == 4)
        {
            winner = 1;
        }
        if(oDiag2 == 4)
        {
            winner = 2;
        }
    }return winner;
}

int Gameboard::checkForWinner()
{
    if(1 == checkRows() || checkColumns() || checkDiagonals())
        return 1;
    else if(2 == checkRows() || checkColumns() || checkDiagonals())
        return 2;
    else
        return 0;
}

