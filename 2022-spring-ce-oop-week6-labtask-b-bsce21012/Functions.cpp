//
// Created by Lenovo on 4/14/2022.
//

#include "Functions.h"
#include <iostream>
using namespace std;
void staff::base_public(){
    cout<<"I AM A FUNCTION FROM BASE CLASS"<<endl;                                          //displaying
}
void department::setSalary(int number){                                                     //giving parameters
    cout<<"enter number = ";                                                                //taking number from user
    cin>>number;
    salary=number;                                                                          //storing it to salary
}
void member::base_public(){
    cout<<"I AM A FUNCTION FROM GRANDCHILD CLASS"<<endl;                                    //displaying
}
int member::getSalary(){
    cout<<"SALARY = "<<salary<<endl;                                                        //displaying a salary
    return salary;                                                                          //returning
}