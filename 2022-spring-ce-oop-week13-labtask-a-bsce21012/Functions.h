//
// Created by Lenovo on 6/9/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK13_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK13_LABTASK_A_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class calculateSalary {
public:
    int salaryOfManagerJunior;
    int salaryOfManagerSenior;
    int salaryOfManagerMostSenior;                                          //declaring
    int payCode;
    float grossMonthlySale[900];
    int numberOfItemProduced[900];
    int pricePerItem[900];
    int numberOfCommissionedOfficer;
    int numberOfPieceworkers;
    int fixedMoneyToCommissionedOfficer;
    int salaryOfCommissionedOfficer[900];
    int salaryOfPieceWorker[900];
    int totalSumOfSalary;
    int totalSumOfSalary1;
    int employeeNumber;

    calculateSalary() {
        payCode = 0;
        numberOfCommissionedOfficer = 0;
        numberOfPieceworkers = 0;
        salaryOfManagerJunior = 0;
        salaryOfManagerSenior = 0;                         //putting them equal to zero
        salaryOfManagerMostSenior = 0;
        fixedMoneyToCommissionedOfficer = 1000;
        totalSumOfSalary = 0;
        totalSumOfSalary1 = 0;

    }

    void managerSalary() {
        int opt;

        do {
            cout << "THERE ARE 3 KINDS OF MANAGERS IN THIS COMPANY." << endl;
            cout << "1.JUNIOR." << endl;                                          //taking choices
            cout << "2.SENIOR." << endl;
            cout << "3.MOST SENIOR." << endl;
            cout << "5.DISPLAY." << endl;
            cout << "4.EXIT" << endl;
            cin >> opt;
            if (opt == 1) {
                cout << "ENTER SALARY OF JUNIOR MANAGER = ";
                cin >> salaryOfManagerJunior;                             //taking input
            }
            if (opt == 2) {
                cout << "ENTER SALARY OF SENIOR MANAGER = ";
                cin >> salaryOfManagerSenior;
            }
            if (opt == 3) {
                cout << "ENTER SALARY OF MOST SENIOR MANAGER = ";
                cin >> salaryOfManagerMostSenior;
            }
            if (opt == 5) {
                cout << "YOU CHOOSE TO EXIT.." << endl;
            }
            if (opt == 4) {
                int opt1;
                do {
                    cout << "WHICH MANAGER?" << endl;
                    cout << "1.JUNIOR." << endl;
                    cout << "2.SENIOR." << endl;
                    cout << "3.MOST SENIOR." << endl;                    //taking choice
                    cout << "4.EXIT" << endl;
                    cin >> opt1;
                    if (opt1 == 1) {
                        cout << "SALARY OF JUNIOR MANAGER = " << salaryOfManagerJunior << endl;
                    }
                    if (opt1 == 2) {
                        cout << "SALARY OF SENIOR MANAGER = " << salaryOfManagerSenior << endl;
                    }                               //displaying salaries
                    if (opt1 == 3) {
                        cout << "SALARY OF MOST SENIOR MANAGER = " << salaryOfManagerMostSenior << endl;
                    }
                    if (opt1 == 4) {
                        cout << "YOU CHOOSE TO EXIT.." << endl;
                        exit(3);
                    }
                } while (opt >= 1 && opt <= 4);

            }
        } while (opt >= 1 && opt <= 4);


    }


    void salaryOfCommissionedOfficers() {
        cout << "ENTER THE NUMBER OF COMMISSIONED OFFICERS = ";
        cin >> numberOfCommissionedOfficer;
        cout << "ENTER THE GROSS SALE ";                                   //taking number of officers to put the condition on loop
        for (int i = 0; i < numberOfCommissionedOfficer; i++) {
            cin >> grossMonthlySale[i];                //taking gross income
            salaryOfCommissionedOfficer[i] = fixedMoneyToCommissionedOfficer + 0.05 * grossMonthlySale[i];     //multiplying and then adding
            totalSumOfSalary1 = totalSumOfSalary1 + salaryOfCommissionedOfficer[i];    //adding to find total
            cout << "salary = " << totalSumOfSalary1 << endl;         //displaying
        }
    }

    void salaryOfPieceWorkers() {
        cout << "ENTER THE NUMBER OF PIECE WORKERS = ";
        cin >> numberOfPieceworkers;            //taking number of officers to put the condition on loop
        cout << "ENTER THE FOLLOWING INFO :";
        for (int i = 0; i < numberOfPieceworkers; i++) {
            cout << "ENTER NUMBER OF ITEMS PRODUCED = ";
            cin >> numberOfItemProduced[i];             //taking input
            cout << "ENTER PRICE PER ITEM = ";
            cin >> pricePerItem[i];      //taking input
            salaryOfPieceWorker[i] = numberOfItemProduced[i] * pricePerItem[i];           //multiplying them
            totalSumOfSalary = totalSumOfSalary + salaryOfPieceWorker[i];         //adding
            cout << "SALARY = " << totalSumOfSalary;        //displaying
        }
    }

    void totalEmployee() {
        employeeNumber = 3 + numberOfCommissionedOfficer + numberOfPieceworkers;            //adding
        cout << "TOTAL NUMBER OF EMPLOYEES = " << employeeNumber << endl;             //displaying
        cout << "TOTAL SUM OF COMMISSIONED OFFICER SALARY = " << totalSumOfSalary1 << endl;
        cout << "TOTAL SUM OF PIECE WORKER SALARY = " << totalSumOfSalary << endl;
    }
};


#endif //INC_2022_SPRING_CE_OOP_WEEK13_LABTASK_A_BSCE21012_FUNCTIONS_H
