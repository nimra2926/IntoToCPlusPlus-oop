#include <iostream>
#include "Functions.h"
#include <string>
#include "QueuePerson.h"
using namespace std;

int main() {
   int opt;
    do{
        cout<<"WHICH TASK DO YOU WANT TO PERFORM ?"<<endl;
        cout<<"1.TASK 1."<<endl;
        cout<<"2.TASK 2."<<endl;
        cout<<"3.TASK 3."<<endl;
        cout<<"4.EXIT.."<<endl;
        cin>>opt;
        if(opt==1){
            person p;
            person P1(123, "Nimra", "98A", 123456, 18, "female", "bsce21012@gmail.com", " student ");
            P1.display();
        }
        if(opt==2){
            queue Q;
            int element;
            queue Q1(0, 0);
            Q1.add(element);
            Q1.display();
            Q1.remove();
        }
        if(opt==3){
            int element;
            queuePerson<int> q;
            queuePerson<int> Q(0);
            Q.add(element);
            Q.display();
            Q.remove();
        }
        if(opt==4){
            cout<<"YOU CHOOSE TO EXIT.."<<endl;
            exit(3);
        }
    }while(opt>=1 && opt<=4);
    return 0;
}
