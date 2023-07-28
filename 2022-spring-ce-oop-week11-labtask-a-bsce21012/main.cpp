#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    int opt;
    universityManagementSystem U;
    universityManagementSystem U1(1);
    do{
        cout<<"CHOOSE ANY OPTION."<<endl;
        cout<<"1.DISPLAY PERSONAL INFORMATION."<<endl;
        cout<<"2.DISPLAY ACADEMIC INFORMATION."<<endl;                          //taking option
        cout<<"3.DISPLAY MARKS INFO."<<endl;
        cout<<"4.exit.."<<endl;
        cin>>opt;
        if(opt==1){
            U1.displayPersonalInfoOfStudent();                              //calling
        }
        else if(opt==2){
            U1.displayAcademicInfoOfStudent();                                   //calling
        }
       else if(opt==3){
            U1.displayMarksInfo();                                           //calling
        }
        else if(opt==4){
            cout<<"YOU CHOOSE TO EXIT.."<<endl;        //exit statement
            exit(3);
        }
        else{
            cout<<"YOU HAVE ENTERED AN INVALID ARGUMENT.."<<endl;
            exit(3);                                                        //exit statement
        }
    }while(opt!=4);

    return 0;
}
