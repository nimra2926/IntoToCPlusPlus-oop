#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    do{
        cout<<"WHICH TASK DO YOU WANT TO PERFORM?"<<endl;
        cout<<"1.TASK 1"<<endl;
        cout<<"2.TASK 2"<<endl;
        cout<<"3.EXIT"<<endl;
        cin>>opt;
        if(opt==1){
            string name1;                                                       //declaring the name and designation
            string designation1;
            Teacher Teach(name1, designation1);                                 //creating the object
            Teacher Teach1(name1, designation1);
            student st;                                                         //declaring
            student st1;
            st.teach(Teach);
            st1.teach(Teach1);                                              //calling
        }
        if(opt==2){
            string name;
            int model;                                                          //declaring
            car c(name, model);                                                 //creating an obj
            person *ptr;
            person p(&c);                                                       //calling
            c.printCarInfo();                                                   //calling
        }
        if(opt==3){
            cout<<"YOU CHOOSE TO EXIT .."<<endl;
            exit(3);
        }
    }while(opt>=1 && opt<=3);

    return 0;
}
