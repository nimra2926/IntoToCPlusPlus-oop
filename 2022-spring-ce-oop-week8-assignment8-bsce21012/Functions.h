#ifndef INC_2022_SPRING_CE_OOP_WEEK8_ASSIGNMENT8_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK8_ASSIGNMENT8_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class sortedArray {
private:
    int capacity;                                                                   //declaring
    int array[10];
public:
    sortedArray(int c, int ptr[10]) {
        c = 0;                                                                      //initializing capacity at zero
        capacity = c;
        for (int i = 0; i < 10; i++) {                                          //setting values of array at -1
            ptr[i] = -1;
            array[i] = ptr[i];
        }
        cout << "PARAMETRIZED CONSTRUCTOR IS CALLED.." << endl;
    }

    void insertElement(int value) {
        int j;                                                                          //declaring
        cout << "PLEASE ENTER ELEMENTS OF ARRAY = ";
        for (int i = 0; i < 10; i++) {
            cin >> array[i];                                  //taking input in array and incrementing capacity after every input
            capacity++;
            if(capacity==10){
                cout<<"YOU CAN'T ENTER MORE ELEMENTS IN ARRAY.."<<endl;
                break;
            }
        }
        for (int i = 0; i < 10; i++) {
            value = array[i];                                                                 //setting value at zero index of array
            for (j = i - 1; j >= 0 && array[j] > value; j--) {                          //checking that if the next value is greater
                array[j + 1] = array[j];                                                //copying
            }
            array[j + 1] = value;                                                       //copying
        }
    }

    bool full() {
        if (capacity == 10) {                                                     //checking that if the capacity is full then it can't enter more inputs
            cout << "THE CAPACITY IS EQUAL TO THE SIZE" << endl;
            cout << "YOU CAN'T ENTER MORE ELEMENTS.." << endl;
            return true;
        } else {                                                                            //else you can
            cout << "THERE IS SPACE IN THE ARRAY YOU CAN ENTER MORE ELEMENTS" << endl;
            return false;
        }
    }

    void print() {
        for (int i = 0; i < 10; i++) {
            cout << array[i]<<" ";                                          //displaying by loop

        }
        cout << "\ncapacity =" << capacity << endl;                                 //displaying capacity
    }

    void search(int value) {
        cout<<"ENTER ELEMENTS OF ARRAY = ";
        for (int i = 1; i <=10; i++) {                                              //taking input in loop and incrementing capacity
            cin >> array[i];
            capacity++;
        }
        cout << "ENTER THE NUMBER YOU WANT TO SEARCH = ";
        cin >> value;                                                   //taking input the value user want to search
        for (int i = 1; i <=10; i++) {                                                          //applying loop
            if (array[i]==value) {                                                  //checking that if array of i is equal to the value
                cout << "THE ELEMENT IS PRESENT IN ARRAY AT INDEX = " << i << endl;                         //then display index at which the value is present
                break;
            }
            if(i==capacity){                                                        //if i is equal to capacity
                cout<<"THIS NUMBER IS NOT PRESENT IN ARRAY.."<<endl;
                break;
            }
        }

    }
    void deleteElement(int index){
        int opt;
        capacity=10;
        cout<<"ENTER ELEMENTS = ";
        for(int i=0;i<10;i++){
            cin>>array[i];                                              //taking input
        }
        do{
            cout<<"DO YOU WANT TO DELETE MORE ELEMENTS "<<"\n ENTER 1 FOR YES AND 0 FOR NO "<<endl;
            cin>>opt;
            if(opt==1){
                cout<<"ENTER INDEX = ";
                cin>>index;                                                     //taking index which user wants to delete
                for (int i = index; i <10 ; i++) {
                    if(capacity<0){                                                                   //A check to check that if the array is empty
                        cout<<"THE ARRAY IS EMPTY YOU CAN'T DELETE ANY ELEMENT.."<<endl;
                    }
                    else{
                        array[i] = array[i + 1];                                //else move the element to left index

                    }

                }
                capacity--;
                cout<<"capacity = "<<capacity<<endl;
            }
            for(int i=0;i<10;i++){
                cout<<array[i]<<" ";

                //displaying
            }
            cout<<"\nIT IS GIVING GARBAGE VALUE AT LAST INDEX"<<"\nAS THE ELEMENTS ARE MOVED TO LEFT AFTER DELETION.."<<endl;

        }while(opt==1);

    }
    bool empty(){
        if(capacity<0){
            cout<<"THE ARRAY IS EMPTY.."<<endl;                                           //checking that if the array is empty or not
            return true;
        }
        else{
            cout<<"THERE ARE ELEMENTS IN THE ARRAY .."<<endl;                                   //else return false
            return false;
        }
    }
    ~sortedArray(){
        cout<<"DESTRUCTOR CALLED.."<<endl;
    }

};


#endif //INC_2022_SPRING_CE_OOP_WEEK8_ASSIGNMENT8_BSCE21012_FUNCTIONS_H
