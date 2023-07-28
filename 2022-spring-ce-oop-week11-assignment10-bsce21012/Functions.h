#ifndef INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT10_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT10_BSCE21012_FUNCTIONS_H

#include <iostream>
#include <string>

using namespace std;

//class person {
//protected:
//    int cnicNumber;
//    string name;
//    string address;
//    int number;
//    int age;
//    string gender;
//    string email;
//    string qualification;
//public:
//    person(){
//        cnicNumber=0;
//        name="0";
//        address="0";
//        number=0;
//        age=0;
//        gender="0";
//        email="0";
//        qualification="0";
//    }
//    person(int cnic,string Name,string Address,int Num,int Age,string Gender,string Mail,string Qualification){
//        cnicNumber=cnic;
//        name=Name;
//        age=Age;
//        address=Address;
//        number=Num;
//        gender=Gender;
//        email=Mail;
//        qualification=Qualification;
//    }
//
//void display(){
//        cout<<"NAME :"<<name<<" "<<endl;
//        cout<<"AGE = "<<age<<" "<<endl;
//        cout<<"NUMBER = "<<number<<" "<<endl;
//        cout<<"GENDER = "<<gender<<" "<<endl;
//        cout<<"MAIL = "<<email<<" "<<endl;
//        cout<<"QUALIFICATION :"<<qualification<<" "<<endl;
//        cout<<"ADDRESS = "<<address<<" "<<endl;
//        cout<<"CNIC NUMBER = "<<cnicNumber<<" "<<endl;
//    }
//    ~person(){
//     cout<<"DESTRUCTOR CALLED.."<<endl;
//
//    }
//};
//class queue
//{
//private:
//    int* array;
//    int head;
//    int occupied;  //initialized to zero
//    const int max_length = 10;
//
//public:
//    queue(){
//        head=0;
//        occupied=0;
//        array=NULL;
//    }
//    queue(int Head,int Occupied){
//        head=Head;
//        occupied=Occupied;
//        array=new int[10];
//    }
//    void add(int element){
//        int opt;
//            for(int i=0;i<max_length;i++){
//                    cout<<"DO YOU WANT TO ADD NUMBER IN ARRAY ?"<<endl;
//                    cout<<"1.YES."<<endl;
//                    cout<<"2.NO."<<endl;
//                    cout<<"3.EXIT.."<<endl;
//                    cin>>opt;
//                    if(opt==1){
//                        cout<<"ENTER ELEMENT = ";
//                        cin>>element;
//                        array[i]=element;
//                        occupied++;
//                        isFull();
//                    }
//                    if(opt==2){
//                        cout<<"YOU CHOOSE NO..."<<endl;
//                        exit(3);
//                    }
//                    if(opt==3){
//                        cout<<"YOU CHOOSE TO EXIT .."<<endl;
//                        exit(5);
//                    }
//
//            }
//    }
//    int remove() {
//        int opt;
//        for(int j=0;j<max_length-1;++j) {
//                cout<<"DO YOU WANT TO DELETE NUMBER FROM ARRAY ?"<<endl;
//                cout<<"1.YES."<<endl;
//                cout<<"2.NO."<<endl;
//                cout<<"3.EXIT.."<<endl;
//                cin>>opt;
//                if(opt==1){
//                    for (int i = 0; i < max_length-1; i++) {
//                        array[i] = array[i + 1];
//                        occupied--;
//                        isEmpty();
//                    }
//                    for(int k=0;k<max_length-1;k++){
//                        cout<<array[k];
//                    }
//                    cout<<endl;
//                }
//                if(opt==2){
//                    cout<<"YOU CHOOSE NO.."<<endl;
//                    break;
//                }
//                if(opt==3){
//                    cout<<"YOU CHOOSE TO EXIT .."<<endl;
//                }
//        }
//        cout<<"ARRAY IS EMPTY NOW "<<endl;
//        return occupied;
//    }
//    void display(){
//        for(int i=0;i<max_length;i++){
//            cout<<array[i]<<" ";
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
//    ~queue(){
//        cout<<"DESTRUCTOR CALLED.."<<endl;
//        delete []array;
//    }
//};



#endif //INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT10_BSCE21012_FUNCTIONS_H
