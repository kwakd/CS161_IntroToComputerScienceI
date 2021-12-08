/*********************************************************************
** Author: David Kwak
** Date: 4/4/2018
** Description: Asks user for the celsius temperature and converts it to fahrenheit
*********************************************************************/
#include <iostream>

int main() {
	double c;
	double f;
	std::cout << "Please Enter a Celsius temperature: ";
	std::cin >> c;
	if(std::cin.fail()){
        std::cout << "ERROR PLEASE INPUT A NUMBER!" << std::endl;
        std::c.clear();
        return main();
	}
	f = 9.0/5.0 * c + 32;
    std:: cout << "The equivalent Fahrenheit temperature is: " << f << std::endl;
	return 0;
}
