#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    do {
        cout << "WHICH TASK DO YOU WANT TO PERFORM?" << endl;
        cout << "1.TASK 1." << endl;
        cout << "2.APPEND." << endl;
        cout << "3.PREPEND." << endl;
        cout << "4.ADD TO INDEX." << endl;
        cout << "5.DELETE ELEMENT FROM FIRST INDEX." << endl;
        cout << "6.DELETE ELEMENT FROM LAST INDEX." << endl;
        cout << "7.DELETE ELEMENT FROM SPECIFIC INDEX." << endl;
        cout << "8.EXIT.." << endl;
        cin >> opt;
        if (opt == 1) {
            customizedArray<int> c(5);                                                          //calling object
            c.add();
            c.display();
            c.expand();                                                                              //calling
            c.add();
            c.display();
        }
        if (opt == 2) {
            customizedArray<int> c(5);                                                          //calling object
            c.add();
            c.display();
            c.expand();                                                                              //calling
            c.add();
            c.display();
            c.append();
            c.add();
            c.display();
        }
        if (opt == 3) {
            customizedArray<int> c(5);                                                          //calling object
            c.add();
            c.display();
            c.expand();                                                                              //calling
            c.add();
            c.display();
            c.prepend();
            c.display();
        }
        if (opt == 4) {
            customizedArray<int> c(5);                                                          //calling object
            c.add();
            c.display();
            c.expand();                                                                              //calling
            c.add();
            c.display();
            c.addToIndex();
            c.display();
        }
        if (opt == 5) {
            customizedArray<int> c(5);                                                          //calling object
            c.add();
            c.display();
            c.expand();                                                                              //calling
            c.add();
            c.display();
            c.deleteAnElement();
            c.display();
        }
        if (opt == 6) {
            customizedArray<int> c(5);                                                          //calling object
            c.add();
            c.display();
            c.expand();                                                                              //calling
            c.add();
            c.display();
            c.deleteAnElementFromLast();
            c.display();
        }
        if (opt == 7) {
            customizedArray<int> c(5);                                                          //calling object
            c.add();
            c.display();
            c.expand();                                                                              //calling
            c.add();
            c.display();
            c.deleteAnElementFromSpecificIndex();
            c.display();
        }
        if (opt == 8) {
            cout << "YOU CHOOSE TO EXIT..." << endl;
            exit(3);
        }
    } while (opt >= 1 && opt <= 8);                                         //condition for exit
    return 0;
}
