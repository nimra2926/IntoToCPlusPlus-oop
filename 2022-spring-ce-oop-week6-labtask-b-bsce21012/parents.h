//
// Created by Lenovo on 4/14/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_B_BSCE21012_PARENTS_H
#define INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_B_BSCE21012_PARENTS_H

#include <iostream>
using namespace std;
class parent_one {
public:
    int a;
    int b;                                                                                      //declaring
    void set(int num1 ,int num2);                                                               //declaring function
};
class parent_two{
public:
    int x;                                                                                      //declaring
    int y;
    void setInput(int number1,int number2);                                                    //declaring function
};
class derived : public parent_one , public parent_two{
public:
    void show();                                                                              //declaring
};


#endif //INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_B_BSCE21012_PARENTS_H
