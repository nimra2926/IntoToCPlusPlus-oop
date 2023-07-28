#include <iostream>
#include "Complex.h"
#include <string>

using namespace std;

int main() {
    double r;
    double imag;                                                                //declaring
    Complex D;                                                                                  //makimg object
    int opt;
    do {
        cout << "TASK 1 OR TASK 2?" << endl;
        cout << "1.TASK 1" << endl;                                 //taking choice
        cout << "2.TASK 2" << endl;
        cout << "3.exit.." << endl;
        cin >> opt;
        if (opt == 1) {
            do {
                cout << "WHICH TASK ?" << endl;
                cout << "1.SUBTRACTION." << endl;
                cout << "2.ADDITION." << endl;                                              //taking choice
                cout << "3.MULTIPLICATION." << endl;
                cout << "4.EXIT.." << endl;
                cin >> opt;
                if (opt == 1) {
                    Complex c1;                                                 //making object
                    Complex C(r, imag);                                     //calling parametrized constructor
                    Complex C1(r, imag);
                    c1.subComplexNumber(C, C1);                                     //calling function
                }
                if (opt == 2) {
                    Complex d;                                                  //making object
                    Complex C(r, imag);
                    Complex C1(r, imag);                                              //calling parametrized constructor
                    d.addComplexNumber(C, C1);                                  //calling function
                }
                if (opt == 3) {
                    Complex c;
                    Complex C(r, imag);
                    Complex C1(r, imag);                                        //calling parametrized constructor
                    c.multiplyComplexNumber(C, C1);                         //calling function
                }
                if (opt == 4) {
                    cout << "YOU CHOOSE TO EXIT.." << endl;                             //exiting
                    exit(4);
                }
            } while (opt >= 1 && opt <= 4);
        }
        if (opt == 2) {
            CarHelper H;                                                    //making an object
            H.display();                                                    //calling function

        }
        if (opt == 3) {
            cout << "YOU CHOOSE TO EXIT.." << endl;                                 //exiting
            exit(4);
        }
    } while (opt >= 1 && opt <= 3);                                 //condition for do while
    return 0;
}
