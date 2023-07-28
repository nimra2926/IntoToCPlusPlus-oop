//
// Created by Lenovo on 4/28/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK8_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK8_LABTASK_B_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class NumberIncrement {
private:
    static int count;
public:
    void increment_count() {
        cout << "INCREMENT COUNT IS CALLED." << endl;
        count++;
    }

    static void print() {
        cout << "STATIC DATA MEMBER = " << count << endl;
    }

};

class Singleton {
private:
    int data;
    static Singleton *instance;

    singleton() {
        data = 0;
        return data;
    }

public:
    static Singleton *getInstance() {
        if (!instance)
            instance = new Singleton;
        return instance;
    }

    int get() {
        cout << "DATA IS RETURNED." << endl;
        return this->data;
    }

    void setData(int d) {
        cout << "DATA IS SET." << endl;
        this->data = d;
        cout<<"DATA = "<<data<<endl;
    }
};

#endif //INC_2022_SPRING_CE_OOP_WEEK8_LABTASK_B_BSCE21012_FUNCTIONS_H
