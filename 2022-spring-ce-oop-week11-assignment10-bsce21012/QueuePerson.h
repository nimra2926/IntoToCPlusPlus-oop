#ifndef INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT10_BSCE21012_QUEUEPERSON_H
#define INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT10_BSCE21012_QUEUEPERSON_H

#include <iostream>
#include <string>

using namespace std;

template<typename T>

//class queuePerson{
//private:
//    T *cnic;
//    int occupied;  //initialized to zero
//    const int max_length = 10;
//
//public:
//    queuePerson(){
//        occupied=0;
//        cnic=NULL;
//    }
//    queuePerson<T>(int Occupied){
//        occupied=Occupied;
//        cnic=new T[10];
//    }
//    void add(int element){
//        int opt;
//        for(int i=0;i<max_length;i++){
//            cout<<"DO YOU WANT TO ADD PERSON IN QUEUE ?"<<endl;
//            cout<<"1.YES."<<endl;
//            cout<<"2.NO."<<endl;
//            cout<<"3.EXIT.."<<endl;
//            cin>>opt;
//            if(opt==1){
//                cout<<"ENTER CNIC OF PERSON = ";
//                cin>>element;
//                cnic[i]=element;
//                occupied++;
//                isFull();
//            }
//            if(opt==2){
//                cout<<"YOU CHOOSE NO..."<<endl;
//                break;
//            }
//            if(opt==3){
//                cout<<"YOU CHOOSE TO EXIT .."<<endl;
//                exit(5);
//            }
//
//        }
//    }
//    int remove() {
//        int opt;
//        int index;
//        for(int j=0;j<max_length-1;++j) {
//            cout<<"DO YOU WANT TO DELETE PERSON FROM ARRAY ?"<<endl;
//            cout<<"1.YES."<<endl;
//            cout<<"2.NO."<<endl;
//            cout<<"3.EXIT.."<<endl;
//            cin>>opt;
//            if(opt==1){
//                int n=max_length;
//                n=n-1;
//                int index;
//                cout<<"ENTER INDEX = ";
//                cin>>index;
//                if(index<n && index>=0) {
//
//                    for (int i = index; i < n - 1; ++i) {
//                        cnic[i] = cnic[i + 1];
//                    }
//                }
//                for(int i=0;i<n;i++){
//                    cout<<cnic[i]<<" ";
//                }
//                cout<<endl;
//
//            }
//            if(opt==2){
//                cout<<"YOU CHOOSE NO.."<<endl;
//                break;
//            }
//            if(opt==3){
//                cout<<"YOU CHOOSE TO EXIT .."<<endl;
//            }
//        }
//        cout<<"ARRAY IS EMPTY NOW "<<endl;
//        return occupied;
//    }
//    void display(){
//        for(int i=0;i<max_length;i++){
//            cout<<cnic[i]<<" ";
//        }
//        cout<<endl;
//    }
//    bool isEmpty(){
//        if(occupied>0){
//            return true;
//        }
//        else{
//            return false;
//        }
//    }
//    bool isFull(){
//        if(occupied==max_length){
//            cout<<"THE ARRAY IS FULLY OCCUPIED.."<<endl;
//            return true;
//        }
//        else{
//            cout<<"NOT FILLED"<<endl;
//            return false;
//        }
//    }
//    ~queuePerson(){
//        cout<<"DESTRUCTOR CALLED.."<<endl;
//        delete []cnic;
//    }
//};



#endif //INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT10_BSCE21012_QUEUEPERSON_H
