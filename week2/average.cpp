/*********************************************************************
** Author: David Kwak
** Date: 4/4/2018
** Description: Simple program that gets a user's number 5 times and finds the average
*********************************************************************/
#include <iostream>

int main() {
	double total;
	double userinput;
	std::cout << "Please Enter Five Numbers" << std::endl;
	for (int i = 1; i < 6; i++) {
		std::cout << i << " Number: ";
		std::cin >> userinput;
		if(userinput != )
		total += userinput;
	}
	total = total / 5;
	std::cout << "The average of those numbers is: " << total << std::endl;

	return 0;
}
