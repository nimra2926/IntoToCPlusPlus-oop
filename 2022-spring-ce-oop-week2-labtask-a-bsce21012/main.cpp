#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    int opt;
    int opt1;
    cout<<"TASK 1"<<endl;
    cout<<"1.ODD RIGHT ANGLE "<<endl;
    cout<<"2.INVERTED "<<endl;
    cout<<"3.EVEN RIGHT ANGLE"<<endl;
    cout<<"4.PRINT ZERO"<<endl;
    cout<<"5.PRINT CHAR"<<endl;
    cout<<"6.PRINT CHAR OF TWO TYPES"<<endl;
    cout<<"7.EXIT"<<endl;
    cin>>opt;
    switch(opt){
        case 1:{
            oddRightTriangle();
            break;
        }
        case 2:{
            invertedRight();
            break;
        }
        case 3:{
            evenRightTriangle();
            break;

        }
        case 4:{
            printZero();
            break;

        }
        case 5:{
            printChars();
            break;

        }
        case 6:{
                 printCharOfTwoTypes();
            break;

        }
        case 7:{
            cout<<"you choose to exit"<<endl;
            break;

        }
        default:{
            cout<<"you have entered invalid input"<<endl;
            break;

        }
    }

    cout<<"TASK 2"<<endl;
    cout<<"1. RIGHT ANGLE "<<endl;
    cout<<"2.INVERTED RIGHT ANGLE "<<endl;
    cout<<"3.HOLLOW RIGHT ANGLE"<<endl;
    cout<<"4.COMPLETE TRIANGLE"<<endl;
    cout<<"5.HOLLOW COMPLETE"<<endl;
    cout<<"6.INVERTED"<<endl;
    cout<<"7.EXIT"<<endl;
    cin>>opt1;
    int size;
    cout<<"please enter size ="<<endl;
    cin>>size;
    switch(opt1){
        case 1:{
            rightAngle(size);
            break;
        }
        case 2:{
            invertedRightTriangle(size);
            break;
        }
        case 3:{
            rightHollowTriangle( size);
            break;

        }
        case 4:{
            CompleteTriangle( size);
            break;

        }
        case 5:{
            hollowCompleteTriangle(size);
            break;

        }
        case 6:{
            invertedRightTriangleHollow( size);
            break;

        }
        case 7:{
            cout<<"you choose to exit"<<endl;
            break;

        }
        default:{
            cout<<"you have entered invalid input"<<endl;
            break;

        }
    }
        return 0;
}
