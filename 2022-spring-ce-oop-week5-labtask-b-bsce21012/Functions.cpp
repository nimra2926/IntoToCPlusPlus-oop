//
// Created by Lenovo on 4/7/2022.
//
#include "Functions.h"
#include <iostream>

using namespace std;

Box::Box() {
    cout << "I am automatically called because I am constructor" << endl;          //making constructor and displaying statement
    width = 0.0;                                                                    //storing width equal to zero
}

Box::Box(double w) {
    cout << "enter width = ";                                                     //storing the width taken from user in the constructor
    cin >> w;
    width=w;                                                                      //storing w's value in width
}

void printWidth(Box &b) {
    cout << "the width of the box is " << b.width;                                 //printing the width value
}
