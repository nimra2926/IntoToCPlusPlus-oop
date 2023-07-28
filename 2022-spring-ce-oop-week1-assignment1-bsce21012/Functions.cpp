#include "Functions.h"
#include <math.h>
#include <iostream>

using namespace std;

void swapValues(float *a, float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"\nAFTER SWAPPING"<<endl;
    cout<<"A AFTER SWAPPING the address = "<<&a<<"  \nB AFTER SWAPPING address ="<<&b<<endl;
}

void swapArrays(int *arr, int *arr1, int size) {
    int temp;
        for (int i = 0; i <size; i++) {
            temp = arr[i];
            arr[i] = arr1[i];
            arr1[i] = temp;
        }
    cout << "AFTER SWAPPING" << endl;
    for (int i = 0; i < size; i++) {
        cout << "THE SWAPPED ARRAY 1 =" << arr[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << "THE SWAPPED ARRAY 2 =" << arr1[i] << endl;
    }

    }

void reverseArrayElements(int *ptr, int size1) {
    int temp;
    int j = size1 - 1;
    for (int i = 0; i < j; i++, j--) {
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
    }
    cout<<"THE ARRAY AFTER REVERSING =";
    for (int i = 0; i < size1; i++) {
        cout << ptr[i] << " ";
    }

}
