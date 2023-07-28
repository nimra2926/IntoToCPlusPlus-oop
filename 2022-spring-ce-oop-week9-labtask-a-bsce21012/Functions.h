#ifndef INC_2022_SPRING_CE_OOP_WEEK9_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK9_LABTASK_A_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

template<typename T>
class customizedArray {                                                             //making class
private:
    int sizeOfArray;                                                                //declaring
    int NoOfElement;                                                                //declaring
    T *array;
public:
    customizedArray(int s) {
        sizeOfArray = s;                                                           //copying
        NoOfElement = 0;                                                                //placing it to zero
        array = new T[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++) {
            array[i] = 0;                                                   //setting values to zero
        }
    }

    void add() {
        for (int i = NoOfElement; i < sizeOfArray; i++) {
            cout << "ENTER DATA = ";
            cin >> array[i];                                                            //taking input
            NoOfElement++;
        }
    }
    void display() {
        for (int i = 0; i < sizeOfArray; i++) {
            cout << array[i] <<" ";                                                 //displaying array elements
        }
        cout << endl;
    }

    void expand() {
        sizeOfArray= sizeOfArray +10;                                                   //increasing size
        T *array1 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array1[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array1;                                                                 //copying
        array1=NULL;                                                                    //null it

    }

    ~customizedArray() {
        cout << "DESTRUCTOR IS CALLED.." << endl;
        delete[]array;                                                                  //deleting
    }
};


#endif //INC_2022_SPRING_CE_OOP_WEEK9_LABTASK_A_BSCE21012_FUNCTIONS_H
