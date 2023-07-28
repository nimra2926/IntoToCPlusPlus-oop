#include <iostream>
#include "Fractions.h"
using namespace std;

int main() {
    int opt;
    do{
        cout<<"choose option."<<endl;                                       //taking option
        cout<<"1.take input from constructor."<<endl;
        cout<<"2.take input from getter setter."<<endl;
        cout<<"3.take input from stream in and stream out operator."<<endl;
        cout<<"4.exit.."<<endl;
        cin>>opt;
        if(opt==1){
            Fractions f;
            int n1;                                     //declaring
            int n2;
            cout<<"enter num 1 = ";
            cin>>n1;
            cout<<"enter num 2 = ";
            cin>>n2;                                            //taking value
            Fractions F(n1,n2);
            cout<<F;
            cout<<"enter num 1 = ";
            cin>>n1;
            cout<<"enter num 2 = ";
            cin>>n2;
            Fractions F1(n1,n2);                                                    //calling
            cout<<F1;
            if(F==F1){                                              //checking
                cout<<"BOTH RATIOS ARE  EQUAL.."<<endl;
            }
            else{
                cout<<"BOTH FRACTIONS ARE NOT EQUAL.."<<endl;
            }
        }
        if(opt==2){
            Fractions F;
            int number1;                    //declaring
            int number2;
            cout<<"enter num 1 = ";
            cin>>number1;                                       //taking input
            F.setNumber1(number1);
            cout<<"enter num 2 = ";
            cin>>number2;
            F.setNumber(number2);
            F.getNumber1();
            F.getNumber2();
            cout<<F;
            Fractions F1;
            cout<<"enter num 1 = ";
            cin>>number1;                                                               //taking input
            cout<<"enter num 2 = ";
            cin>>number2;
            F1.setNumber1(number1);
            F1.setNumber(number2);
            F1.getNumber1();                                            //calling
            F1.getNumber2();
            cout<<F1;
            F1.getRatio();                                      //calling
            F.getRatio();
            if(F==F1){                                                            //checking
                cout<<"BOTH RATIOS ARE EQUAL.."<<endl;
            }
            else{
                cout<<"BOTH FRACTIONS ARE NOT EQUAL.."<<endl;
            }
        }
        if(opt==3){
            Fractions F;
            cin>>F;
            cout<<F;                                                    //calling
            Fractions F1;                                           //making an object
            cin>>F1;                                                    //taking input
            cout<<F1;
            if(F==F1){                                                  //checking
                cout<<"BOTH RATIOS ARE EQUAL.."<<endl;
            }
            else{
                cout<<"BOTH FRACTIONS ARE NOT EQUAL.."<<endl;
            }
        }
        if(opt==4){
            cout<<"YOU CHOOSE TO EXIT.."<<endl;
            exit(4);
        }
    }while(opt>=1 && opt<=4);


    return 0;
}
