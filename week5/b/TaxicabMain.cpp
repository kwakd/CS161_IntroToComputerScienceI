#include <iostream>
#include "Taxicab.hpp"

int main(){
    Taxicab cab1;
    Taxicab cab2(5, -8);
    std::cout << "Total Distance: " << cab2.getDistanceTraveled() << std::endl;
    std::cout << "X: " << cab2.getXCoord() << std::endl;
    std::cout << "Y: " << cab2.getYCoord() << std::endl;

    cab2.moveX(3);
    std::cout << "Total Distance: " << cab2.getDistanceTraveled() << std::endl;
    std::cout << "X: " << cab2.getXCoord() << std::endl;
    std::cout << "Y: " << cab2.getYCoord() << std::endl;

    cab2.moveY(-4);
    std::cout << "Total Distance: " << cab2.getDistanceTraveled() << std::endl;
    std::cout << "X: " << cab2.getXCoord() << std::endl;
    std::cout << "Y: " << cab2.getYCoord() << std::endl;

    cab2.moveX(-1);
    std::cout << "Total Distance: " << cab2.getDistanceTraveled() << std::endl;
    std::cout << "X: " << cab2.getXCoord() << std::endl;
    std::cout << "Y: " << cab2.getYCoord() << std::endl << std::endl;



    cab2.moveY(7);
    std::cout << "Total Distance: " << cab2.getDistanceTraveled() << std::endl;
    std::cout << "X: " << cab2.getXCoord() << std::endl;
    std::cout << "Y: " << cab2.getYCoord() << std::endl << std::endl;



    return 0;
}
