//#include <iostream>
//#include "Functions.h"
//
//using namespace std;
//
//int main() {
//    int age = 23;
//    int age2;
//    char *gender1;
//    char *name1;
//    char *education1;
//    char *language1;
//    person p;
//    person p1(23);
//    student s2;
//    student s1(2, 2.93);
//    student s3 = s1;
//    float Gpa;
//    int sem;
//    char *f;
//    int s;
//    char *R;
//    employee e;
//    employee E(20000);
//    teachingAssistant T(2, 2.0, 2345);
//    int opt;
//    do {
//        cout << "\nFROM WHICH CONSTRUCTOR DO YOU WANT TO CALL THE FUNCTIONS?" << endl;
//        cout << "1.CONSTRUCTOR.." << endl;
//        cout << "2.DEEP COPY CONSTRUCTOR.." << endl;
//        cout << "3.EXIT.." << endl;
//        cin >> opt;
//        switch (opt) {
//            case 1: {
//                p1.setAge(age2);
//                p1.getAge();
//                p1.setGender(gender1);
//                p1.getGender();
//                p1.setName(name1);
//                p1.getName();
//                p1.setEducation(education1);
//                p1.getEducation();
//                p1.setLanguage(language1);
//                p1.getLanguage();
//                p1.display();
//
//                s1.setGpa(Gpa);
//                s1.getGpa();
//                s1.setSemester(sem);
//                s1.getSemester();
//                s1.setField(f);
//                s1.getField();
//                s1.display();
//
//                E.setSalary(s);
//                E.getSalary();
//                E.setRank(f);
//                E.getRank();
//                E.display();
//
//                T.display();
//
//                break;
//            }
//            case 2: {
//                person p2 = p1;
//                p2.setAge(age2);
//                p2.getAge();
//                p2.setGender(gender1);
//                p2.getGender();
//                p2.setName(name1);
//                p2.getName();
//                p2.setEducation(education1);
//                p2.getEducation();
//                p2.setLanguage(language1);
//                p2.getLanguage();
//                p2.display();
//
//                student s3 = s1;
//                s3.setGpa(Gpa);
//                s3.getGpa();
//                s3.setSemester(sem);
//                s3.getSemester();
//                s3.setField(f);
//                s3.getField();
//                s3.display();
//
//                employee E1 = E;
//                E1.setSalary(s);
//                E1.getSalary();
//                E1.setRank(f);
//                E1.getRank();
//                E1.display();
//
//
//                break;
//            }
//            case 3: {
//                cout<<"YOU CHOOSE TO EXIT .."<<endl;
//                exit(3);
//                break;
//            }
//            default: {
//                cout<<"you have entered invalid arguments.."<<endl;
//                break;
//            }
//        }
//    }while(opt>=1 && opt<=3);
//    return 0;
//}

//#include<iostream>
//
//#define   SIZE   10
//
//using namespace std;
//
//int main() {
//    float a[SIZE][SIZE];
//    float b[SIZE];
//    float x[SIZE];
//    int i, j, k, n;
//
//    /* Setting precision and writing floating point values in fixed-point notation. */
//    cout << setprecision(3) << fixed;
//
//    /* Inputs */
//    /* 1. Reading number of unknowns */
//    cout << "Enter number of unknowns: ";
//    cin >> n;
//
//    /* 2. Reading Augmented Matrix */
//    cout << "Enter Coefficients of Augmented Matrix: " << endl;
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n + 1; j++) {
//            cout << "a[" << i << "]" << "[" << j << "]= ";
//            cin >> a[i][j];
//        }
//        b[i] = 0;  // initialize b[i] to 0
//    }
//    for (i = 0; i < n; i++) {
//        x[i] = 0;
//    }
//    double factor;
//    double sum;
//    for (k = 1; k <= n - 1; k++) {
//        for (i = k + 1; i <= n; i++) {
//            factor = a[i][k] / a[k][k];
//            for (j = k + 1; j <= n; j++) {
//                a[i][j] = a[i][j] - (factor * a[k][j]);
//            }
//            b[i] = b[i] - (factor * b[k]);
//        }
//    }
//    x[n] = b[n] / a[n][n];
//    for (int i = n - 1; i >= 1; i--) {
//        sum = b[i];
//        for (int j = i + 1; j <= n; j++) {
//            sum = sum - (a[i][j] * x[j]);
//        }
//        x[i] = sum / a[i][i];
//    }
//
//    /* Displaying Solution */
//    cout << endl << "Solution: " << endl;
//    for (i = 1; i <= n; i++) {
//        cout << "x[" << i << "] = " << x[i] << endl;
//    }
//
//    return (0);
//}
#include<iostream>
#include<iomanip>

#define   SIZE   10

using namespace std;

int main() {
    float a[SIZE][SIZE];
    float b[SIZE];
    float x[SIZE];
    int i, j, k, n;

    /* Setting precision and writing floating point values in fixed-point notation. */
    cout << setprecision(3) << fixed;

    /* Inputs */
    /* 1. Reading number of unknowns */
    cout << "Enter number of unknowns: ";
    cin >> n;

    /* 2. Reading Augmented Matrix */
    cout << "Enter Coefficients of Augmented Matrix: " << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1; j++) {
            cout << "a[" << i << "]" << "[" << j << "]= ";
            cin >> a[i][j];
        }
        b[i] = a[i][n+1];  // assign the last column of a to b
    }

    for (i = 0; i < n; i++) {
        x[i] = 0;
    }

    double factor;
    double sum;
    for (k = 1; k <= n - 1; k++) {
        for (i = k + 1; i <= n; i++) {
            factor = a[i][k] / a[k][k];
            for (j = k + 1; j <= n; j++) {
                a[i][j] = a[i][j] - (factor * a[k][j]);
            }
            b[i] = b[i] - (factor * b[k]);
        }
    }

    x[n] = b[n] / a[n][n];
    for (int i = n - 1; i >= 1; i--) {
        sum = b[i];
        for (int j = i + 1; j <= n; j++) {
            sum = sum - (a[i][j] * x[j]);
        }
        x[i] = sum / a[i][i];
    }

    /* Displaying Solution */
    cout << endl << "Solution: " << endl;
    for (i = 1; i <= n; i++) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return (0);
}