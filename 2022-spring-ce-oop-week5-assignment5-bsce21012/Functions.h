#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include <iostream>
using namespace std;
//class duck {
//private:
//    int energy;
//    int number;
//public:
//    duck(int eng,int num);
//        duck(duck &d);
//    void eating ();
//    void swimming();
//    void walking();
//    void print();
//    int getEnergy();
//    ~duck();
//};
//
//
//inline duck::duck(int eng,int num){
//    char ch;
//    eng=10;
//    energy=eng;
//    num=1;
//    number=num;
//    do {
//        cout << "\nDo you want to use another duck? " << "\nEnter y for yes and n for no " << endl;
//        cin >> ch;
//
//        if (ch =='y') {
//            number++;
//            cout << "NUMBER OF THE DUCK = " << number << endl;
//            cout << "THE ENERGY OF THE DUCK = " << energy << endl;
//        } else {
//            cout << "YOU DON'T WANTED THE OTHER DUCK" << "\nTHE NUMBER OF DUCK IS = " << number << endl;
//            cout << "THE ENERGY OF THE DUCK = " << energy << endl;
//            break;        }
//    }
//    while(ch=='y' );
//}
//inline duck::duck(duck &d){
//    cout<<"\nCOPY CONSTRUCTED IS CALLED"<<endl;
//    energy =d.energy;
//    number =d.number;
//}
//inline void duck::eating(){
//    char ch;
//    cout<<"\nDO YOU WANT DUCK TO EAT ?"<<endl;
//    cout<<"ENTER Y FOR YES AND N FOR NO "<<endl;
//    cin>>ch;
//    if(ch=='y'){
//        energy=energy+3;
//        cout<<"THE ENERGY OF THE DUCK NUMBER "<<number<<" AFTER EATING = "<<energy<<endl;
//    }
//    else{
//        cout<<"THE ENERGY OF THE DUCK = "<<energy<<endl;
//    }
//}
//inline void duck::swimming(){
//    char ch;
//    cout<<"\nDO YOU WANT DUCK TO SWIM ?"<<endl;
//    cout<<"ENTER Y FOR YES AND N FOR NO "<<endl;
//    cin>>ch;
//    if(ch=='y'){
//        energy=energy-2;
//        cout<<"THE ENERGY OF THE DUCK NUMBER "<<number<<" AFTER SWIMMING = "<<energy<<endl;
//    }
//    else{
//        cout<<"THE ENERGY OF THE DUCK = "<<energy<<endl;
//    }
//}
//inline void duck::walking(){
//    char ch;
//    cout<<"\nDO YOU WANT DUCK TO WALK ?"<<endl;
//    cout<<"ENTER Y FOR YES AND N FOR NO "<<endl;
//    cin>>ch;
//    if(ch=='y'){
//        energy=energy-1;
//        cout<<"THE ENERGY OF THE DUCK NUMBER "<<number<<" AFTER WALKING = "<<energy<<endl;
//
//    }
//    else{
//        cout<<"THE ENERGY OF THE DUCK = "<<energy<<endl;
//    }
//}
//
//inline void duck::print(){
//    cout<<"\nTHE ENERGY OF THE DUCK NUMBER "<<number<<" AFTER EATING  = "<<energy<<endl;
//}
//inline int duck::getEnergy(){
//    return energy;
//}
//inline duck::~duck(){
//    cout<<"THE DESTRUCTOR IS CALLED "<<endl;
//}


#endif
