#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    do{
        cout<<"WHICH TASK DO YOU WANT TO PERFORM?"<<endl;
        cout<<"1.TASK 1 "<<endl;
        cout<<"2.TASK 2 "<<endl;
        cout<<"3.EXIT"<<endl;
        cin>>opt;
        switch(opt){
            case(1):
            {
                NumberIncrement n;
                n.increment_count();
                NumberIncrement::print();
                break;
            }
            case (2):{
                int D;
                Singleton *s = s->getInstance();
                s->get();
                s->setData(4);
                s->get();
                break;
            }
            case (3):{
                cout<<"YOU CHOOSE TO EXIT.."<<endl;
                exit(3);
                break;
            }
            default:{
                 cout<<"YOU HAVE ENTERED INVALID ARGUMENT."<<endl;
                 break;
            }
        }
    }while(opt>=1 && opt<=3);


    return 0;
}
