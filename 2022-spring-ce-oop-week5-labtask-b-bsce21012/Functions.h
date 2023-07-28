//
// Created by Lenovo on 4/7/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK5_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK5_LABTASK_B_BSCE21012_FUNCTIONS_H
#include <iostream>
using namespace std;

class Box {
private:
    double width;                                               //initializing private member width
public:
    Box();                                                      //declaring the default constructor
    Box(double w);                                              //declaring parametrized constructor
    friend void printWidth(Box &b);                             //declaring a friend function
};

void printWidth(Box &b);                                            //defining the friend function


#endif //INC_2022_SPRING_CE_OOP_WEEK5_LABTASK_B_BSCE21012_FUNCTIONS_H
