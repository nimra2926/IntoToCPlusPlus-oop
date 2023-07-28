//
// Created by Lenovo on 4/14/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_HUMANS_H
#define INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_HUMANS_H
#include <iostream>
#include <string>
using namespace std;

class humans {
protected:
    string type;                                                    //declaring string
public:
    void type_public();                                                   //declaring function

};
class gender:public humans{                                                //child class of gender
public:
    void setString(string tp);                                              //declaring
    void type_child();
    void show();
};

#endif //INC_2022_SPRING_CE_OOP_WEEK6_LABTASK_A_BSCE21012_HUMANS_H
