#include <iostream>

double fallDistance(double& time);


int main(){
    //double time;
    //double distance;
    //std::cout << "Enter the value of time: " << std::endl;
    //std::cin >> time;
    //distance = fallDistance(time);
    //std::cout << "The distance fallen by the object is: " << distance << std::endl;




    return 0;
}


double fallDistance(double& time){
    double newDistance;
    newDistance = (1/2.0)*9.8*time*time;
    return newDistance;
}
