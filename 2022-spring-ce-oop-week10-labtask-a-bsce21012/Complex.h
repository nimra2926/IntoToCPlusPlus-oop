#ifndef INC_2022_SPRING_CE_OOP_WEEK10_LABTASK_A_BSCE21012_COMPLEX_H
#define INC_2022_SPRING_CE_OOP_WEEK10_LABTASK_A_BSCE21012_COMPLEX_H

#include <iostream>
#include <string>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;                                       //declaring
public:


    Complex() {
        int r = 0;
        int imag = 0;                                                       //equaling to zero
        real = r;
        imaginary = imag;
        cout << "DEFAULT CONSTRUCTOR IS CALLED." << endl;                           //displaying
    }

    Complex(double r, double imag) {                                            //making parametrized constructor
        cout << "ENTER REAL PART = ";                                       //taking input
        cin >> r;
        cout << "ENTER IMAGINARY PART = ";
        cin >> imag;
        real = r;
        imaginary = imag;                                                       //copying
    }

    void multiplyComplexNumber(Complex C, Complex C1);                                  //declaring


    void addComplexNumber(Complex C, Complex C1);

    void subComplexNumber(Complex C, Complex C1);
};
class Car{
private:
    int CarModel;
    int CarPrice;                                                                       //declaring
    string OwnerName;
    string CarName;
public:
     Car(){
         int cM;
         int cP;                                                //declaring
         string oN;
         string cN;
         cout<<"ENTER CAR MODEL = ";
         cin>> cM;                                              //taking input
         CarModel=cM;
         cout<<"ENTER CAR PRICE = ";
         cin>>cP;                                                                           //taking input
         CarPrice=cP;                                                    //copying
         cout<<"ENTER CAR OWNER NAME = ";
         cin>> cN;                                                  //taking input
         OwnerName=cN;
         cout<<"ENTER CAR NAME = ";
         cin>> oN;                                      //taking input
         CarName=oN;                                                                            //copying


    }
    Car(int cM,int cP,string oN,string cN){
        CarModel=cM;
        CarPrice=cP;
        OwnerName=oN;                                               //copying
        CarName=cN;
    }

    void display(){
        cout<<"CAR NAME = "<<CarName<<endl;
        cout<<"CAR PRICE = "<<CarPrice<<endl;                       //displaying
        cout<<"CAR MODEL = "<<CarModel<<endl;
        cout<<"CAR OWNER NAME = "<<OwnerName<<endl;
    }
};
class CarHelper{
public:
    Car c1;
    Car C2;                                             //making object of car class
    Car c3;
    void display(){
        c1.display();                                           //calling the display function by the object composed
        cout<<"ENTER DATA FOR OBJECT 2.."<<endl;
        C2.display();
        cout<<"ENTER DATA FOR OBJECT 3.."<<endl;
        c3.display();
    }
};

#endif //INC_2022_SPRING_CE_OOP_WEEK10_LABTASK_A_BSCE21012_COMPLEX_H
