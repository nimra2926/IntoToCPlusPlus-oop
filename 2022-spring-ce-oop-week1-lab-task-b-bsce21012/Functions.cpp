#include "Functions.h"
#include <iostream>
using namespace std;

void addColumnsTask1( int *&arr , int size)
{
    arr =new int [size];
}
void rowViseInputTask1(int *arr,int size){
    cout<<"please enter elements of array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void rowWisePrintTask1(int *arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
