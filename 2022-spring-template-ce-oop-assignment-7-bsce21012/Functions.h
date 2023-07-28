
#ifndef INC_2022_SPRING_TEMPLATE_CE_OOP_ASSIGNMENT_7_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_TEMPLATE_CE_OOP_ASSIGNMENT_7_BSCE21012_FUNCTIONS_H

#include <iostream>
#include <string>

using namespace std;

class complex {
private:
    double real;
    double imaginary;
public:


    complex() {
        int r = 0;
        int imag = 0;
        real = r;
        imaginary = imag;
        cout << "DEFAULT CONSTRUCTOR IS CALLED." << endl;
    }

    complex(double r, double imag) {
        cout << "ENTER REAL PART = ";
        cin >> r;
        cout << "ENTER IMAGINARY PART = ";
        cin >> imag;
        real = r;
        imaginary = imag;
    }

    friend istream &operator>>(istream &ist, complex &c);

    friend ostream &operator<<(ostream &ost, complex &c);

    double getReal() ;

    double getImaginary();

    void printComplexNumber();

    complex operator+(complex &c);

    complex operator-(complex &c) ;

    complex operator*(complex &c);

    complex operator/(const complex &c) const ;

    void print();

    void getConjugate();

    void getComplexConjugate();

    void addComplexNumber(complex C, complex C1);

    void subComplexNumber(complex C, complex C1);

    void multiplyComplexNumber(complex C, complex C1) ;

    void divideComplexNumber(complex C, complex C1);

    complex operator=(complex c);

};



class typeOfDay {
private:
    int month;
    int date;
    int year;
public:
    friend ostream &operator<<(ostream &ost,typeOfDay &tp);
    typeOfDay() {
        int d = 0;
        int y = 0;
        int m = 0;
        date = d;
        year = y;
        month = m;

    }

    typeOfDay(int d, int y, int m) {
        cout << "ENTER DATE = ";
        cin >> d;
        date = d;
        cout << "ENTER YEAR = ";
        cin >> y;
        year = y;
        cout << "ENTER MONTH = ";
        cin >> m;
        month = m;
    }

    void setDate(int d);

    void setMonth(int m);

    void setYear(int y);
    int getDate();

    int getMonth();

    int getYear();

    void nextDay();

    void previousDay();

    void nextDay(int n);
};


#endif //INC_2022_SPRING_TEMPLATE_CE_OOP_ASSIGNMENT_7_BSCE21012_FUNCTIONS_H
