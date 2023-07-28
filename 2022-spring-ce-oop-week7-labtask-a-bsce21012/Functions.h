
#ifndef INC_2022_SPRING_CE_OOP_WEEK7_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK7_LABTASK_A_BSCE21012_FUNCTIONS_H
using namespace std;
#include <iostream>
#include <string>
class Teacher {                                                                     //making a class of teacher
private:
    string name;                                                                    //creating private members
    string designation;                                                             //name and designation
public:
    Teacher(string name1,string designation1);         //creating a constructor to initialize the values of name and designation
    void showInfo();                                      //function to show the info (designation and name)
};
class student{                                                                  //creating a class of students
public:
    static void teach(Teacher &tr){          //creating a static function having the obj of teacher as parameter by reference
        tr.showInfo();                                              //calling the show function by the obj of teacher
    }
};
class car{                                                          //creating a class of car
private:
    int mModel;                                                     //it has private members of model and the name in it
    string mName;
public:                                                                     //the public members are
car(string name,int model );                                //making a constructor having name and model as parameter in it
void printCarInfo();                                                 //making a function to display the info of car
~ car();                                                            //making a destructor
};
class person{                                               //creating a person class
private:
    car *cptr;                                              //creating a pointer in private
public:
    person(car *pcar){                                        //creating a function having pointer in parameter
        cout<<"CREATING PERSON"<<endl;                         //displaying
        this->cptr;                                             //setting the pointer
    }
    ~person(){                                                  //making a destructor
        cout<<"DESTROYING PERSON"<<endl;
    }
};
#endif //INC_2022_SPRING_CE_OOP_WEEK7_LABTASK_A_BSCE21012_FUNCTIONS_H
