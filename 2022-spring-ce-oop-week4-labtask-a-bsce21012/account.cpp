//
// Created by Lenovo on 3/30/2022.
//
#include <iostream>
#include "account.h"
#include <string>
using namespace std;
void account::setAccount(string accountTitle ){
cout<<"enter title"<<endl;                                                              //to get title
cin>>accountTitle;
}
void account::setAccountNumber (int Number ){
    int accountNumber;
    cout<<"enter account number "<<endl;                                                    //to set number
    cin>>Number;
    accountNumber = Number;
}
string account::getAccount( void ){
    return AccountTitle;                                                                     //getting title
}
int account:: getAccountNumber(void ){                                                       //getting number
    return accountNum;
}
account::account() {
    string accountTitle ;
}
account::account( string Title,int accountNumber) {
    cout << "Object has a name : " << Title << endl;                                             //roll no. and name displaying using construct
    cout << "Object has a roll no. : " << accountNumber << endl;

}
account::account( string Title) {
    cout << "Object has a name : " << Title << endl;                                          //displaying name

}