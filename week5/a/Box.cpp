#include <iostream>
#include "Box.hpp"

Box::Box(){
    length = 1;
    width = 1;
    height = 1;
}

Box::Box(double l, double w, double h){
    setLength(l);
    setWidth(w);
    setHeight(h);
}

void Box::setLength(double l){
    length = l;
}

void Box::setWidth(double w){
    width = w;
}

void Box::setHeight(double h){
    height = h;
}

double Box::calcVolume(){
    volume = length * width * height;
    return volume;
}

double Box::calcSurfaceArea(){
    saWH = width * height * 2;
    saHL = height * length * 2;
    saWL = width * length * 2;
    totalsa = saWH + saHL + saWL;
    return totalsa;
}
