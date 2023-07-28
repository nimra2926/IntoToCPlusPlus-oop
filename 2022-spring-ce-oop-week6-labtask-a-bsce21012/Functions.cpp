//
// Created by Lenovo on 4/13/2022.
//

#include "Functions.h"
#include <iostream>
using namespace std;

numberIncrement::numberIncrement(int number) {
    number = 10;                                                                       //setting it to 10
    num = number;                                                                       //copying that number in private variable
    cout << "the number is set to = " << num << endl;                                   //displaying num
}

void numberIncrement::operator++() {
    num += 2;                                                                           //incrementing by 2
}
void numberIncrement::print(){
    cout<<"the number after incrementing = "<<num<<endl;                                //displaying the incremented value
}
