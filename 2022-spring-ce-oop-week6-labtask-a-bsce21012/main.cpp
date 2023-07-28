#include <iostream>
#include "Functions.h"
#include "addition.h"
#include "humans.h"

using namespace std;

int main() {
    int opt;                                                                    //initializing
    do{
        cout<<"WHICH TASK DO YOU WANT TO PERFORM?"<<endl;
        cout<<"1.TASK 1 "<<endl;
        cout<<"2.TASK 2 "<<endl;
        cout<<"3.TASK 3 "<<endl;                                                //displaying options
        cout<<"4.EXIT"<<endl;
        cin>>opt;                                                               //taking the option
        if(opt==1){
            int number;                                                             //calling functions
            numberIncrement inc(number);
            ++inc;
            inc.print();
        }
        if(opt==2){

            int x;                                                                              //initializing
            int y;
            addition( );                                                  //calling functions
            addition obj(x ,y),obj1(x,y);
            addition obj3 = obj +obj1;
            obj3.print();
        }
        if(opt==3){

            gender g;                                                          //creating an obj
            g.type_public();                                                  //calling
            string tp;
            g.setString("i am studying from ubs");
            g.type_child();
            g.show();
        }
        if(opt==4){
            cout<<"YOU CHOOSE TO EXIT.."<<endl;
            exit(6);                                                                //condition to exit
        }
    }
    while(opt>=1 && opt<=4);
        return 0;
}
