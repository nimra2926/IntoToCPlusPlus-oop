#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    calculateSalary S;

            do{
                cout<<"1.MANAGER"<<endl;
                cout<<"2.COMMISSIONED OFFICER."<<endl;                   //asking for the choice
                cout<<"3.PIECE WORKER ."<<endl;
                cout<<"4.DISPLAY WHOLE SALARY AND EMPLOYEES."<<endl;
                cout<<"5.EXIT."<<endl;
                cin>>opt;
                if(opt==1){
                    S.managerSalary();
                }
                if(opt==2){
                    S.salaryOfCommissionedOfficers();
                }
                if(opt==3){
                    S.salaryOfPieceWorkers();                     //calling
                }
                if(opt==4){
                        S.totalEmployee();
                }
                if(opt==5){
                    cout<<"YOU CHOOSE TO EXIT.."<<endl;
                    exit(5);
                }
            }while(opt>=1 && opt<=4);

    return 0;
}
