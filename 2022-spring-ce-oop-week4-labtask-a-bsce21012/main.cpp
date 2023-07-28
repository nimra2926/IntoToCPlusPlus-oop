#include <iostream>
#include "Functions.h"
#include "account.h"

using namespace std;

int main() {
int opt;
do{
    cout<<"WHICH TASK DO YOU WANT TO PERFORM "<<endl;
    cout<<"1.TASK 1"<<endl;
    cout<<"2.TASK 2"<<endl;
    cout<<"3.TASK 3"<<endl;
    cout<<"4.TASK 4"<<endl;
    cout<<"5.TASK 5"<<endl;
    cout<<"6.EXIT"<<endl;
    cin>>opt;
    if(opt==1){
      cout<<"class has been created"<<endl;
    }
    if(opt==2){
        account myAccount;
        string AccountTitle;
        int Number;
        myAccount.setAccount(AccountTitle);                                  //you have to call this function by commenting other functions
        myAccount.setAccountNumber(Number);
        myAccount.getAccount();
        myAccount.getAccountNumber();
    }
    if(opt==3){
        account acc("ali");
    }
    if(opt==4){
        account Account1("Nimra",1234);
        account Account2("Maqbool",3456);
        account Account3("oop",12345);
    }
    if(opt==5){
        cout<<"the tasks are done in account.h and account.cpp"<<endl;
    }
    if(opt==6){
        cout<<"YOU CHOOSE TO EXIT"<<endl;
        exit(4);
    }
}
while(opt>=1 && opt<=6);

}
