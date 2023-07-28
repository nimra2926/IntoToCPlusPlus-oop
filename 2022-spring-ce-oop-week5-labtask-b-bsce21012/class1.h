//
// Created by Lenovo on 4/7/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK5_LABTASK_B_BSCE21012_CLASS_H
#define INC_2022_SPRING_CE_OOP_WEEK5_LABTASK_B_BSCE21012_CLASS_H

#include <iostream>

using namespace std;

class classB;                                                               //declaring class b

class classA {
private:
    int a;                                                                  //a private variable of int a
public:
    classA(int a1);                                                         //parametrized constructor declaration

    friend class classB;                                                    //declaring a friend class

};

class classB {
private:
    int b;                                                                 //declaring a private member
public:
    void showA(classA &a);                                                  //declaring show function
};



#endif //INC_2022_SPRING_CE_OOP_WEEK5_LABTASK_B_BSCE21012_CLASS_H
