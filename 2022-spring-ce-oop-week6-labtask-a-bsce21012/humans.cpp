//
// Created by Lenovo on 4/14/2022.
//

#include "humans.h"
#include <iostream>
#include <string>

using namespace std;

void humans::type_public() {
    cout << "HUMANS AS PUBLIC MEMBER IN PARENT CLASS" << endl;                   //Displaying
}

void gender::setString(string tp) {
    cout << "enter a string " << endl;                                              //taking a string
    cout<<"without any spaces"<<endl;                                               //string must not contain spaces otherwise only the first word will be printed
    cin>>tp;                                                                        //taking string from user
    type=tp;                                                                        //copying the string
}

void gender::type_child() {
    cout << "HUMAN AS PUBLIC MEMBER OF CHILD CLASS" << endl;                            //displaying
}

void gender::show() {
    cout << "I AM A " << type << endl;                                                  //displaying the type string
}



