/*********************************************************************
** Author: David Kwak
** Date: 4/3/2018
** Description: Simple program that takes a user's input and displays it
*********************************************************************/
#include <iostream>
#include <string>

//a simple example program

int main(){
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;

}
