//
// Created by Lenovo on 5/18/2022.
//

#include "Complex.h"
#include <iostream>

using namespace std;

void Complex::multiplyComplexNumber(Complex C, Complex C1) {
    real = C.real * C1.real;                                      //multiplying both by the objects passed in the parameter
    imaginary = C.imaginary * C1.imaginary;
    if (imaginary < 0) {                                                            //condition that if it is smaller
        cout << "MULTIPLICATION = " << real << imaginary << "i" << endl;
    } else {

        cout << "MULTIPLICATION = " << real << " + " << imaginary << "i" << endl;
    }
}

void Complex::addComplexNumber(Complex C, Complex C1) {
    real = C.real + C1.real;                                                            //copying
    imaginary = C.imaginary + C1.imaginary;
    cout << "THE SUM = " << real << " + " << imaginary << "i" << endl;                      //displaying
}

void Complex::subComplexNumber(Complex C, Complex C1) {
    real = C.real - C1.real;
    imaginary = C.imaginary - C1.imaginary;                                         //copying
    if (imaginary < 0) {
        cout << "SUBTRACTION = " << real << imaginary << "i" << endl;
    } else {                                                        //displaying

        cout << "SUBTRACTION = " << real << " + " << imaginary << "i" << endl;
    }
}

