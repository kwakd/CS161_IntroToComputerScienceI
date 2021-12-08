#include <iostream>

void smallSort2(int *a, int *b, int *c){
    int temp;
    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    else if(*a > * c){
        temp = *a;
        *a = *c;
        *c = temp;
    }
    else if(*b > *c){
        temp = *c;
        *c = *b;
        *b = temp;
    }
}

