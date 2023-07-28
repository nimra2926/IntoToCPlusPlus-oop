//
// Created by Lenovo on 3/30/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK4_LABTASK_A_BSCE21012_ACCOUNT_H
#define INC_2022_SPRING_CE_OOP_WEEK4_LABTASK_A_BSCE21012_ACCOUNT_H

#include <string>

using namespace std;

class account {
    string AccountTitle;
    int accountNum;                                            //making private variables
public:
    account();

    void setAccount(string);

    void setAccountNumber(int);                             //functions defination
    string getAccount(void);

    int getAccountNumber(void);

    account(string Title, int accountNumber);

    account(string Title);                                     //constructer
};


#endif //INC_2022_SPRING_CE_OOP_WEEK4_LABTASK_A_BSCE21012_ACCOUNT_H
