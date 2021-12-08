/*********************************************************************
** Author: David Kwak
** Date: 4/4/2018
** Description: User puts in an amount less than a dollar and it gives exact change with minimal coins
*********************************************************************/
#include <iostream>

int main() {
	int total;
	int q;
	int d;
	int n;
	int p;
	std::cout << "Please Enter an amount in cents less than a dollar(0 ~ 99): ";
	std::cin >> total;
	std::cout << std::endl;
	if(total > 99 || total < 0){
        std::cout << "ERROR NUMBER IS MORE OR LESS THAN A DOLLAR PLEASE TRY AGAIN!" << std::endl << std::endl;
        return main();
	}
    q = total / 25;
    d = (total % 25) / 10;
    n = (total % 25 % 10) / 5;
    p = (total % 25 % 10 % 5) / 1;

    std::cout << "Your change will be: " << std::endl;
    std::cout << "Q: " << q << std::endl;
    std::cout << "D: " << d << std::endl;
    std::cout << "N: " << n << std::endl;
    std::cout << "P: " << p << std::endl;


	return 0;
}
