//
// Created by Lenovo on 4/13/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_ADDITION_H
#define INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_ADDITION_H

#include <iostream>

using namespace std;

class addition {
private:
    int num1;
    int num2;
public:
    addition(int x, int y);

    addition( ) {
       int x=0;
       int y=0;                                                                    // initializing it to zero
       num1=x;                                                                     //copying the value of x and y in num1 and num2
       num2=x;
    }

    addition operator+(addition &obj) {
        addition temp;                                                              //declaring temp
        temp.num1 = num1 + obj.num1;
        temp.num2 = num2 + obj.num2;                                                //storing the sum
        return temp;                                                                //returning temp
    }
    void print();                                                                   //defining
};


#endif //INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_ADDITION_H
