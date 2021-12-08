#include <iostream>
#include "Taxicab.hpp"

Taxicab::Taxicab(){
    x = 0;
    y = 0;
    distance = 0;
}

Taxicab::Taxicab(int xcoor, int ycoor){
    x = xcoor;
    y = ycoor;
    distance = 0;
}

int Taxicab::getXCoord(){
    return x;
}

int Taxicab::getYCoord(){
    return y;
}

void Taxicab::moveX(int xcoord){
    if(xcoord < 0){
        x += xcoord;
        xcoord = xcoord * -1;
        distance += xcoord;
    }
    else{
    distance += xcoord;
    x += xcoord;
    }
}

void Taxicab::moveY(int ycoord){
    if(ycoord < 0){
        y += ycoord;
        ycoord = ycoord * -1;
        distance += ycoord;
    }
    else{
    distance += ycoord;
    y += ycoord;
    }
}

int Taxicab::getDistanceTraveled(){
    return distance;
}
