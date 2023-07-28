//
// Created by Lenovo on 5/26/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK11_LABTASK_B_BSCE21012_FRACTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK11_LABTASK_B_BSCE21012_FRACTIONS_H
#include <iostream>
using namespace std;


class Fractions {
private:
    int num1;
    int num2;                                           //declaring
    double ratio;

public:

    friend Fractions operator<<(ostream &os, const Fractions &F);                               //declaring friend function
    friend Fractions operator>>(istream &is,  Fractions &F);
    Fractions(){
        num1=0;                                         //declaring them equal to zero
        num2=0;
        ratio=0.00;
    }
    Fractions(int n1,int n2){
        cout<<"parametrized constructor is called.."<<endl;
        num1=n1;                                                        //equaling
        num2=n2;
    }
    void setNumber1(int &number1){
        num1=number1;                                                                   //equaling
    }
    void setNumber(int &number2){
            num2=number2;                                                //equaling
    }

    int getNumber1(){
        return num1;                                                                 //equaling
    }
    int getNumber2(){
        return num2;                                                     //equaling
    }
    double getRatio(){
        return ratio;                                                    //equaling
    }

    bool operator==(Fractions &F){
        F.ratio=(F.num1/F.num2);                                                    //taking ratio
        ratio=(num1/num2);
        if(ratio==F.ratio){                                     //checking that if ratios are equal or not
            cout<<"\ntrue"<<endl;
            return true;
        }
        else{
            return false;
        }


    }
};
Fractions operator<<(ostream &os, const Fractions &F){
    cout<<"ratio = ";
    os<<F.num1<<":"<<F.num2<<endl;                                                      //displaying
    return F;
}
Fractions operator>>(istream &is,Fractions &F){
    cout<<"ENTER NUMBER 1 = ";
    is>>F.num1;                                                                             //taking input
    cout<<"ENTER NUMBER 2 = ";
    is>>F.num2;
    return F;                                                               //returning
}

#endif //INC_2022_SPRING_CE_OOP_WEEK11_LABTASK_B_BSCE21012_FRACTIONS_H
