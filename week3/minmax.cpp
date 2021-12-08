/*********************************************************************
** Author: David Kwak
** Date: 4/11/2018
** Description: asks user for a certain amount of numbers to input and finds the max and min
*********************************************************************/
#include <iostream>

int main() {
	int maxOutput;
	int minOutput;
	int userInput;
	int placeholder;

	std::cout << "How many integers would you like to enter?" << std::endl;
	std::cin >> userInput;
	std::cout << "Please enter " << userInput << " integers." << std::endl;
	for(int i = 0; i < userInput; i++){
        std::cin >> placeholder;
        if (i == 0){
            maxOutput = placeholder;
            minOutput = placeholder;
        }
        else{
            if(maxOutput <= placeholder){
                maxOutput = placeholder;
            }
            if(minOutput >= placeholder){
                minOutput = placeholder;
            }
        }
	}
	std::cout << "min: " << minOutput << std::endl;
	std::cout << "max: " << maxOutput << std::endl;


	return 0;
}
