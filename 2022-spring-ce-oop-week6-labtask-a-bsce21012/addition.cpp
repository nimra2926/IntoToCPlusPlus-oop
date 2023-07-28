#include <iostream>
#include "addition.h"
using namespace std;
addition::addition(int x, int y) {
    cout<<"enter x ";
    cin>>x;                                                                             //taking x from user
    cout<<"enter y ";
    cin>>y;                                                                               //taking x from user
    num1=x;                                                                               //copying x and y in num1 and num2
    num2=y;
}

void addition::print() {
    int sum;                                                                               // declaring sum
    sum = num1 + num2;                                                                      //storing the sum
    cout << "SUM = " << sum << endl;                                                        //displaying
}
