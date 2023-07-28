
#include "Functions.h"
#include <iostream>

using namespace std;

Teacher::Teacher(string name1, string designation1){                                    //constructor of Teacher class
    cout << "CREATING TEACHER" << endl;                                                             //displaying
    cout << "ENTER NAME : ";                                                            //taking name
    cin >> name1;
    cout << "ENTER DESIGNATION : ";                                                     //and designation from the user
    cin >> designation1;
    cout<<endl;
    name = name1;                                                                         //copying the value
    designation = designation1;                                                           //copying
}

void Teacher::showInfo(){                                       //a function to display name and designation
    cout << "NAME : " << name << endl;
    cout << "DESIGNATION : " << designation << endl;                    //displaying name and designation
}
car::car(string name,int model ){                                       //a constructor to set the values of name and model
    cout<<endl;
    cout<<"CREATING CAR"<<endl;
    cout<<"ENTER NAME : ";                                              //taking name
    cin>>name;
    cout<<"ENTER MODEL : ";                                             //and model from the user
    cin>>model;
    cout<<endl;
    mModel=model;                                                       //copying the name and model
    mName=name;
}
void car::printCarInfo(){                                               //a function to display the car info
    cout<<"NAME : "<<mName<<endl;                                       //displaying the name and model
    cout<<"MODEL : "<<mModel<<endl;
}
car::~ car(){
    cout<<"DESTROYING CAR"<<endl;                                           //displaying
}
