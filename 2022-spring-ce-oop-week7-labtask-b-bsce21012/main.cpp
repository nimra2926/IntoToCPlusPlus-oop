#include <iostream>
#include "Functions.h"
#include <string>
#include<cmath>
#include<fstream>

using namespace std;

//
//int main() {
//    int opt;                                                                    //declaring
//    do{
//        cout<<"PLEASE ENTER THE TASK YOU WANT TO PERFORM."<<endl;
//        cout<<"1.TASK 1."<<endl;                                                //taking choices
//        cout<<"2.TASK 2."<<endl;
//        cout<<"3.EXIT."<<endl;
//        cin>>opt;
//        if(opt==1){                                                                 //meeting condition
//            B b;                                                                    //creating object
//            int k, n;                                                               //declaring
//            b.first.set_value(k);                                                   //calling
//            b.first.show_sum(n);
//        }
//        if(opt==2){
//            int opt1;
//            do{
//                cout<<"THERE ARE 3 PARTS OF THE TASK 2, WHICH ONE DO YOU WANT TO PERFORM?"<<endl;
//                cout<<"1.PART 1."<<endl;
//                cout<<"2.PART 2."<<endl;
//                cout<<"3.PART 3."<<endl;
//                cout<<"4.exit"<<endl;
//                cin>>opt1;
//                if(opt1==1){                                                                            //meeting condition
//                    int r;                                                                              //declaring
//                    admin Admin;                                                                        //creating object
//                    Admin.enter_record(r);
//                    Admin.display_record();                                                             //calling
//                }
//                if(opt1==2){                                                //meeting condition
//                    IT it;                                                              //creating object
//                    int r;                                                                      //declaring
//                    it.enter_record(r);                                                     //calling
//                    it.display_record();
//                }
//                if(opt1==3){                                                        //meeting condition
//                    HR hr;                                                                  //creating object
//                    int r;                                                              //declaring
//                    hr.enter_record(r);                                                     //calling
//                    hr.display_record();
//                }
//                if(opt1==4){
//                    cout<<"YOU CHOOSE TO EXIT.."<<endl;
//                    exit(3);                                                        //exiting
//                }
//            }while(opt1>=1 && opt<=4);                                      //condition for while
//        }
//        if(opt==3){
//            cout<<"YOU CHOOSE TO EXIT.."<<endl;
//            exit(4);                                                                //exiting
//        }
//    }while(opt>=1 && opt<=3);                                             //condition for while
//
//    return 0;
//}
int main() {
//    int x;
//    check(x);
//    cout << isSingleDigit (2) << endl;
//    bool bigFlag = !isSingleDigit (17);
//    cout << bigFlag;
//    return 0;

//        int a = 1;
//        label:
//        cout << a << " ";
//        a++;
//        if (a <= 10)
//    cout << "a : " << a << endl;

//int array[30]={1,2,3,4,5,6,7,7,8,9,0,7,6,};
//int size;
//size=sizeof(array)/sizeof(int);
//cout<<"size of array = "<<size<<endl;
//string str="hello world!!!";
//cout<<"the size = "<<str.size()<<endl;
//int size=str.size();
//string n="Hello ";
//string a="World";
//string c;
//c=n.append(a);
//cout<<"the string = "<<c<<endl;

//for(int i=0;i<size;i++){
//    cout<<str[i];
//}
//int num;
//cout<<"enter number = ";
//cin>>num;
//cout<<"square root of "<<num<<" is : "<<round(num)<<endl;

//int array[3][3];
//for(int i=0;i<3;i++){
//    for(int j=1;j<3;j++){
//        cin>>array[i][j];
//    }
//    cout<<endl;
//}
//    for(int i=0;i<3;i++){
//        for(int j=1;j<3;j++){
//            cout<<array[i][j];
//        }
//        cout<<endl;
//    }

//string line;
//ifstream File;
//File.open("abc.txt");
//if(!File.is_open()){
//    cout<<"file is closed ..."<<endl;
//}
//else{
//    while( getline(File,line))
//    cout<<line;
//}
//File.close();
//char name[30];
//    cout<<"Enter name: ";
//    gets(name);
//    char fileName[30], ch;
//    fstream fp;
//    cout<<"Enter the Name of File: ";
//    gets(abc);
//    fp.open("abc.txt", fstream::in);
//    if(!fp)
//    {
//        cout<<"\nError Occurred!";
//        return 0;
//    }
//    cout<<"\n------"<<fileName<<"-------\n";
//    while(fp>>noskipws>>ch)
//        cout<<ch;
//    fp.close();
//    cout<<endl;

//    writeIn();
//int x=5;
//int y=6;
//cout<<"x before swapping = "<<x<<" "<<"y before swapping = "<<y<<endl;
//x=x+y;
//y=x-y;
//x=x-y;
//cout<<"x after swapping = "<<x<<" "<<"y after swapping = "<<y<<endl;
//    int x;
//    int y;
//    string n;
//    string ID;
//    car c ( x, y,n, ID);
//    car c1=c;
//    cout<<"wheels = "<<c.getWheels();
//    cout<<"doors = "<<c.getDoors()<<endl;
//A a;
//PrintLength(a);

//    Box b;
//    cout <<printLength (b)<<endl;
//int x,y,z;
//car c(x,y,z);
//    PrintValues(c);
//A a;
//B b;
//b.Print(a,b);
//int n;
//x a(n);
//a.Print()
// int n;
//note a;
//a.print();


A a(3,5);
A a1(3,5);
A c;
c=a+a1;
c.print();

//    Count count1;
//
//    // Call the "void operator ++ ()" function
//    ++count1;
//
//    count1.display();
return 0;
}
