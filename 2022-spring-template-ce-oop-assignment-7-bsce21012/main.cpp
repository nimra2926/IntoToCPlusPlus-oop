
#include <iostream>
#include "Functions.h"
#include <string>

using namespace std;

int main() {
//    string name;
//    cout<<"WHAT IS YOUR NAME ?"<<endl;
//    cin>>name;
//    cout<<"name = "<<name;
//cout<<"1"<<endl;
//cout<<"2"<<endl;
//cout<<"3"<<endl;
//cout<<"4"<<endl;
//cout<<"5"<<endl;
//cout<<"6"<<endl;
//cout<<"7"<<endl;
//cout<<"8"<<endl;
//cout<<"9"<<endl;
//cout<<"10"<<endl;
//for(int i=1;i<=10;i++)
//    cout<<i<<endl;
//    double r;
//    double imag;
//    complex D;
//
//int opt1;
//int opt;
//do{
//    cout<<"WHICH TASK DO YOU WANT TO PERFORM?"<<endl;
//    cout<<"1.TASK 1."<<endl;
//    cout<<"2.TASK 2."<<endl;
//    cout<<"3.EXIT."<<endl;
//    cin>>opt;
//    if(opt==1){
//        do{
//            cout<<"HOW DO YOU WANT TO PERFORM TASK 4?"<<endl;
//            cout<<"1.BY FUNCTION."<<endl;
//            cout<<"2.BY OPERATOR OVERLOADING."<<endl;
//            cin>>opt1;
//            if(opt1==1) {
//                do {
//                    cout<<endl;
//                    cout << "WHICH FUNCTION DO YOU WANT?" << endl;
//                    cout << "1.CALL GETTERS AND PRINT COMPLEX NUMBERS." << endl;
//                    cout << "2.SUM 2 COMPLEX NUMBERS." << endl;
//                    cout << "3.SUBTRACT 2 COMPLEX NUMBERS." << endl;
//                    cout << "4.MULTIPLY 2 COMPLEX NUMBERS." << endl;
//                    cout << "5.DIVIDE 2 COMPLEX NUMBERS." << endl;
//                    cout << "6.GET CONJUGATE OF COMPLEX NUMBER." << endl;
//                    cout << "7.EXIT" << endl;
//                    cin >> opt;
//                    if (opt == 1) {
//                        complex C(r, imag);
//                        C.getReal();
//                        C.getImaginary();
//                        C.printComplexNumber();
//                    }
//                    if (opt == 2) {
//                        complex c;
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        c = C + C1;
//                        c.addComplexNumber(C,C1);
//                    }
//                    if (opt == 3) {
//                        complex c;
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        c = C - C1;
//                        c.subComplexNumber(C,C1);
//                    }
//                    if (opt == 4) {
//                        complex c;
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        c=C*C1;
//                        c.multiplyComplexNumber(C,C1);
//                    }
//                    if (opt == 5) {
//                        complex c;
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        c=C/C1;
//                        c.divideComplexNumber(C,C1);
//                    }
//                    if (opt == 6) {
//                        complex C(r, imag);
//                        C.getConjugate();
//
//                    }
//                    if (opt == 7) {
//                        cout<<"YOU CHOOSE TO EXIT..."<<endl;
//                        exit(3);
//                    }
//                } while (opt >= 1 && opt <= 7);
//            }
//            if(opt1==2){
//                do{
//                    cout<<endl;
//                    cout<<"WHICH FUNCTION DO YOU WANT?"<<endl;
//                    cout<<"1.SUM 2 COMPLEX NUMBERS."<<endl;
//                    cout<<"2.SUBTRACT 2 COMPLEX NUMBERS."<<endl;
//                    cout<<"3.MULTIPLY 2 COMPLEX NUMBERS."<<endl;
//                    cout<<"4.DIVIDE 2 COMPLEX NUMBERS."<<endl;
//                    cout<<"5.ISTREAM OPERATOR OVERLOADING."<<endl;
//                    cout<<"6.OSTREAM OPERATOR OVERLOADING."<<endl;
//                    cout<<"7.EQUAL TO OPERATOR OVERLOADING."<<endl;
//                    cout<<"8.EXIT"<<endl;
//                    cin>>opt;
//                    if(opt==1){
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        complex c = C + C1;
//                        c.print();
//                    }
//                    if(opt==2){
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        complex c = C - C1;
//                        c.print();
//                    }
//                    if(opt==3){
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        complex c = C * C1;
//                        c.print();
//                    }
//                    if(opt==4){
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        complex c = C / C1;
//                        c.print();
//                    }
//                    if(opt==5){
//                        std::cin >> D;
//                    }
//                    if(opt==6){
//                        std::cout << "COMPLEX NUMBER = ";
//                        std::cout << D;
//                    }
//                    if(opt==7){
//                        complex C(r, imag);
//                        complex C1(r, imag);
//                        complex c=(C=C1);
//                        c.print();
//
//                    }
//                    if(opt==8){
//                        cout<<"YOU CHOOSE TO EXIT..."<<endl;
//                        exit(3);
//                    }
//                }while(opt>=1 && opt<=8);
//            }
//            if(opt1==3){
//                cout<<"YOU CHOOSE TO EXIT..."<<endl;
//                exit(3);
//            }
//        }while(opt1>=1 && opt1<=3);
//    }
//    if(opt==2){
//        do {
//            cout << "ENTER NUMBERS TO RUN THE TASK." << endl;
//            cout << "1.DEFAULT CONSTRUCTOR AND PARAMETRIZED CONSTRUCTOR." << endl;
//            cout << "2.SET VALUES AND GET VALUES." << endl;
//            cout << "3.NEXT DAY." << endl;
//            cout << "4.PREVIOUS DAY." << endl;
//            cout << "5.TODAY DATE BY OPERATOR OVERLOADING." << endl;
//            cout << "6.EXIT" << endl;
//            cin >> opt;
//            if (opt == 1) {
//                int d;
//                int y;
//                int m;
//                typeOfDay TP(d, y, m);
//            }
//            if (opt == 2) {
//                int d;
//                int y;
//                int m;
//                typeOfDay TP;
//                TP.setDate(d);
//                TP.setMonth(m);
//                TP.setYear(y);
//                TP.getDate();
//                TP.getMonth();
//                TP.getYear();
//            }
//            if (opt == 4) {
//                int d;
//                int y;
//                int m;
//                typeOfDay TP(d, y, m);
//                TP.previousDay();
//            }
//            if (opt == 3) {
//                cout<<"1.WITHOUT OVERLOADING."<<endl;
//                cout<<"2.WITH OVERLOADING."<<endl;
//                cout<<"3.EXIT."<<endl;
//                cin>>opt;
//                if(opt==1){
//
//                    int d;
//                    int y;
//                    int m;
//                    typeOfDay Tp;
//                    typeOfDay TP(d, y, m);
//                    TP.nextDay();
//                }
//                if(opt==2){
//                    int d;
//                    int y;
//                    int m;
//                    int n;
//                    typeOfDay Tp;
//                    typeOfDay TP(d, y, m);
//                    TP.nextDay(n);
//                }
//
//            }
//            if(opt==5){
//                int d;
//                int y;
//                int m;
//                int n;
//                typeOfDay Tp;
//                typeOfDay TP(d, y, m);
//                std::cout<<TP;
//            }
//            if (opt == 6) {
//                cout << "YOU CHOOSE TO EXIT.." << endl;
//                exit(3);
//            }
//
//        }while(opt>=1 && opt<=5);
//
//    }
//    if(opt==3){
//        cout<<"YOU CHOOSE TO EXIT.."<<endl;
//        exit(4);
//    }
//}while(opt>=1 && opt<=3);

    return 0;
}
