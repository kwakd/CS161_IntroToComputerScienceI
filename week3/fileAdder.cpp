/*********************************************************************
** Author: David Kwak
** Date: 4/11/2018
** Description: asks user for a certain amount of numbers to input and finds the max and min
*********************************************************************/
#include <iostream>
#include <string>
#include <fstream>


int main() {
	std::string filename;
	std::ifstream myfile;
	int sum = 0;
	int temp;

	std::cout << "Enter the name of the file: ";
	getline(std::cin, filename);

	myfile.open(filename.c_str());
	if(myfile.fail()){
        std::cout << "could not access file" << std::endl;
        return 0;
	}
	while(myfile >> temp){
        sum = sum + temp;
	}
	myfile.close();

	std::ofstream outputfile("sum.txt");
	outputfile << sum;
	outputfile.close();

	return 0;
}
