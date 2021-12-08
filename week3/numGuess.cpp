/*********************************************************************
** Author: David Kwak
** Date: 4/11/2018
** Description: makes the user guess what number a person picked
*********************************************************************/
#include <iostream>

int main() {
	int guessCounter = 0;
	int guessNumber;
	int userNumber;

	std::cout << "Enter the number for the player to guess." << std::endl;
	std::cin >> guessNumber;
	std::cout << "Enter your guess." << std::endl;
	do{
        guessCounter++;
        std::cin >> userNumber;
        if(userNumber > guessNumber){
            std::cout << "Too high - try again." << std::endl;
        }
        else if(userNumber < guessNumber){
            std::cout << "Too low - try again." << std::endl;
        }
	}while(userNumber != guessNumber);

	std::cout << "You guessed it in " << guessCounter << " tries." << std::endl;

	return 0;
}
