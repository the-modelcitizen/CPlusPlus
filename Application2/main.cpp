#include <iostream>
#include <stdio.h>

int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    //this part gets the 15 requests and stores the 15 numbers from the user
    for(int i = 0; i < 15; i++)
    {
        std::cout << "Enter a number between 0 and 100: ";
        scanf("%d", &userInput);
        std::cout << userInput << "\n";

        if(userInput > maxNumber)
        {//largest number entered by user becomes maxNumber when entered
            maxNumber = userInput;
        }
        if(userInput < minNumber)
        {//smallest number entered by user becomes minNumber when entered
            minNumber = userInput;
        }
        sumTotal += userInput;
    }
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15;
    std::cout << "Average = " << average << "\n";
    return 0;
}
