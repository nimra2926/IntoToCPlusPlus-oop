#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    string cN;
    string sN;
    string senderN;
    string recipN;
    int Zip;                                                        //declaring
    int Zip1;
    string Address;
    float Weight;
    double Cost;
    double flatF;
    double oNAC;
    float weight;
    cout << "ENTER WEIGHT = ";
    cin >> Weight;                                              //taking weight and then checking if it is negative or not
    if (Weight < 0) {
        cout << "WEIGHT CAN'T BE NEGATIVE." << endl;
        do {
            cout << "DO YOU WANT TO ENTER AGAIN?" << " " << "ENTER 1 FOR YES AND 0 FOR NO." << endl;
            cin >> opt;
            if (opt == 1) {
                cout << "ENTER WEIGHT = ";
                cin >> Weight;
                if (Weight < 0) {
                    cout << "WEIGHT CAN'T BE NEGATIVE." << endl;
                    break;
                }
            }
            if (opt == 2) {
                cout << "you choose no.." << endl;
                break;
            }
        } while (opt >= 0 && opt <= 1);
    }
    double cost11;
    cout << "ENTER COST PER OUNCE = ";                                      //entering cost and checking if it is negative or not
    cin >> cost11;
    if (Cost < 0) {
        cout << "COST CAN'T BE NEGATIVE." << endl;
        do {
            cout << "DO YOU WANT TO ENTER AGAIN?" << " " << "ENTER 1 FOR YES AND 0 FOR NO." << endl;
            cin >> opt;
            if (opt == 1) {
                cout << "ENTER COST = ";
                cin >> Cost;
                if (Cost < 0) {
                    cout << "COST CAN'T BE NEGATIVE." << endl;
                    break;
                }
            }
            if (opt == 2) {
                cout << "you choose no.." << endl;
                break;
            }
        } while (opt >= 0 && opt <= 1);
    }

    double overNightAdditionalCost;
    double flatFee;                                                     //declaring
    baseClass B;
    twoDayPackage T;                                                    //creating objects
    overNightPackage On;

    do {
        cout<<endl;
        cout << "WHICH OPTION ." << endl;
        cout << "1.BASE CLASS." << endl;
        cout << "2.TWO DAY SHIPMENT CLASS." << endl;
        cout << "3.OVER NIGHT CLASS." << endl;
        cout << "4.EXIT.." << endl;
        cin >> opt;
        if (opt == 1) {
            B.setSenderName(senderN);
            B.getSender();
            B.setRecipientName(recipN);
            B.getRecipient();
            B.setCity(cN);
            B.getCity();                                                    //calling the getter and setters
            B.setState(sN);
            B.getState();
            B.setZipSender(Zip);
            B.getZipSender();
            B.setZipRecipient(Zip1);
            B.getRecipientZip();
            B.setAddress(Address);
            B.getAddress();
            B.calculateCost(Weight, cost11);
            B.display();
        }
        if (opt == 2) {
            cout << "ENTER FLAT FEE = ";
            cin >> flatFee;
            T.calcShippingCost(Weight, cost11, flatFee);                 //calling
        }
        if (opt == 3) {
            cout << "ENTER ADDITIONAL OVER NIGHT ADDITIONAL COST = ";
            cin >> overNightAdditionalCost;
            On.calcCostOvernight(Weight, cost11, overNightAdditionalCost);
        }
        if (opt == 4) {
            cout << "YOU CHOOSE TO EXIT.." << endl;
            exit(3);
        }
    } while (opt >= 1 && opt <= 4);
    return 0;
}
