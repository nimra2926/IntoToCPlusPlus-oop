//
// Created by Lenovo on 4/7/2022.
//
#include <iostream>
#include "class1.h"
using namespace std;
classA::classA(int a1) {
    cout << "\nenter number" << endl;                                    //taking number from user and storing that number in a that is private member
    cin >> a1;
    a = a1;
}

void classB::showA(classA &a) {
    cout << "the member of class A = " << a.a;                       //displaying a of a
}
