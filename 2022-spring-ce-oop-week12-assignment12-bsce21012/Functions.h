//
// Created by Lenovo on 6/4/2022.
//
#ifndef INC_2022_SPRING_CE_OOP_WEEK12_ASSIGNMENT12_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK12_ASSIGNMENT12_BSCE21012_FUNCTIONS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class teams {
public:
    string departmentName;
    string playerName;                                    //declaring
    string captainName;
    int numberOfBowler;
    int numberOfBatsman;
    int numberOfAllRounder;
    int reservedPlayers;
    int currentlyPlaying;
    int ageOfPlayer;
    int totalNumberOfTeamPlayer;
    long int phoneNumber;
    string enrollmentYear;
    string email;
    string rollNumber;
    string category;
public:
    teams() {
        departmentName = " ";
        numberOfAllRounder = 0;
        numberOfBatsman = 0;
        numberOfBowler = 0;
        playerName = " ";
        captainName = " ";                                    //putting it equal to zero or space
        reservedPlayers = 0;
        currentlyPlaying = 0;
        ageOfPlayer = 0;
        email = " ";
        rollNumber = " ";
        enrollmentYear = " ";
        phoneNumber = 0;
        totalNumberOfTeamPlayer = 0;
        category = " ";
    }

    teams(string DepartmentName, string PlayerName, string CaptainName, int NumberOfBowler,
          int NumberOfBatsman, int NumberOfAllRounder, int ReservedPlayers, int CurrentlyPlaying, int AgeOfPlayer,
          long int PhoneNumber, string EnrollmentYEar, string Email, string RollNumber, int TotalNumberOfTeamPlayer,
          string Category
    ) {
        departmentName = DepartmentName;
        playerName = PlayerName;
        captainName = CaptainName;
        numberOfBowler = NumberOfBowler;
        numberOfBatsman = NumberOfBatsman;
        numberOfAllRounder = NumberOfAllRounder;
        reservedPlayers = ReservedPlayers;
        currentlyPlaying = CurrentlyPlaying;                                    //setting values in constructor
        ageOfPlayer = AgeOfPlayer;
        phoneNumber = PhoneNumber;
        enrollmentYear = EnrollmentYEar;
        email = Email;
        rollNumber = RollNumber;
        totalNumberOfTeamPlayer = TotalNumberOfTeamPlayer;
        category = Category;
    }

    void info() {
        for (int i = 0; i < 7; i++) {
            cout << "ENTER DEPARTMENT NAME = ";
            cin.ignore();
            getline(cin, departmentName);                                           //taking input
            fstream File;                                                     //declaring
            File.open("playerInfo", ios::app);
            if (!File.is_open()) {
                cout << "Error while creating the file";
            } else {
                cout << "ENTER TOTAL NUMBER OF TEAM PLAYERS = ";
                cin >> totalNumberOfTeamPlayer;
                cout << "ENTER NUMBER OF PLAYERS CURRENTLY PLAYING = ";
                cin >> currentlyPlaying;
                cout << "ENTER NUMBER OF RESERVED PLAYERS = ";
                cin >> reservedPlayers;
                cout << "ENTER NUMBER OF BOWLERS = ";
                cin >> numberOfBowler;
                cout << "ENTER NUMBER OF BATSMAN = ";
                cin >> numberOfBatsman;
                cout << "ENTER NUMBER OF ALL ROUNDER = ";
                cin >> numberOfAllRounder;
                File << "TOTAL NUMBER OF PLAYERS = " << totalNumberOfTeamPlayer << endl;
                File << "NUMBER OF CURRENTLY PLAYING PLAYERS = " << currentlyPlaying << endl;
                File << "NUMBER OF RESERVED PLAYING PLAYERS = " << reservedPlayers << endl;
                File << "NUMBER OF BOWLERS = " << numberOfBowler << endl;
                File << "NUMBER OF BATSMAN = " << numberOfBatsman << endl;
                File << "NUMBER OF ALL ROUNDER = " << numberOfAllRounder << endl;
                for (int i = 0; i < currentlyPlaying; i++) {
                    cout << "ENTER NAME OF PLAYER = ";
                    cin >> playerName;
                    cout << "ENTER PLAYER AGE = ";
                    cin >> ageOfPlayer;
                    cout << "ENTER PLAYER PHONE NUMBER = ";
                    cin >> phoneNumber;
                    cout << "ENTER ENROLLMENT YEAR = ";
                    cin >> enrollmentYear;
                    cout << "ENTER EMAIL : ";
                    cin >> email;
                    cout << "ENTER ROLL NUMBER = ";
                    cin >> rollNumber;
                    cout << "ENTER CATEGORY OF PLAYER = ";
                    cin >> category;
                    File << "PLAYER NAME = " << setw(20) << playerName << setw(20) << "AGE = " << setw(20)
                         << ageOfPlayer << setw(20) << "PHONE NUMBER = " << setw(20) << phoneNumber << setw(20)
                         << "ENROLLMENT YEAR = " << setw(20) << enrollmentYear << setw(20) << "ROLL NUMBER = "
                         << setw(20) << rollNumber << setw(20) << "EMAIL = " << setw(20) << email << setw(20)
                         << "CATEGORY : " << setw(20) << category << endl;
                }
                for (int i = 0; i < reservedPlayers; i++) {
                    cout << "ENTER NAME OF PLAYER = ";
                    cin >> playerName;
                    cout << "ENTER PLAYER AGE = ";
                    cin >> ageOfPlayer;
                    cout << "ENTER PLAYER PHONE NUMBER = ";
                    cin >> phoneNumber;
                    cout << "ENTER ENROLLMENT YEAR = ";
                    cin >> enrollmentYear;
                    cout << "ENTER EMAIL : ";
                    cin >> email;
                    cout << "ENTER ROLL NUMBER = ";
                    cin >> rollNumber;
                    cout << "ENTER CATEGORY OF PLAYER = ";
                    cin >> category;
                    File << "PLAYER NAME = " << setw(20) << playerName << setw(20) << "AGE = " << setw(20)
                         << ageOfPlayer << setw(20) << "PHONE NUMBER = " << setw(20) << phoneNumber << setw(20)
                         << "ENROLLMENT YEAR = " << setw(20) << enrollmentYear << setw(20) << "ROLL NUMBER = "
                         << setw(20) << rollNumber << setw(20) << "EMAIL = " << setw(20) << email << setw(20)
                         << "CATEGORY : " << setw(20) << category << endl;
                }
                cout << "ENTER CAPTAIN NAME = ";
                cin >> captainName;
            }
            cout << "File created successfully";
            File.close();
        }
    }
};

class QuarterMatch {
protected:
    int count;
    string time;
    int matches;
    int numberOfTeams;
    int points[99];
    float avg[999];
    char teamsName[890];
public:
    teams Teams;

    QuarterMatch() {
        time = " ";
        matches = 0;
        numberOfTeams = 0;
        count = 0;
    }

    QuarterMatch(string Time, int Matches, int NumberOfTeams, int Count) {
        time = Time;
        matches = Matches;
        numberOfTeams = NumberOfTeams;
        count = Count;
    }

    void matchTiming() {
        int opt;
        int opt1;
        for (int i = 0; i < 7; i++) {
            cout << "ENTER DEPARTMENT NAME = ";
            cin.ignore();
            getline(cin, Teams.departmentName);                     //taking input
            cout << "WHICH TIME DO YOU WANT TO CHOOSE?" << "\nANY RECOMMENDATIONS?" << endl;
            cout << "ENTER 1 FOR YES AND 0 FOR NO.." << endl;
            cin >> opt;
            if (opt == 0) {
                cout << "YOU CHOOSE NO " << endl;
                cout << "NOW THE TIME SLOTS ARE GIVEN BELOW." << endl;
                cout << "1.10-06-2021 AT 10 IN THE MORNING." << endl;
                cout << "2.10-06-2021 AT 12 IN THE NOON." << endl;
                cout << "3.10-06-2021 AT 2 IN THE EVENING." << endl;
                cout << "4.10-06-2021 AT 5 IN THE MORNING." << endl;
                cout << "5.11-06-2021 AT 10 IN THE NOON." << endl;
                cout << "6.11-06-2021 AT 12 IN THE EVENING." << endl;
                cout << "7.11-06-2021 AT 2 IN THE EVENING." << endl;
                cout << "8.11-06-2021 AT 5 IN THE NOON." << endl;              //asking the user to enter choice
                cout << "9.12-06-2021 AT 10 IN THE EVENING." << endl;
                cout << "10.12-06-2021 AT 12 IN THE EVENING." << endl;
                cout << "11.12-06-2021 AT 2 IN THE EVENING." << endl;
                cout << "12.12-06-2021 AT 5 IN THE EVENING." << endl;
                cout << "13.EXIT.." << endl;
                cin >> opt1;               //taking input
                if (opt1 == 1) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 2) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 3) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 4) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 5) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 6) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 7) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 8) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 9) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 10) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 11) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 12) {
                    cout << "the time slot to " << Teams.departmentName << "is given " << endl;
                }
                if (opt1 == 13) {
                    cout << "YOU CHOOSE TO EXIT." << endl;
                }
            } else {
                cout << "ENTER TIME BETWEEN 10 TO 12 OF JULY." << endl;
                cin.ignore();
                getline(cin, time);
            }
        }
    }

    void pointsOfMatch() {
        int min;
        fstream File1;
        File1.open("startingMatchInfo", ios::app);
        if (!File1.is_open()) {
            cout << "Error while creating the file";
        } else {
            for (int i = 0; i < 7; i++) {
                cout << "ENTER TEAM NAME = ";
                cin >> teamsName[i];                                             //taking input
                File1 << teamsName[i];
                cout << "ENTER TEAM POINTS = ";
                cin >> points[i];                                                 //taking input
                File1 << points[i];
                cout << "THE " << teamsName[i] << " HAS SCORED " << points[i] << " IN QUARTER MATCH. " << endl;    //displaying
                File1 << "THE " << teamsName[i] << " HAS SCORED " << points[i] << " IN QUARTER MATCH. " << endl;
                min = points[0];
            }
            for (int i = 0; i < 7; i++) {
                if (points[i] > points[i + 1]) {
                    count = points[i] - points[i + 1];
                    cout << "THE " << teamsName[i] << " HAS WON THE MATCH BY " << count << endl;         //displaying
                    File1 << "THE " << teamsName[i] << " HAS WON THE MATCH BY " << count << endl;
                } else {
                    count = points[i + 1] - points[i];
                    cout << "THE " << teamsName[i + 1] << " HAS WON THE MATCH BY " << count << endl;        //displaying
                    File1 << "THE " << teamsName[i + 1] << " HAS WON THE MATCH BY " << count << endl;
                }
            }
            for (int i = 0; i < 7; i++) {
                if (points[i] < min) {
                    min = points[i];                                    //storing the value having smallest points
                    cout << "the team " << teamsName[i] << " having points " << min << "is out of the tournament"
                         << endl;
                    File1 << "the team " << teamsName[i] << " having points " << min << "is out of the tournament"
                         << endl;
                }
            }
            File1.close();                        //closing the file
        }
    }
    void pointsOfQuarter(){

        fstream File2;
        File2.open("QuarterMatchInfo", ios::app);
        if (!File2.is_open()) {
            cout << "Error while creating the file";
        } else {
            for(int i=0;i<6;i++){
                cout << "ENTER TEAM NAME = ";
                cin.ignore();                                                         //taking input
                cin >> teamsName[i];
                File2 << teamsName[i];
                cout << "ENTER TEAM POINTS = ";
                cin >> points[i];
                File2 << points[i];
                cout << "THE " << teamsName[i] << " HAS SCORED " << points[i] << " IN MATCH. " << endl;        //displaying
                File2 << "THE " << teamsName[i] << " HAS SCORED " << points[i] << " IN MATCH. " << endl;
            }
                if (points[0] > points[1]) {
                    cout << "THE TEAM " << teamsName[0] << " having points" << points[0] << " has won " << endl;
                    File2 << "THE TEAM " << teamsName[0] << " having points" << points[0] << " has won " << endl;       //displaying
                }
                else if (points[1] > points[0]) {
                    cout << "THE TEAM " << teamsName[1] << "having points" << points[1] << " has won " << endl;
                    File2 << "THE TEAM " << teamsName[1] << "having points" << points[1] << " has won " << endl;        //displaying
                }
                if (points[2] > points[3]) {                        //checking whose points are greater
                    cout << "THE TEAM " << teamsName[2] << " having points " << points[2] << " has won " << endl;
                    File2 << "THE TEAM " << teamsName[2] << " having points " << points[2] << " has won " << endl;      //displaying
                }
                else if (points[3] > points[2]) {
                    cout << "THE TEAM " << teamsName[3] << " having points" << points[3] << " has won " << endl;
                    File2 << "THE TEAM " << teamsName[3] << " having points" << points[3] << " has won " << endl;           //displaying
                }
                if (points[4] > points[5]) {
                    cout << "THE TEAM " << teamsName[4] << " having points " << points[4] << " has won " << endl;
                    File2 << "THE TEAM " << teamsName[4] << " having points " << points[4] << " has won " << endl;      //displaying
                }
                else if (points[5] > points[4]) {
                    cout << "THE TEAM " << teamsName[5] << " having points " << points[5] << " has won " << endl;
                    File2 << "THE TEAM " << teamsName[5] << " having points " << points[5] << " has won " << endl;      //displaying
                }
                File2.close();         //closing file
            }
    }

    void pointsOfMatchSemiFinal() {
        int min;
        fstream File1;
        File1.open("semiFinalMatchInfo", ios::app);
        if (!File1.is_open()) {
            cout << "Error while creating the file";
        } else {
            for (int i = 0; i < 3; i++) {
                cout << "ENTER TEAM NAME = ";
                cin.ignore();
                cin >> teamsName[i];                                     //taking input
                File1 << teamsName[i];
                cout << "ENTER TEAM POINTS = ";
                cin >> points[i];
                File1 << points[i];
                cout << "THE " << teamsName[i] << " HAS SCORED " << points[i] << " IN QUARTER MATCH. " << endl;
                File1 << "THE " << teamsName[i] << " HAS SCORED " << points[i] << " IN QUARTER MATCH. " << endl;        //displaying
                min = points[0];
            }
            for (int i = 0; i < 3; i++) {
                if (points[i] > points[i + 1]) {
                    count = points[i] - points[i + 1];
                    cout << "THE " << teamsName[i] << " HAS WON THE MATCH BY " << count << endl;
                    File1 << "THE " << teamsName[i] << " HAS WON THE MATCH BY " << count << endl;       //displaying
                } else {
                    count = points[i + 1] - points[i];
                    cout << "THE " << teamsName[i + 1] << " HAS WON THE MATCH BY " << count << endl;
                    File1 << "THE " << teamsName[i + 1] << " HAS WON THE MATCH BY " << count << endl;           //displaying
                }
            }
            for (int i = 0; i < 3; i++) {
                if (points[i] < min) {
                    min = points[i];             //storing min value
                    cout << "the team " << teamsName[i] << " having points " << min << "is out of the tournament"
                         << endl;
                    File1 << "the team " << teamsName[i] << " having points " << min << "is out of the tournament"
                          << endl;
                }
            }
            File1.close();
        }
    }
    void finalMatch(){
        for (int i = 0; i < 2; i++) {
            cout << "ENTER TEAM NAME = ";
            cin >> teamsName[i];                        //taking input
            cout << "ENTER TEAM POINTS = ";
            cin >> points[i];
            cout << "THE " << teamsName[i] << " HAS SCORED " << points[i] << " IN QUARTER MATCH. " << endl;
        }
        if (points[0] > points[1]) {           //checking whose points are greater
            cout << "THE TEAM " << teamsName[0] << " having points " << points[0] << " has won " << endl;
        }
        else if (points[1] > points[0]) {
            cout << "THE TEAM " << teamsName[1] << " having points " << points[1] << " has won " << endl;     //displaying
        }

    }
};


#endif //INC_2022_SPRING_CE_OOP_WEEK12_ASSIGNMENT12_BSCE21012_FUNCTIONS_H
