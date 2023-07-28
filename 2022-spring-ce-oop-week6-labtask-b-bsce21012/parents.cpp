//
// Created by Lenovo on 4/14/2022.
//

#include "parents.h"
#include <iostream>
using namespace std;
void parent_one::set(int num1 ,int num2){
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"enter second number = ";                                                        //taking numbers from the user
    cin>>num2;
    a=num1;                                                                                //storing it to a and b
    b=num2;
}
void parent_two::setInput(int number1,int number2){
    cout<<"enter first number = ";
    cin>>number1;                                                                          //taking numbers
    cout<<"enter second number = ";
    cin>>number2;
    x=number1;                                                                              //storing it to x and y
    y=number2;
}
void derived::show(){
    int sum;
    sum=a+b;                                                                                //taking sum of a and b
    int sum1;
    sum1=x+y;                                                                               //taking sum of x and y
    cout<<" SUM OF PARENT A = "<<sum<<endl;                                                 //displaying sum
    cout<<" SUM OF PARENT B = "<<sum1<<endl;
}

