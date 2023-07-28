//
// Created by Lenovo on 6/2/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK12_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK12_LABTASK_B_BSCE21012_FUNCTIONS_H
#include <iostream>
#include <string>
using namespace std;
class rationalNumber {
private:
    int num2;
    int num1;
private:
    rationalNumber(int n1, int n2) {
        cout << "ENTER NUM1 = ";
        cin >> n1;
        num1 = n1;
        cout << "ENTER NUM2 = ";
        cin >> n2;
        if (n2 <= 0) {
            do {
                cout << "NUM2 CAN'T BE NEGATIVE AND ZERO " << endl;
                cout << "ENTER NUM2 AGAIN = ";
                cin >> n2;
            } while (n2 > 0);
            num2 = n2;
        }
        int smallestNumber;
        if (num1 > smallestNumber) {
            smallestNumber = num2;
        } else {
            smallestNumber = num1;
        }
        for (int i = 2; i < smallestNumber; i++) {
            if ((num1 % i == 0) && (num2 % i == 0)) {
                num1 /= i;
                num2 /= i;
            }
        }
    }
    rationalNumber operator+(rationalNumber &r){
        rationalNumber temp;
        temp.num1 = num1 + r.num1;
        temp.num2 = num2 + r.num2;
        return temp;
    }
    rationalNumber operator-(rationalNumber &r){
        rationalNumber temp;
        temp.num1 = num1 - r.num1;
        temp.num2 = num2 - r.num2;
        return temp;
    }
    rationalNumber operator*(rationalNumber &r){
        rationalNumber temp;
        temp.num1 = num1 * r.num1;
        temp.num2 = num2 * r.num2;
        return temp;
    }
    rationalNumber operator/(rationalNumber &r){
        rationalNumber temp;
        temp.num1 = num1 / r.num1;
        temp.num2 = num2 / r.num2;
        return temp;
    }
    bool operator <(const num1& r) {
        if(num1 < d.num1) {
            return true;
        }
        if(num1 == d.num1 && num2 < d.num2) {
            return true;
        }
        return false;
    }
    int operator ==(rationalNumber r)
    {
        if(num1==r.num1 && num2==r.num2)
            return 1;
        else
            return 0;

    }
    void operator = (rationalNumber &r ) {
        num1 = r.num1;
        num2 = r.num2;
    }

};


#endif //INC_2022_SPRING_CE_OOP_WEEK12_LABTASK_B_BSCE21012_FUNCTIONS_H
