#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

void getPlayerNames(string &, string &);
int playerTakeTurn(string, char, Gameboard &);
int checkProperInput(int, int);
char checkSpaceOpen(int rowIn, int colIn, Gameboard boardIn);
void getPlayerInput(string playerNameIn, int &rowIn, int &colIn);


#endif // FUNCTIONS_H_INCLUDED
