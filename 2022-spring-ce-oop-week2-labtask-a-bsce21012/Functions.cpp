#include "Functions.h"
#include <iostream>
using namespace std;

void oddRightTriangle() {
    int num;
    cout << "please enter number of rows =" << endl;
    cin >> num;
    int j=0;
for(int i=1;i<=num;i++){
    if(i%2==1){
        for(j=0;j<i;j++)
cout<<i;
    }
    if(i%2==0){
        for(int k=0;k<=j;k++)
cout<<"#";
    }
    cout<<endl;
}
}

void invertedRight(){
    int num1;
    cout<<"enter num1= "<<endl;
    cin>>num1;
    for(int j=1;j<=num1;j++){
        for(int i=num1;i>=j;i--){
            if(j%3==1){
                cout<<"#";
            }
             if(j%3==2){
                    cout<<i;
            }
            if(j%3==0){
                cout<<"$";
            }
        }
        cout<<endl;
    }
}
void evenRightTriangle() {
    int num;
    cout << "please enter number of rows =" << endl;
    cin >> num;
    int d;
    int i;
    int j;
    int num1=2;
    for (i = 1; i <= num; i++)
    {
        if(i%2==1){
         for (j = 1; j <= num - i; j++)
         {
             cout <<" ";
         }
         d = num1;

         for (j = 1; j <= i; j++)
         {
             cout<<num1;
         }
            num1+=2;
        }
     if(i%2==0){
         for (j = 1; j <= num - i; j++)
         {
             cout <<" ";
         }
         d = i;
         for (j = 1; j <= i; j++)
         {
             cout <<"#";
         }
     }

        cout << endl;
    }
}
void printZero(){
    int n;
    int j;
    int d;
    cout<<"please enter n";
    cin>>n;
    for (int i = n; i > 0; i--) {
        for (j = 1; j <=i; j++)
        {
            cout<<"1";
        }

        d = n;
        for (j = 1; j <= n - i; j++)
        {
            cout <<"0";
        }

        cout<<endl;
    }
}

void printChars(){
    int n;
    int j;
    int d;
    cout<<"please enter n";
    cin>>n;
    for (int i = n; i > 0; i--) {
        for (j = 0; j <= n - i; j++)
        {
            cout <<"#";
        }
        d = n;

        for (j = 1; j <= i; j++)
        {
            cout<<"$";
        }
        cout<<endl;
    }
}

void printCharOfTwoTypes() {
    int n;
    int j;
    int d;
    cout << "please enter num =";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << "#";
        }
        cout << "$";

        for (int k = i; k < n; k++) {
            cout << "#";
        }
        cout << endl;

    }
}
void rightAngle(int &size){
    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void invertedRightTriangle(int &size){
   for(int j=size;j>=1;j--){
       for(int i=1;i<=j;i++){
            cout<<i;
        }
        cout<<endl;
    }
}
void rightHollowTriangle(int &size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == size) {
                cout <<j;
            }
            else{
                if (j == 1 || j == i) {
                    cout <<j;
                } else {
                    cout<<" ";
                }
            }
            }
        cout<<endl;
        }
    }
void CompleteTriangle(int &size) {
        int  num =0;
        int num1 =0;
        int k=0;
        int i=0;
while(i<size){
    i++;
            for(int j= 1; j<= size-i; j++)
            {
                cout << "  ";
                num++;
            }
           for(k=0;k!=2*i-1;k++) {
               if (num <= size - 1) {
                   cout << (i + k )<< " ";
                   num++;
               } else {
                   num1++;
                   cout << ((i + k )- (2 * num1)) << " ";
               }
           }
    cout << endl;
            num1 = num = k = 0;
        }
}

void hollowCompleteTriangle(int &size){
int num=size;
for(int i=0;i<=size;i++){
    for(int j=0;j<num;j++){
        cout<<" ";
    }
    num--;
    for(int k=1;k<=i;k++){
        if(k==1 || k==i || k==size || i==size){
            cout<<k<<" ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
    }
void invertedRightTriangleHollow(int &size) {
for(int i=size;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<size-i+j;
    }
    cout<<endl;
}
}