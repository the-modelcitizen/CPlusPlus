#include <iostream>
#include <string>
#include "Gameboard.h"
#include "functions.h"

using namespace std;

int main()
{
    Gameboard game1;
    string player1;
    string player2;
    string winner = "none";

    cout<<"Try to get 4 in a row.\n\n";

    getPlayerNames(player1, player2);

    while(winner == "none")
    {
        game1.printGameboard();
        playerTakeTurn(player1, 'x', game1);
        if(game1.checkForWinner() == 1)
        {
            winner = player1;
            break;
        }

        game1.printGameboard();
        playerTakeTurn(player2, 'o', game1);
        if(game1.checkForWinner() == 2)
        {
            winner = player2;
        }
    }
    game1.printGameboard();
    cout<<"\n\nThe winner is..."<<winner<<"!\n\n";
    return 0;
}

