
//#include "Functions.h"
//#include <iostream>
//#include <fstream>
//using namespace std;
//void A::set_value(int k){                                                       //function to set value
//    cout<<"ENTER NUMBER = ";
//    cin>>k;                                                             //taking value
//    num=k;                                                                  //copying
//}
//void A::show_sum(int n){                                                //function to find sum
//    cout<<"ENTER NUMBER = ";
//    cin>>n;                                                                             //taking input
//    int sum;
//    sum=n+num;                                                                  //taking sum
//    cout<<"THE SUM = "<<sum<<endl;                                          //displaying
//}
//void B::print(){
//    int n;
//    first.show_sum(n);                                              //calling the sum function from the class A
//}
//void employee::enter_record(int s,string n,string d){
//    cout<<"ENTER SALARY = ";
//    cin>>s;                                                             //taking input
//    cout<<"ENTER NAME = ";
//    cin>>n;                                                                     //taking input
//    name=n;                                                                         //copying
//    cout<<"ENTER DESIGNATION = ";
//    cin>>d;                                                                             //taking input
//    designation=d;                                                                      //copying
//    salary=s;                                                   //copying
//}
//void employee::display_record(){
//    cout<<"SALARY = "<<salary<<endl;
//    cout<<"NAME : "<<name<<endl;                                            //displaying
//    cout<<"DESIGNATION : "<<designation<<endl;
//}
//
//void admin::enter_record(int r){
//    cout<<"ENTER SERVICE YEARS OF ADMIN = ";
//    cin>>r;                                                                 //taking input
//    total_service=r;
//    int s;
//    string n;
//    string d;
//    employee::enter_record(s,n,d);                                  //calling enter_record function from the employee class
//}
//void admin::display_record(){
//    cout<<"TOTAL SERVICE OF ADMIN = "<<total_service<<endl;                                     //displaying
//    employee::display_record();                 //calling display_record function from the employee class
//}
//void IT::enter_record(int r){
//    cout<<"ENTER SERVICE YEARS OF IT= ";
//    cin>>r;                                                                                 //taking input
//    total_service=r;
//    int s;
//    string n;
//    string d;
//    employee::enter_record(s,n,d);                               //calling enter_record function from the employee class
//}
//void IT::display_record(){
//    cout<<"TOTAL SERVICE OF IT= "<<total_service<<endl;                                     //displaying
//    employee::display_record();                                //calling display_record function from the employee class
//}
//
//void HR::enter_record(int r){
//    cout<<"ENTER SERVICE YEARS OF HR = ";
//    cin>>r;                                                                                         //taking input
//    total_service=r;
//    int s;
//    string n;
//    string d;
//    employee::enter_record(s,n,d);                   //calling enter_record function from the employee class
//}
//void HR::display_record(){
//    cout<<"TOTAL SERVICE OF HR = "<<total_service<<endl;                                                //displaying
//    employee::display_record();                          //calling display_record function from the employee class
//}



//cout<<"===============================================================================================";
//bool check(int x){
//    cout<<"enter x = ";
//    cin>>x;
//    if( x >10){
//        bool b1=true;
//        cout<<b1<<endl;
//        return true;
//    }
//    else{
//        bool b2=false;
//        cout<<b2<<endl;
//        return false;
//    }
//}
//bool isSingleDigit (int x) {
//    return (x >= 0 && x < 10);
//}
//void CheckEvenOrOdd (int x)
//{
//    if (x % 2 == 0)
//        goto even;
//    else
//        goto odd;
//    cout << x << " is even";
//    return;
//    odd:
//    cout << x << " is odd";
//    return;
//    even:
//    cout << x << " is even";
//    return;
//}
//struct student{
//    int age;
//    string gender;
//    string name;
//    string rollNumber;
//    char fatherName[100];
//};
//void writeIn() {
//student s;
//    fstream myFile;
//    myFile.open("abc.txt", ios::app);
//    if (myFile.is_open()) {
//        cout << "enter age = ";
//        cin >> s.age;
//        cout << "enter gender = ";
//        cin>>s.gender;
//        cout << "enter name = ";
//        cin >> s.name;
//        cout << "enter roll number = ";
//        cin >> s.rollNumber;
//        cout << "enter father name = ";
//        cin>>(s.fatherName);
//    } else {
//        cout << "file is not open ..";
//
//    }
//    myFile.close();
//}
