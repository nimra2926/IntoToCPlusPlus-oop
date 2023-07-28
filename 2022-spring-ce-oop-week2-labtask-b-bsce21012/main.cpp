#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt2;
        cout << "1.TAKE SIZE FROM USER" << endl;
        cout << "2.TAKE SIZE FROM FILE" << endl;
        cout << "3.EXIT" << endl;
        cin >> opt2;
        switch (opt2) {
            case 1: {
                cout<<"WHICH DO YOU WANT TO PERFORM?"<<endl;
                cout<<"1.TASK 1"<<endl;
                cout<<"2.TASK 2"<<endl;
                cout<<"3.EXIT"<<endl;
                cin>>opt2;
                if(opt2==1){

                    menuTask1();
                }
                if(opt2==2){
                    menuTask2();
                }
                if(opt2==3){
                    cout<<"YOU CHOOSE TO EXIT"<<endl;
                    exit(7);
                }
                else{
                    cout<<"YOU HAVE ENTERED AN INVALID NUMBER"<<endl;
                }
            }
            case 2: {
                cout<<"WHICH DO YOU WANT TO PERFORM?"<<endl;
                cout<<"1.TASK 1"<<endl;
                cout<<"2.TASK 2"<<endl;
                cout<<"3.EXIT"<<endl;
                cin>>opt2;
                if(opt2==1){
                    menuForFile1();
                }
                if(opt2==2){
                    menuForFile2();
                }
                if(opt2==3){
                    cout<<"YOU CHOOSE TO EXIT"<<endl;
                    exit(4);
                }
                else{
                    cout<<"YOU HAVE ENTERED AN INVALID NUMBER"<<endl;
                }

            }
        }
        return 0;
}
