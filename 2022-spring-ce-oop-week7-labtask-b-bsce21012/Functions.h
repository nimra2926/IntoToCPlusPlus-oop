//
// Created by Lenovo on 4/22/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK7_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK7_LABTASK_B_BSCE21012_FUNCTIONS_H
#include <iostream>
using namespace std;

//class A {                                                               //creating class a
//private:
//    int num;                                                        //declaring private member num
//public:
//    void set_value(int k);                                              //declaring function
//    void show_sum(int n);
//};
//class B{                                                                //creating class a
//public:
//    A first ;                                                           //creating an object
//    void print();                                                                       //declaring function
//};
//
//class employee{                                                         //creating class of employee
//public:
//    int salary;
//    string name;                                                            //declaring name salary and designation
//    string designation;
//    void enter_record(int s,string n,string d);                             //declaring function
//    void display_record();
//};
//class admin:public employee{                                    //creating class of admin inheriting employee class
//private:
//    int total_service;                                                  //declaring
//public:
//    void enter_record(int r);                                               //declaring function
//    void display_record();
//};
//class IT:public employee{                                                 //creating class of IT inheriting employee class
//private:
//    int total_service;                                                           //declaring
//public:
//    void enter_record(int r);                                               //declaring function
//    void display_record();
//};
//class HR:public employee{                                                 //creating class of HR inheriting employee class
//private:
//    int total_service;                                                              //declaring
//public:
//    void enter_record(int r);                                                       //declaring function
//    void display_record();
//};
//bool check(int x);
//bool isSingleDigit (int x) ;
//void CheckEvenOrOdd (int x);
//void writeIn() ;
//class car{
//private:
//    int wheels;
//    int door;
//    string name;
//    string id;
//public:
//    car(int x,int y,string n,string ID){
//        cout<<"enter wheels = ";
//        cin>>x;
//        wheels=x;
//        cout<<"enter doors = ";
//        cin>>y;
//        door=y;
//        cout<<"enter name = ";
//        cin>>n;
//        name=n;
//        cout<<"enter id = ";
//        cin>>ID;
//        id=ID;
//    }
//    car(const car &c){
//        wheels=c.wheels;
//        door=c.door;
//        id=c.id;
//        name=c.name;
//    }
//    int getWheels(){
//       return wheels;
//    }
//    int getDoors(){
//        return door;
//    }
//};
//class A{
//private:
//    int wheels;
//public:
//    A(){
//     cout<<"enter wheels = ";
//     cin>>wheels;
//    }
//    friend void PrintLength(A a);
//};
//void  PrintLength(A a){
//    cout<<a.wheels;
//}
//class Box
//{
//private:
//    int length;
//public:
//    Box (): length (0) {}
//    friend int printLength (Box); //friend function
//};
//int printLength (Box b)
//{
//    b. length +=10;
//    return b. length;
//}
//class car{
//private:
//    int door;
//    int wheels;
//    int id;
//public:
//    car(int x,int y,int z){
//        cout<<"enter x y and z";
//        cin>>x;
//        cin>>y;
//        cin>>z;
//        door=x;
//        wheels=y;
//        id=z;
//    }
//    friend void PrintValues(car);
//};
//void PrintValues(car c){
//    cout<<"doors = "<<c.door;
//    cout<<"wheels = "<<c.wheels;
//    cout<<"ID = "<<c.id;
//    }
//class A{
//public:
//    int wheels=4;
//    friend class B;
//};
//class B{
//public:
//    int doors=4;
//    void Print(A &a,B b){
//        cout<<"wheels = "<<a.wheels;
//        cout<<"doors = "<<b.doors;
//        int sum;
//        sum=a.wheels+b.doors;
//        cout<<"sum= "<<sum;
//    }
//};
//class x{
//private:
//    int num;
//public:
//    x(int n){
//        cout<<"enter number ";
//        cin>>n;
//        num=n;
//    }
//    inline void Print(){
//        cout<<num;
//    }
//};
//class note{
//    static int num;
//public:
//    note(int n){
//        cout<<"enter num= ";
//        cin>>n;
//        num=n;
//    }
//    void print(){
//        cout<<"num= "<<num;
//    }
//};
//int note::num=7;
//class A{
//private:
//    int x;
//    int y;
//public:
//    A(int num,int num1){
//        x=num;
//        y=num1;
//    }
//    A(){
//        int x1=0;
//        int y1=0;
//        x=x1;
//        y=y1;
//
//    }
//    A operator +(const A &c1){
//        A temp;
//        temp.x=x+c1.x;
//        temp.y=y+c1.y;
//        return temp;
//    }
//void print(){
//        cout<<x<<"\n"<<y;
//    }
//};


//class Count {
//private:
//    int value;
//
//public:
//
//    // Constructor to initialize count to 5
//    Count() : value(5) {}
//
//    // Overload ++ when used as prefix
//    void operator ++ () {
//        ++value;
//    }
//
//    void display() {
//        cout << "Count: " << value << endl;
//    }
//};


#endif //INC_2022_SPRING_CE_OOP_WEEK7_LABTASK_B_BSCE21012_FUNCTIONS_H
