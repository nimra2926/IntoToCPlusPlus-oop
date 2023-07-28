#ifndef MAIN_CPP_FUNCTIONS_H
#define MAIN_CPP_FUNCTIONS_H


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

//class teams {
//public:
//    string departmentName;
//    string playerName;                                    //declaring
//    string captainName;
//    int numberOfBowler;
//    int numberOfBatsman;
//    int numberOfAllRounder;
//    int reservedPlayers;
//    int currentlyPlaying;
//    int ageOfPlayer;
//    int totalNumberOfTeamPlayer;
//    long int phoneNumber;
//    string enrollmentYear;
//    string email;
//    string rollNumber;
//    string category;
////    string teamName;
//    char teamsNames[99];
//public:
//    teams() {
//        departmentName = " ";
//        numberOfAllRounder = 0;
//        numberOfBatsman = 0;
//        numberOfBowler = 0;
//        playerName = " ";
//        captainName = " ";                                    //putting it equal to zero or space
//        reservedPlayers = 0;
//        currentlyPlaying = 0;
//        ageOfPlayer = 0;
//        email = " ";
//        rollNumber = " ";
//        enrollmentYear = " ";
//        phoneNumber = 0;
//        totalNumberOfTeamPlayer = 0;
//        category = " ";
////        teamName=" ";
//    }
//
//    teams(string DepartmentName, string PlayerName, string CaptainName, int NumberOfBowler,
//          int NumberOfBatsman, int NumberOfAllRounder, int ReservedPlayers, int CurrentlyPlaying, int AgeOfPlayer,
//          long int PhoneNumber, string EnrollmentYEar, string Email, string RollNumber, int TotalNumberOfTeamPlayer,
//          string Category,string TeamName
//    ) {
//        departmentName = DepartmentName;
//        playerName = PlayerName;
//        captainName = CaptainName;
//        numberOfBowler = NumberOfBowler;
//        numberOfBatsman = NumberOfBatsman;
//        numberOfAllRounder = NumberOfAllRounder;
//        reservedPlayers = ReservedPlayers;
//        currentlyPlaying = CurrentlyPlaying;                                    //setting values in constructor
//        ageOfPlayer = AgeOfPlayer;
//        phoneNumber = PhoneNumber;
//        enrollmentYear = EnrollmentYEar;
//        email = Email;
//        rollNumber = RollNumber;
//        totalNumberOfTeamPlayer = TotalNumberOfTeamPlayer;
//        category = Category;
////        teamName=TeamName;
//    }
//
//    void info() {
//        for (int i = 0; i < 8; i++) {
//            cout << "\nENTER DEPARTMENT NAME = ";
//            cin.ignore();
//            getline(cin, departmentName);                                           //taking input
//            cout << "Enter another string: ";
//            cin.get(teamsNames,99);
//            fstream File;                                                     //declaring
//            File.open("playerInfo", ios::app);
//            if (!File.is_open()) {
//                cout << "Error while creating the file";
//            } else {
//                cout << "ENTER TOTAL NUMBER OF TEAM PLAYERS = ";
//                cin >> totalNumberOfTeamPlayer;
//                cout << "ENTER NUMBER OF PLAYERS CURRENTLY PLAYING = ";
//                cin >> currentlyPlaying;
//                cout << "ENTER NUMBER OF RESERVED PLAYERS = ";
//                cin >> reservedPlayers;
//                cout << "ENTER NUMBER OF BOWLERS = ";
//                cin >> numberOfBowler;
//                cout << "ENTER NUMBER OF BATSMAN = ";
//                cin >> numberOfBatsman;
//                cout << "ENTER NUMBER OF ALL ROUNDER = ";
//                cin >> numberOfAllRounder;
//                File << "TOTAL NUMBER OF PLAYERS = " << totalNumberOfTeamPlayer << endl;
//                File << "NUMBER OF CURRENTLY PLAYING PLAYERS = " << currentlyPlaying << endl;
//                File << "NUMBER OF RESERVED PLAYING PLAYERS = " << reservedPlayers << endl;
//                File << "NUMBER OF BOWLERS = " << numberOfBowler << endl;
//                File << "NUMBER OF BATSMAN = " << numberOfBatsman << endl;
//                File << "NUMBER OF ALL ROUNDER = " << numberOfAllRounder << endl;
//                for (int i = 0; i < currentlyPlaying; i++) {
//                    cout << "ENTER NAME OF PLAYER = ";
//                    cin >> playerName;
//                    cout << "ENTER PLAYER AGE = ";
//                    cin >> ageOfPlayer;
//                    cout << "ENTER PLAYER PHONE NUMBER = ";
//                    cin >> phoneNumber;
//                    cout << "ENTER ENROLLMENT YEAR = ";
//                    cin >> enrollmentYear;
//                    cout << "ENTER EMAIL : ";
//                    cin >> email;
//                    cout << "ENTER ROLL NUMBER = ";
//                    cin >> rollNumber;
//                    cout << "ENTER CATEGORY OF PLAYER = ";
//                    cin >> category;
//                    File << "PLAYER NAME = " << setw(20) << playerName << setw(20) << "AGE = " << setw(20)
//                         << ageOfPlayer << setw(20) << "PHONE NUMBER = " << setw(20) << phoneNumber << setw(20)
//                         << "ENROLLMENT YEAR = " << setw(20) << enrollmentYear << setw(20) << "ROLL NUMBER = "
//                         << setw(20) << rollNumber << setw(20) << "EMAIL = " << setw(20) << email << setw(20)
//                         << "CATEGORY : " << setw(20) << category << endl;
//                    cout<<"--------------------------------------------------------------"<<endl;
//                    File<<"--------------------------------------------------------------"<<endl;
//                }
//                for (int i = 0; i < reservedPlayers; i++) {
//                    cout << "ENTER NAME OF PLAYER = ";
//                    cin >> playerName;
//                    cout << "ENTER PLAYER AGE = ";
//                    cin >> ageOfPlayer;
//                    cout << "ENTER PLAYER PHONE NUMBER = ";
//                    cin >> phoneNumber;
//                    cout << "ENTER ENROLLMENT YEAR = ";
//                    cin >> enrollmentYear;
//                    cout << "ENTER EMAIL : ";
//                    cin >> email;
//                    cout << "ENTER ROLL NUMBER = ";
//                    cin >> rollNumber;
//                    cout << "ENTER CATEGORY OF PLAYER = ";
//                    cin >> category;
//                    File << "PLAYER NAME = " << setw(20) << playerName << setw(20) << "AGE = " << setw(20)
//                         << ageOfPlayer << setw(20) << "PHONE NUMBER = " << setw(20) << phoneNumber << setw(20)
//                         << "ENROLLMENT YEAR = " << setw(20) << enrollmentYear << setw(20) << "ROLL NUMBER = "
//                         << setw(20) << rollNumber << setw(20) << "EMAIL = " << setw(20) << email << setw(20)
//                         << "CATEGORY : " << setw(20) << category << endl;
//                    cout<<"--------------------------------------------------------------"<<endl;
//                    File<<"--------------------------------------------------------------"<<endl;
//                }
//                cout << "ENTER CAPTAIN NAME = ";
//                cin >> captainName;
//            }
//            File.close();
//        }
//    }
//};


class singleton{
    static singleton *instance;
    int data;
    singleton(){
     data=0;
    }
public:
    static singleton *getInstance(){
        if(!instance){
            instance=new singleton;
            return instance;
        }
    }
    int getData(){
        return data;
    }
    void setData(int Data){
        cout<<"ENTER DATA ";
        cin>>Data;
        data=Data;

    }
};
#endif //MAIN_CPP_FUNCTIONS_H
