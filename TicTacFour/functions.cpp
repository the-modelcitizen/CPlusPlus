#include <iostream>
#include "Gameboard.h"

using namespace std;


void getPlayerNames(string &player1, string &player2)
{
    cout<<"\nPlayer 1\n";
    cout<<"Please enter your name: \n";
    cin>>player1;
    cout<<"\nHello "<<player1<<". Your letter is 'x'.\n";
    cout<<"\nPlayer 2\n";
    cout<<"Please enter your name: \n";
    cin>>player2;
    cout<<"\nHello "<<player2<<". Your letter is 'o'.\n";
}

void getPlayerInput(string playerNameIn, int &rowIn, int &colIn)
{
    int playerRow;
    int playerCol;
    cout<<"\n\n"<<playerNameIn<<", please choose a space on the board: \n";
    cout<<"Row: \n";
    do {
        cin>>playerRow;
        if(!cin || playerRow < 1 || playerRow > 4)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"\nPlease, only input integers from 1-4.\n";
            playerRow = -1;
        }
    } while (playerRow == -1);

    cout<<"Column: \n";
    do {
        cin>>playerCol;
        if(!cin || playerCol < 1 || playerCol > 4)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"\nPlease, only input integers from 1-4.\n";
            playerCol = -1;
        }
    } while (playerCol == -1);

    rowIn = playerRow - 1;
    colIn = playerCol - 1;
}

char checkSpaceOpen(int rowIn, int colIn, Gameboard boardIn)
{
    if(boardIn.getGameSpace(rowIn, colIn) == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int playerTakeTurn(string playerNameIn, char letter, Gameboard &board)
{
    int row;
    int col;
    getPlayerInput(playerNameIn, row, col);

    if(checkSpaceOpen(row, col, board) == 1)
    {
        cout<<"\n"<<playerNameIn<<" chose row "<<row + 1<<", column "<<col + 1<<".\n";
        board.setGameSpace(row, col, letter);
    }
    else
    {
        cout<<"\nThat space is already taken.\n";
        playerTakeTurn(playerNameIn, letter, board);
    }
    return 0;
}

