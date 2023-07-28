//
// Created by Lenovo on 4/13/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_FUNCTIONS_H
#include <iostream>
using namespace std;

class numberIncrement {
private:
    int num;                                                //declaring
public:
    numberIncrement(int number);                            //defining functions
    void operator ++();
    void print();

};



#endif //INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_FUNCTIONS_H
