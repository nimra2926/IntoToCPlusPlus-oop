#include "Functions.h"
#include <iostream>

using namespace std;

void resize( int *&arr, int size,int new_size) {          //passing parameters
    cout << "please enter size" << endl;
    cin >> size;                                         //taking size
    cout<<"enter elements of array";
    for (int i = 0; i < size; i++) {                    // taking elements of array
        cin >> arr[i];
    }
    int *arr2 = new int(new_size);                      //allocating memory
    cout << "enter new size" << endl;                   //taking new size
    cin >> new_size;
    if (new_size <= 0) {                                //condition that if new size is less than zero
        cout << "you have enter an negative number, the number you enter must be positive" << endl;
    } else {
        if (new_size < size) {                          //if new size is less than the size of array 1
            cout <<"the copied array is"<<endl;
            for (int i = 0; i < new_size; i++) {
                arr2[i] = arr[i];                       //copying array 1
                cout<< arr2[i];                         //displaying it
            }
        } else {
            cout<<"the new array is";
            for (int i = 0; i < new_size; i++) {
                arr2[i] = arr[i];                       //copying array elements
                arr[size]=arr[new_size]=0;              //when the array size is equal to other size then we store the value zero at that place by default
                cout << arr2[i];                        //displaying
            }
            delete []arr;                               //deleting arrays
        }

    }
    delete []arr2;
}
//cout<<"SIR KINDLY RUN THE TASKS INDIVIDUALLY "<<endl;
void mergeArray() {
    int size_1;
    int size_2;
    int size;                                                                //declaring arrays
    int *arr1 = new int[size_1];                                             //allocating memory
    int *arr2 = new int[size_2];
    cout << "enter size of arr1= ";
    cin >> size_1;                                                            //taking size1
    cout << "enter size of arr2= ";
    cin >> size_2;                                                            //taking size2
    size = size_1 + size_2;
    cout << "size =" << size << endl;                                           //displaying size that is sum of 1 and 2
    int *arr3 = new int[size];
    cout << "enter values of arr1 " << endl;
    for (int i = 0; i < size_1; i++) {                                          //taking elements of array1
        cin >> arr1[i];
    }
    cout << "enter values of arr2 " << endl;                                   //taking elements of array2
    for (int i = 0; i < size_2; i++) {
        cin >> arr2[i];
    }
       for (int i = 0; i <size_1; i++) {
           arr3[i] = arr1[i];                                                   //copying the array 1 in third array
           cout<<arr3[i];
       }
       int j=0;                                                                //initializing j=0
       for(int i=size_1;i<size;i++){
           arr3[i]=arr2[j];                                                    //copying the arr3 value in arr3 after the size of array1
           j++;                                                                //iterating
           cout<<arr3[i];                                                      //displaying array 3
       }

    delete []arr2;                                                            //deleting array 2 and 1
    delete []arr1;
//    cout<<"\nfor deleting the array elements"<<endl;
    for(int i=0;i<size;i++){                                                 //the loop until size
        for(int j=i+1;j<size;j++){                                           //the loop from the next index until size
            if(arr3[i]==arr3[j]){                                            //checking first 2 indexes
                for(int k=j;k<size;k++){                                     //checking the next indexes
                    arr3[k]=arr3[k+1];
                }
                size--;                                                      //decrementing the size of array
                j--;                                                         //decrementing the j till the size
            }
        }
    }
    cout<<"\nafter deleting elements = ";
    for(int i=0;i<size;i++){
        cout<<arr3[i]<<" ";                                                 //displaying the array3
    }
    delete []arr3;                                                          //deleting the array 3
    }
//cout<<"SIR KINDLY RUN THE TASKS INDIVIDUALLY "<<endl;



