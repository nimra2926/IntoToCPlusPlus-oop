#include <iostream>
#include "Functions.h"
#include "class1.h"
using namespace std;

int main() {
    int opt;
    do {
        cout << "\nwhich task do you want to perform ?" << endl;
        cout << "1.task 1." << endl;
        cout << "2.task 2." << endl;
        cout << "3.exit" << endl;
        cin >> opt;
        if (opt == 1) {
            double w;                                                               //initializing
            Box b(w);                                                               //calling the parametric constructor
            Box();                                                                  //calling default constructor
            printWidth(b);                                                      //printing width
        }
        if (opt == 2) {
            int a1;                                                                //initializing a and b
            int a;
            classA A(a1);                                                          //calling the class a
            classB B;                                                               //making an object
            B.showA(A);                                                         //calling function show
        }
        if (opt == 3) {
            cout << "YOU CHOOSE TO EXIT" << endl;
            exit(6);
        }
    }while(opt>=1 && opt<=3);

    return 0;
}
