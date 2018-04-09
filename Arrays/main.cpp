#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int userInput[40];

    cout<<"Please input 40 integers.\n";
    for(int i = 0; i < 40; i++)
    {
        scanf("%d", &userInput[i]);
    }

    cout<<"\nHere are your numbers in the order you entered them.\n";
    for(int i = 0; i < 40; i++)
    {
        cout<<userInput[i]<<" ";
    }

    cout<<"\nHere are your numbers in the reverse order of how you entered them.\n";
    for(int i = 39; i >= 0; i--)
    {
        cout<<userInput[i]<<" ";
    }

    //Sort array contents in ascending order
    for(int i = 0; i < 40; i++)
    {
        for(int j = 0; j < 39 - i; j++)
        {
            if(userInput[j] > userInput[j + 1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }

    cout<<"\nHere are your numbers sorted in ascending order.\n";
    for(int i = 0; i < 40; i++)
    {
        cout<<userInput[i]<<" ";
    }
    return 0;
}
