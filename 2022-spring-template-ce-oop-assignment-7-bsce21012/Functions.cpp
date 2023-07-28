#include "Functions.h"
#include <iostream>
using namespace std;

void typeOfDay::setDate(int d) {
    cout << "ENTER DATE = ";
    cin >> d;
    date = d;
}

void typeOfDay::setMonth(int m) {
    cout << "ENTER MONTH = ";
    cin >> m;
    month = m;
}
void typeOfDay::setYear(int y) {
    cout << "ENTER YEAR = ";
    cin >> y;
    year = y;
}
int typeOfDay::getDate() {
    return date;
}
int typeOfDay::getMonth() {
    return month;
}
int typeOfDay::getYear() {
    return year;
}
void typeOfDay::previousDay() {

    if (month == 1) {
        if (date == 1) {
            month = 12;
            date = 31;
            year--;
            cout << date << "-" << month << "-" << year << endl;
        }
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
               || month == 10 || month == 12) {
        if (date == 1) {
            month--;
            date = 31;
            cout << date << "-" << month << "-" << year << endl;
        } else {
            date--;

            cout << date << "-" << month << "-" << year << endl;
        }
    } else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
        if (date == 1) {
            month--;
            date = 30;
            cout << date << "-" << month << "-" << year << endl;
        } else {
            date--;
            cout << date << "-" << month << "-" << year << endl;
        }
    }
}
void typeOfDay::nextDay(int n) {
    cout << "ENTER NUM OF DAYS YOU WANT TO ADD IN TODAY = ";
    cin >> n;
    if (month == 12) {
        if (date == 31) {
            date = 1;
            date = date + (n-1);
            month = 1;
            year = ++year;
            cout << date << "-" << month << "-" << year << endl;
        } else {
            date = date + n;
            month = month;
            year = ++year;
            cout << date << "-" << month << "-" << year << endl;
        }
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
               || month == 10) {
        if (date == 31) {
            date = 1;
            date = date + (n-1);
            month++;
            year = ++year;
            cout << date << "-" << month << "-" << year << endl;
        } else {
            date = date + n;
            month = month;
            year = year;
            cout << date << "-" << month << "-" << year << endl;
        }
    } else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
        if (date == 30) {
            date = 1;
            date = date + (n-1);
            month++;
            year = year;
            cout << date << "-" << month << "-" << year << endl;
        } else {
            date = date + n;
            month = month;
            year = year;
            cout << date << "-" << month << "-" << year << endl;
        }
    }
}

void typeOfDay::nextDay() {
    if (month == 12) {
        if (date == 31) {
            date = 1;
            month = 1;
            year = ++year;
            cout << date << "-" << month << "-" << year << endl;
        } else {
            date++;
            month = month;
            year = ++year;
            cout << date << "-" << month << "-" << year << endl;
        }
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
               || month == 10) {
        if (date == 31) {
            date = 1;
            month++;
            year = ++year;
            cout << date << "-" << month << "-" << year << endl;
        } else {
            date++;
            month = month;
            year = year;
            cout << date << "-" << month << "-" << year << endl;
        }
    } else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
        if (date == 30) {
            date = 1;
            month++;
            year = year;
            cout << date << "-" << month << "-" << year << endl;
        } else {
            date++;
            month = month;
            year = year;
            cout << date << "-" << month << "-" << year << endl;
        }
    }

}
double complex::getReal() {
    return real;
}
double complex::getImaginary() {
    return imaginary;
}

void complex::printComplexNumber() {
    if (imaginary < 0) {
        cout << real << imaginary << "i" << endl;
    } else {

        cout << real << "+" << imaginary << "i" << endl;
    }
}
void complex::getConjugate() {
    imaginary = (-1) * imaginary;
    cout << real << imaginary << "i" << endl;
}
void complex::getComplexConjugate() {
    cout << "the conjugate of " << real << "+" << imaginary << "i" << endl << "is = " << real << ((-1) * imaginary)
         << "i" << endl;
}


ostream &operator<<(ostream &ost ,typeOfDay &tp){
    cout<<"TODAY DATE = ";
    ost << tp.date<<"-"<<tp.month<<"-"<<tp.year<<endl;
    return ost;
}

istream &operator>>(istream &ist, complex &c) {
    cout << "ENTER REAL PART = ";
    ist >> c.real;
    cout << "ENTER IMAGINARY PART = ";
    ist >> c.imaginary;
    return ist;
}

ostream &operator<<(ostream &ost, complex &c) {
    ost << c.real;
    ost << " + " << c.imaginary << "i" << endl;
    return ost;
}
void complex::addComplexNumber(complex C, complex C1) {
    real = C.real + C1.real;
    imaginary = C.imaginary + C1.imaginary;
    cout << "THE SUM = " << real << " + " << imaginary << "i" << endl;
}
void complex::subComplexNumber(complex C, complex C1) {
    real = C.real - C1.real;
    imaginary = C.imaginary - C1.imaginary;
    if (imaginary < 0) {
        cout << "SUBTRACTION = " << real << imaginary << "i" << endl;
    } else {

        cout << "SUBTRACTION = " << real << " + " << imaginary << "i" << endl;
    }
}
void complex::multiplyComplexNumber(complex C, complex C1) {
    real = C.real * C1.real;
    imaginary = C.imaginary * C1.imaginary;
    if (imaginary < 0) {
        cout << "MULTIPLICATION = " << real << imaginary << "i" << endl;
    } else {

        cout << "MULTIPLICATION = " << real << " + " << imaginary << "i" << endl;
    }
}
void complex::divideComplexNumber(complex C, complex C1) {
    real = C.real / C1.real;
    imaginary = C.imaginary / C1.imaginary;
    if (imaginary < 0) {
        cout << "MULTIPLICATION = " << real << imaginary << "i" << endl;
    } else {

        cout << "MULTIPLICATION = " << real << " + " << imaginary << "i" << endl;
    }
}
void complex::print() {
    cout << real << " + " << imaginary << "i" << endl;
}
complex complex::operator=(complex c) {
    complex temp;
    temp.real = c.real;
    temp.imaginary = c.imaginary;
    return temp;
}
complex complex::operator/(const complex &c) const {
    complex temp;
    temp.real = real / c.real;
    temp.imaginary = imaginary / c.imaginary;
    return temp;
}

complex complex::operator-(complex &c) {
    complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
}

complex complex::operator*(complex &c) {
    complex temp;
    temp.real = real * c.real;
    temp.imaginary = imaginary * c.imaginary;
    return temp;
}
complex complex::operator+(complex &c) {
    complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}
