#include <iostream>
#include "Functions.h"
using namespace std;
//
int main() {

//     Call all functions one by one here to test the output
//cout<<"================================== task 1 ================================"<<endl;
    float num1;
    float num2;
    cout<<"BEFORE SWAPPING"<<endl;
    cout<<"please enter the value of A= ";
    cin>>num1;
    cout<<"please enter the value of B= ";
    cin>>num2;
    swapValues ( &num1, &num2);
    cout<<"\nAFTER SWAPPING"<<endl;
    cout<<"A AFTER SWAPPING= "<<num1<<"  \nB AFTER SWAPPING ="<<num2<<endl;
//
//    cout<<"================================== task 2 ================================"<<endl;
//
    int size;
    int *arr = new int[size];
    int *arr1 = new int[size];
    cout << "please enter size of array" << endl;
    cin >> size;
        cout << "please enter elements of array1 =" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        cout << "please enter elements of array 2 =" << endl;
        for (int j = 0; j < size; j++) {
            cin >> arr1[j];
        }
    swapArrays( arr,arr1,size );
    delete[]arr;
    delete[]arr1;
    cout<<"================================== task 3 ================================"<<endl;


    int size1;
    int *ptr = new int[size1];
    cout << "please enter size of array =";
    cin >> size1;
    cout << "PLEASE ENTER ELEMENTS OF ARRAY =" << endl;
    for (int i = 0; i < size1; i++) {
        cin >> ptr[i];
    }
    cout << "THE ARRAY BEFORE REVERSING =";
    for (int i = 0; i < size1; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    reverseArrayElements(ptr, size1);
    delete [] ptr;
}


