#include <iostream>
#include "Functions.h"
#include "parents.h"
using namespace std;

int main() {
    int opt;                                                                    //declaring
    do{
        cout<<"WHICH TASK DO YOU WANT TO PERFORM ?"<<endl;
        cout<<"1.TASK 1"<<endl;
        cout<<"2.TASK 2"<<endl;                                                 //taking options to perform tasks
        cout<<"3.EXIT"<<endl;
        cin>>opt;                                                               //taking input
        if(opt==1){
            staff stf;                                                          //making obj
            stf.base_public();                                                  //calling
            member m;                                                           //making object
            m.base_public();
            int number;                                                         //initializing
            m.setSalary(number);
            m.base_public();                                                    //calling
            m.getSalary();
        }
        if(opt==2){
            derived d;                                                          //making object
            int num1;                                                           //declaring
            int num2;
            int number1;
            int number2;
            d.set(num1,num2);                                                   //calling
            d.setInput(number1,number2);
            d.show();
        }
        if(opt==3){
            cout<<"YOU CHOOSE TO EXIT.."<<endl;                                 //displaying
            exit(5);                                                            //exiting
        }
    }
    while(opt>=1 && opt<=3);


    return 0;
}
