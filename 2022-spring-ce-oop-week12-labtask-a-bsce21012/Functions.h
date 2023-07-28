//
// Created by Lenovo on 6/2/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK12_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK12_LABTASK_A_BSCE21012_FUNCTIONS_H

#include <iostream>
#include <string>

using namespace std;

class baseClass {
private:
    string cityName;
    string stateName;
    string senderName;
    string recipientName;
    int senderZip;                                       //declaring
    int recipientZip;
    string address;
    float weight;                        // in ounce
    double cost;
    double totalCost;
public:
    void setCity(string cN) {                                                   //taking input of name
        cout << "ENTER CITY NAME : ";
        cin >> cN;
        cityName = cN;

    }

    void setState(string sN) {
        cout << "ENTER STATE NAME : ";                                              //taking input of state
        cin >> sN;
        stateName = sN;
    }

    void setZipSender(int Zip) {                                                    //taking sender zip number
        cout << "ENTER SENDER ZIP NUMBER = ";
        cin >> Zip;
        senderZip = Zip;

    }

    void setZipRecipient(int Zip1) {
        cout << "ENTER RECIPIENT ZIP NUMBER = ";                                            //taking recipient zip number
        cin >> Zip1;
        recipientZip = Zip1;
    }

    void setAddress(string Address) {
        cout << "ENTER ADDRESS = ";
        cin>>Address;                               //taking address
        address = Address;
    }

    void setSenderName(string senderN) {
        cout << "ENTER SENDER NAME : ";
        cin >> senderN;
        senderName = senderN;                                                       //taking sender name
    }

    void setRecipientName(string recipN) {

        cout << "ENTER RECIPIENT NAME : ";
        cin >> recipN;                                                      //taking recipient name
        recipientName = recipN;
    }

    string getCity() {
        return cityName;                                                            //returning
    }

    string getState() {
        return stateName;                                                           //returning
    }

    int getZipSender() {
        return senderZip;                                                                   //returning
    }

    int getRecipientZip() {
        return recipientZip;                                            //returning
    }

    string getAddress() {
        return address;                                                             //returning
    }

    string getSender() {
        return senderName;                              //returning
    }

    string getRecipient() {
        return recipientName;                                           //returning
    }
    static double calculateCost(float &Weight, double &cost11) {
        double Cost;
        Cost = Weight * cost11;                                         //calculating
        cout<<"-----------------------------------"<<endl;
        cout << "TOTAL COST OF SHIPPING = " << Cost << endl;                            //displaying
        return Cost;                                                                            //returning
    }
    void display(){
        cout<<"SENDER NAME = "<<senderName<<endl;
        cout<<"RECIPIENT NAME = "<<recipientName<<endl;
        cout<<"SENDER ZIP = "<<senderZip<<endl;                     //displaying
        cout<<"RECIPIENT ZIP = "<<recipientZip<<endl;
        cout<<"ADDRESS = "<<address;
    }

};

class twoDayPackage : public baseClass {
private:
    double flatFee;                                         //declaring
public:
    static double calcShippingCost(float Weight, double cost11, double flatFee) {
        double cost1;
        cost1 = calculateCost(Weight, cost11) + flatFee;                                //calculating
        cout << "The TwoDayPackage Cost = " << cost1 << endl;                               //displaying
        return cost1;                                                   //returning
    }
};

class overNightPackage : public baseClass {
private:
    double overNightAdditionalCost;                                                     //declaring
public:

    static double calcCostOvernight(float Weight, double cost11, double overNightAdditionalCost) {
        double cost1;
        cost1 = calculateCost(Weight, cost11) + (overNightAdditionalCost * Weight);                     //calculating
        cout << "The OvernightPackage Cost = " << cost1 << endl;            //displaying
        return cost1;                                       //returning
    }
};


#endif //INC_2022_SPRING_CE_OOP_WEEK12_LABTASK_A_BSCE21012_FUNCTIONS_H
