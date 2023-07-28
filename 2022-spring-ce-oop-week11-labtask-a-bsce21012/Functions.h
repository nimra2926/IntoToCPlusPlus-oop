//
// Created by Lenovo on 5/25/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK11_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK11_LABTASK_A_BSCE21012_FUNCTIONS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class Student {
protected:
    string name;
    string rollNumber;
    string fatherName;
    int age;
    int subjects;
    string email;                                                               //declaring
    string gender;
    long int phoneNumber;
    int semester;
    float cgpa;
    float creditHoursOfCurrentSemester;
    string address;
    int quizzesAmount;
    int assignmentAmount;
    float MarksInAssignment;
    float MarksInQuizzes;
    float MarksInMid;
    float MarksInFinal;
    float retakeMidMarks;
    int totalMarksOfQuiz;
    int totalMarksOfAssignment;
    int totalMarksOfMid;
    int totalMarksOfFinal;
    int totalMarksOfRetake;
public:
    Student() {
        name = " ";
        age = 0;
        rollNumber = " ";
        fatherName = " ";
        subjects = 0;                                           //setting them to zero in default parameter
        email = " ";
        gender = " ";
        phoneNumber = 00;
        semester = 0;
        cgpa = 0.00;
        creditHoursOfCurrentSemester = 0.00;
        address = " ";
        quizzesAmount=0;
        assignmentAmount=0;
        MarksInAssignment=0.00;
        MarksInFinal=0.00;
        MarksInMid=0.00;
        MarksInQuizzes=0.00;
        retakeMidMarks=0.00;
        totalMarksOfAssignment=0;
        totalMarksOfFinal=0;
        totalMarksOfMid=0;
        totalMarksOfQuiz=0;
        totalMarksOfRetake=0;
    }

    Student(string N, string Address, int Age, string RN, string fN, int subj, string Email, string Gender,
            long int Pn, int Semester, float Cgpa, float cHOfCSemester,int qA,int aA,float MInAssig,float MInQuiz,float MInFinal,float MInMid,float rTMidMarks,int tMOfAssig,int tMOfQuiz,int tMOfMid,int tMOfFinal,int tMOfRetake) {
        name = N;
        age = Age;
        rollNumber = RN;
        fatherName = fN;
        subjects = subj;
        email = Email;
        gender = Gender;
        phoneNumber = Pn;
        semester = Semester;                                            //setting the values in parametrized constructor
        cgpa = Cgpa;
        creditHoursOfCurrentSemester = cHOfCSemester;
        address = Address;
        quizzesAmount=qA;
        assignmentAmount=aA;
        MarksInAssignment=MInAssig;
        MarksInFinal=MInFinal;
        MarksInMid=MInMid;
        MarksInQuizzes=MInQuiz;
        retakeMidMarks=rTMidMarks;
        totalMarksOfAssignment=tMOfAssig;
        totalMarksOfQuiz=tMOfQuiz;
        totalMarksOfFinal=tMOfFinal;
        totalMarksOfMid=tMOfMid;
        totalMarksOfRetake=tMOfRetake;
    }

    void getStudentInfo() {
        cout << "Enter Name : ";
        cin.ignore();
        getline(cin, name);                                             //taking name
        cout << "Enter Age = ";
        cin >> age;                                                     //taking age
        cout << "Enter gender : ";
        cin.ignore();                                                   //taking personal info from the user
        getline(cin, gender);
        cout << "Enter Father name : ";
        getline(cin, fatherName);
        cout << "Enter Phone Number = ";
        cin >> phoneNumber;
        cout << "Enter email : ";
        cin.ignore();
        getline(cin, email);
        cout << "Enter address : ";
        getline(cin, address);
    }

    void getAcademicInfo() {
        cout << "Enter roll number : ";
        cin.ignore();
        getline(cin, rollNumber);                                               //taking roll number
        cout << "How many subjects are you studying in this semester = ";
        cin >> subjects;
        cout << "Enter current semester = ";                            //taking academic info from the user
        cin >> semester;
        cout << "Enter cgpa = ";
        cin >> cgpa;
        cout << "Enter number of credit hours = ";
        cin >> creditHoursOfCurrentSemester;                                        //taking credit hours
    }
    void getMarksInfo(){
        int opt;
        cout<<"Enter total number Of Quizzes = ";
        cin>>quizzesAmount;                                         //taking marks info from the user
        cout<<"Enter number Of Assignment = ";
        cin>>assignmentAmount;
        cout<<"ENTER TOTAL MARKS OF QUIZ = ";
        cin>>totalMarksOfQuiz;
        cout<<"ENTER TOTAL MARKS OF ASSIGNMENT = ";
        cin>>totalMarksOfAssignment;
        cout<<"ENTER TOTAL MARKS OF MID = ";
        cin>>totalMarksOfMid;
        cout<<"ENTER TOTAL MARKS OF RETAKE MID = ";
        cin>>totalMarksOfRetake;
        cout<<"ENTER TOTAL MARKS OF FINAL EXAM = ";
        cin>>totalMarksOfFinal;
        cout<<"Enter quiz marks = ";
        for(int i=0;i<quizzesAmount;i++){
            cin>>MarksInQuizzes;                                    //taking marks of the quiz in loop
            if(MarksInQuizzes>totalMarksOfQuiz){
                cout<<"you have entered invalid number.."<<endl;
                cout<<"OBTAIN MARKS CAN NOT BE GRATER THAN TOTAL MARKS.."<<endl;                 //after checking that the obtain marks is not greater than total marks exiting
                exit(2);
            }
        }
        cout<<"Enter assignment marks = ";
        for(int i=0;i<assignmentAmount;i++){
            cin>>MarksInAssignment;                                     //taking assignment marks
            if(MarksInAssignment>totalMarksOfAssignment){
                cout<<"you have entered invalid number.."<<endl;
                cout<<"OBTAIN MARKS CAN NOT BE GRATER THAN TOTAL MARKS.."<<endl;
                exit(2);
            }
        }
        cout<<"Enter Mid Exam marks = ";
        cin>>MarksInMid;                                            //taking mid marks
        if(MarksInMid>totalMarksOfMid){
            cout<<"you have entered invalid number.."<<endl;
            cout<<"OBTAIN MARKS CAN NOT BE GRATER THAN TOTAL MARKS.."<<endl;
            exit(2);
        }
        cout<<"Enter Final Exam marks = ";
        cin>>MarksInFinal;                                              //taking final marks
        if(MarksInFinal>totalMarksOfFinal){
            cout<<"you have entered invalid number.."<<endl;
            cout<<"OBTAIN MARKS CAN NOT BE GRATER THAN TOTAL MARKS.."<<endl;
            exit(2);
        }
        cout<<"WAS THERE ANY RETAKE MID?"<<endl;
        cout<<"1.yes."<<endl;
        cout<<"2.no."<<endl;                                                //checking that if the retake is taken or not
        cin>>opt;
        if(opt==1){
            cout<<"Enter Retake Mid Exam marks = ";
            cin>>retakeMidMarks;
            if(retakeMidMarks>totalMarksOfRetake){
                cout<<"you have entered invalid number.."<<endl;
                cout<<"OBTAIN MARKS CAN NOT BE GRATER THAN TOTAL MARKS.."<<endl;
                exit(2);
            }
        }
        if(opt==2){
            cout<<"THERE WASN'T ANY RETAKE MID EXAM.."<<endl;
        }
    }
    void displayMarksInfo(){
        fstream File;
        File.open("studentMarksInfo.txt", ios::app);
        if (File.is_open()) {
            for(int i=0;i<quizzesAmount;i++){
                File<<"quiz marks "<<MarksInQuizzes<<setw(20)<<"out of"<<setw(10)<<totalMarksOfQuiz<<setw(20);
            }               //storing in file
            cout<<endl;
            for(int i=0;i<quizzesAmount;i++){
                File<<"quiz marks "<<MarksInQuizzes<<setw(20)<<"out of "<<setw(10)<<totalMarksOfAssignment<<setw(20);
            }
            cout<<endl;
            File<<"MID EXAM MARKS = "<<MarksInMid<<setw(20)<<"out of"<<setw(10)<<totalMarksOfMid<<endl;
            File<<"RETAKE MID EXAM = "<<retakeMidMarks<<setw(20)<<"out of"<<setw(10)<<totalMarksOfRetake<<endl;
            if(retakeMidMarks>MarksInMid){
                File<<"FINAL MID TERM EXAM MARKS = "<<retakeMidMarks<<setw(20)<<"out of"<<setw(10)<<totalMarksOfRetake<<endl;
            }
            else{
                File<<"MID EXAM MARKS = "<<MarksInMid<<setw(20)<<"out of"<<setw(10)<<totalMarksOfMid<<endl;
            }
                File<<"FINAL EXAM MARKS = "<<MarksInFinal<<setw(20)<<"out of"<<setw(10)<<totalMarksOfFinal<<endl;
        }
        else{
            cout<<"FILE IS NOT OPEN.. "<<endl;
        }
        File.close();
    }


    void displayStudentPersonalInfo() {
        fstream file;
        file.open("studentPersonalInfo.txt", ios::app);
        if (file.is_open()) {
            file << "Name : " << name << setw(10) << "Age = " << age << setw(10) << endl;
            file << "Father name : " << fatherName << setw(10) << "Email : " << email << setw(10) << endl;
            file << "Gender : " << gender << setw(10) << " Phone Number = " << phoneNumber << setw(10) << endl;
            file << "Address = " << address << setw(10) << endl;                //storing in file
            file << "------------------------------------------------------------------------------------" << endl;
        } else {
            cout << "FILE IS NOT OPEN.." << endl;
        }
        file.close();

    }

    void displayAcademicInfo() {
        fstream file1;
        file1.open("studentAcademicInfo.txt", ios::app);
        if (file1.is_open()) {
            file1 << "Roll number : " << rollNumber << setw(10) << "Number Of Subjects In Current Semester= " << subjects
                  << setw(10) << endl;                                              //storing in file
            file1 << "Current semester = " << semester << setw(10) << "cgpa = " << cgpa << setw(10) << endl;
            file1 << "credit hours of current semester = " << creditHoursOfCurrentSemester << setw(10) << endl;
            file1 << "------------------------------------------------------------------------------------" << endl;
        } else {
            cout << "FILE IS NOT OPEN.." << endl;
        }
        file1.close();
    }
};

class universityManagementSystem {
private:
    int numberOfStudentsInClass;                                                //declaring

public:
    Student S;                                                              //making object

    universityManagementSystem() {
        numberOfStudentsInClass = 0;                                                //setting the value to zero
    }

    universityManagementSystem(int numberOfStudent) {
        numberOfStudentsInClass = numberOfStudent;                                          //equaling
    }

    void displayPersonalInfoOfStudent() {
        cout<<"ENTER NUMBER OF STUDENTS = ";
        cin >> numberOfStudentsInClass;
        for (int i = 0; i < numberOfStudentsInClass; i++) {                                         //loop at number of students
            S.getStudentInfo();                                                                     //calling functions
            S.displayStudentPersonalInfo();
        }
    }

    void displayAcademicInfoOfStudent() {
        cout<<"ENTER NUMBER OF STUDENTS = ";
        cin >> numberOfStudentsInClass;
        for (int i = 0; i < numberOfStudentsInClass; i++) {
            S.getAcademicInfo();                                                    //calling functions
            S.displayAcademicInfo();
        }
    }
    void displayMarksInfo(){
        cout<<"ENTER NUMBER OF STUDENTS = ";
        cin>>numberOfStudentsInClass;
        for (int i = 0; i < numberOfStudentsInClass; i++) {
            S.getMarksInfo();                                                   //calling functions
            S.displayMarksInfo();
        }
    }

};


#endif //INC_2022_SPRING_CE_OOP_WEEK11_LABTASK_A_BSCE21012_FUNCTIONS_H
