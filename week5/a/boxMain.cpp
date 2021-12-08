#include<iostream>
#include "Box.hpp"

int main(){
    Box ob1;
    Box ob2(2.0, 3.0, 4.0);

    std::cout << "Volume Box 1: " << ob1.calcVolume() << std::endl;
    std::cout << "Surface Area Box 1: " << ob1.calcSurfaceArea() << std::endl;
    std::cout << "Volume Box 2: " << ob2.calcVolume() << std::endl;
    std::cout << "Surface Area Box 2: " << ob2.calcSurfaceArea() << std::endl;



    return 0;
}
