#include "Functions.h"
#include <iostream>
#include <fstream>

using namespace std;

void oddRightTriangle(int &num, fstream &myFile) {
    myFile.open("shapesTask1.txt", ios::out);
    int j = 0;
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 1 IS :" << endl;
        for (int i = 1; i <= num; i++) {
            for (j = 0; j < i; j++)
                if (i % 2 == 1) {
                    cout << i;
                    myFile << i;
                }
            for (int k = 0; k <= j; k++) {
                if (i % 2 == 0) {

                    cout << "#";
                    myFile << "#";
                }
            }

            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();

}

void oddRightTriangle1(int &rows, fstream &myFile, ifstream &files) {
    myFile.open("shapesTask1.txt", ios::app);
    int j = 0;
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 1 IS :" << endl;
        for (int i = 1; i <= rows; i++) {
            for (j = 0; j < i; j++)
                if (i % 2 == 1) {
                    cout << i;
                    myFile << i;
                }
            for (int k = 0; k <= j; k++) {
                if (i % 2 == 0) {

                    cout << "#";
                    myFile << "#";
                }
            }

            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void invertedRight(int &num, fstream &myFile) {
    myFile.open("shapesTask1.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 2 IS :" << endl;
        for (int j = 1; j <= num; j++) {
            for (int i = num; i >= j; i--) {
                if (j % 3 == 1) {
                    cout << "#";
                    myFile << "#";
                }
                if (j % 3 == 2) {
                    cout << i;
                    myFile << i;
                }
                if (j % 3 == 0) {
                    cout << "$";
                    myFile << "$";
                }
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();

}

void invertedRight1(int &rows, fstream &myFile, ifstream &files) {
    myFile.open("shapesTask1.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 2 IS :" << endl;
        for (int j = 1; j <= rows; j++) {
            for (int i = rows; i >= j; i--) {
                if (j % 3 == 1) {
                    cout << "#";
                    myFile << "#";
                }
                if (j % 3 == 2) {
                    cout << i;
                    myFile << i;
                }
                if (j % 3 == 0) {
                    cout << "$";
                    myFile << "$";
                }
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();

}

void evenRightTriangle(int &num, fstream &myFile) {
    int d;
    int i;
    int j;
    int num1 = 2;
    myFile.open("shapesTask1.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 3 IS :" << endl;
        for (i = 1; i <= num; i++) {
            if (i % 2 == 1) {
                for (j = 1; j <= num - i; j++) {
                    cout << " ";
                    myFile << " ";
                }
                d = num1;

                for (j = 1; j <= i; j++) {
                    cout << num1;
                    myFile << num1;
                }
                num1 += 2;
            }
            if (i % 2 == 0) {
                for (j = 1; j <= num - i; j++) {
                    cout << " ";
                    myFile << " ";
                }
                d = i;
                for (j = 1; j <= i; j++) {
                    cout << "#";
                    myFile << "#";
                }
            }

            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void evenRightTriangle1(int &rows, fstream &myFile, ifstream &files) {
    int d;
    int i;
    int j;
    int num1 = 2;
    myFile.open("shapesTask1.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 3 IS :" << endl;
        for (i = 1; i <= rows; i++) {
            if (i % 2 == 1) {
                for (j = 1; j <= rows - i; j++) {
                    cout << " ";
                    myFile << " ";
                }
                d = num1;

                for (j = 1; j <= i; j++) {
                    cout << num1;
                    myFile << num1;
                }
                num1 += 2;
            }
            if (i % 2 == 0) {
                for (j = 1; j <= rows - i; j++) {
                    cout << " ";
                    myFile << " ";
                }
                d = i;
                for (j = 1; j <= i; j++) {
                    cout << "#";
                    myFile << "#";
                }
            }

            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void printZero(int &num, fstream &myFile) {
    int j;
    int d;
    myFile.open("shapesTask1.txt", ios::app);

    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 4 IS :" << endl;
        for (int i = num; i > 0; i--) {
            for (j = 1; j <= i; j++) {
                cout << "1";
                myFile << "1";
            }

            d = num;
            for (j = 1; j <= num - i; j++) {
                cout << "0";
                myFile << "0";
            }

            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void printZero1(int &rows, fstream &myFile, ifstream &files) {
    int j;
    int d;
    myFile.open("shapesTask1.txt", ios::app);

    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 4 IS :" << endl;
        for (int i = rows; i > 0; i--) {
            for (j = 1; j <= i; j++) {
                cout << "1";
                myFile << "1";
            }

            d = rows;
            for (j = 1; j <= rows - i; j++) {
                cout << "0";
                myFile << "0";
            }

            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void printChars(int &num, fstream &myFile) {
    int j;
    int d;
    myFile.open("shapesTask1.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 5 IS :" << endl;
        for (int i = num; i > 0; i--) {
            for (j = 0; j <= num - i; j++) {
                cout << "#";
                myFile << "#";
            }
            d = num;

            for (j = 1; j <= i; j++) {
                cout << "$";
                myFile << "$";
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void printChars1(int &rows, fstream &myFile, ifstream &files) {
    int j;
    int d;
    myFile.open("shapesTask1.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 5 IS :" << endl;
        for (int i = rows; i > 0; i--) {
            for (j = 0; j <= rows - i; j++) {
                cout << "#";
                myFile << "#";
            }
            d = rows;

            for (j = 1; j <= i; j++) {
                cout << "$";
                myFile << "$";
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void printCharOfTwoTypes(int &num, fstream &myFile) {
    int j;
    int d;
    myFile.open("shapesTask1.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 6 IS :" << endl;
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "#";
                myFile << "#";
            }
            cout << "$";
            myFile << "$";

            for (int k = i; k <= num; k++) {
                cout << "#";
                myFile << "#";
            }
            cout << endl;
            myFile << endl;

        }
    }
    myFile << endl;
    myFile.close();
}

void printCharOfTwoTypes1(int &rows, fstream &myFile, ifstream &files) {
    int j;
    int d;
    myFile.open("shapesTask1.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 6 IS :" << endl;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "#";
                myFile << "#";
            }
            cout << "$";
            myFile << "$";

            for (int k = i; k < rows; k++) {
                cout << "#";
                myFile << "#";
            }
            cout << endl;
            myFile << endl;

        }
    }
    myFile << endl;
    myFile.close();
}

void rightAngle(int &size, fstream &myFile) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 7 IS :" << endl;
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
                myFile << j;
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void rightAngle1(int &rows, fstream &myFile, ifstream &files) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 7 IS :" << endl;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
                myFile << j;
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void invertedRightTriangle(int &size, fstream &myFile) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 8 IS :" << endl;
        for (int j = size; j >= 1; j--) {
            for (int i = 1; i <= j; i++) {
                cout << i;
                myFile << i;
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void invertedRightTriangle1(int &rows, fstream &myFile, ifstream &files) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 8 IS :" << endl;
        for (int j = rows; j >= 1; j--) {
            for (int i = 1; i <= j; i++) {
                cout << i;
                myFile << i;
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void rightHollowTriangle(int &size, fstream &myFile) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 9 IS :" << endl;
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= i; j++) {
                if (i == size) {
                    cout << j;
                    myFile << j;
                } else {
                    if (j == 1 || j == i) {
                        cout << j;
                        myFile << j;
                    } else {
                        cout << " ";
                        myFile << " ";
                    }
                }
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void rightHollowTriangle1(int &rows, fstream &myFile, ifstream &files) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 9 IS :" << endl;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                if (i == rows) {
                    cout << j;
                    myFile << j;
                } else {
                    if (j == 1 || j == i) {
                        cout << j;
                        myFile << j;
                    } else {
                        cout << " ";
                        myFile << " ";
                    }
                }
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void CompleteTriangle(int &size, fstream &myFile) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 10 IS :" << endl;
        int num = 0;
        int num1 = 0;
        int k = 0;
        int i = 0;
        while (i < size) {
            i++;
            for (int j = 1; j <= size - i; j++) {
                cout << "  ";
                myFile << " ";
                num++;
            }
            for (k = 0; k != 2 * i - 1; k++) {
                if (num <= size - 1) {
                    cout << (i + k) << " ";
                    myFile << (i + k) << " ";
                    num++;
                } else {
                    num1++;
                    cout << ((i + k) - (2 * num1)) << " ";
                    myFile << ((i + k) - (2 * num1)) << " ";
                }
            }
            cout << endl;
            myFile << endl;
            num1 = num = k = 0;
        }
    }
    myFile << endl;
    myFile.close();
}

void CompleteTriangle1(int &rows, fstream &myFile, ifstream &files) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 10 IS :" << endl;
        int num = 0;
        int num1 = 0;
        int k = 0;
        int i = 0;
        while (i < rows) {
            i++;
            for (int j = 1; j <= rows - i; j++) {
                cout << "  ";
                myFile << " ";
                num++;
            }
            for (k = 0; k != 2 * i - 1; k++) {
                if (num <= rows - 1) {
                    cout << (i + k) << " ";
                    myFile << (i + k) << " ";
                    num++;
                } else {
                    num1++;
                    cout << ((i + k) - (2 * num1)) << " ";
                    myFile << ((i + k) - (2 * num1)) << " ";
                }
            }
            cout << endl;
            myFile << endl;
            num1 = num = k = 0;
        }
    }
    myFile << endl;
    myFile.close();
}


void hollowCompleteTriangle(int &size, fstream &myFile) {
    int num = size;
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 11 IS :" << endl;
        for (int i = 0; i <= size; i++) {
            for (int j = 0; j < num; j++) {
                cout << " ";
                myFile << " ";
            }
            num--;
            for (int k = 1; k <= i; k++) {
                if (k == 1 || k == i || k == size || i == size) {
                    cout << k << " ";
                    myFile << k << " ";
                } else {
                    cout << "  ";
                    myFile << " ";
                }
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void hollowCompleteTriangle1(int &rows, fstream &myFile, ifstream &files) {
    int num = rows;
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 11 IS :" << endl;
        for (int i = 0; i <= rows; i++) {
            for (int j = 0; j < rows; j++) {
                cout << " ";
                myFile << " ";
            }
            num--;
            for (int k = 1; k <= i; k++) {
                if (k == 1 || k == i || k == rows || i == rows) {
                    cout << k << " ";
                    myFile << k << " ";
                } else {
                    cout << "  ";
                    myFile << " ";
                }
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void invertedRightTriangleHollow(int &size, fstream &myFile) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 12 IS :" << endl;
        for (int i = size; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << size - i + j;
                myFile << size - i + j;
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void invertedRightTriangleHollow1(int &rows, fstream &myFile, ifstream &files) {
    myFile.open("shapesTask2.txt", ios::app);
    if (!myFile.is_open()) {
        cout << "the file you are trying to open is not open" << endl;
        myFile << "the file you are trying to open is not open" << endl;
    } else {
        myFile << "TASK 12 IS :" << endl;
        for (int i = rows; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << rows - i + j;
                myFile << rows - i + j;
            }
            cout << endl;
            myFile << endl;
        }
    }
    myFile << endl;
    myFile.close();
}

void menuTask1() {
    int opt;
    int num;
    fstream myFile;
    cout << "please enter number of rows =";
    cin >> num;
    do {
        cout << "TASK 1" << endl;
        cout << "1.ODD RIGHT ANGLE " << endl;
        cout << "2.INVERTED " << endl;
        cout << "3.EVEN RIGHT ANGLE" << endl;
        cout << "4.PRINT ZERO" << endl;
        cout << "5.PRINT CHAR" << endl;
        cout << "6.PRINT CHAR OF TWO TYPES" << endl;
        cout << "7.EXIT" << endl;
        cin >> opt;
        switch (opt) {
            case 1: {
                oddRightTriangle(num, myFile);
                break;
            }
            case 2: {

                invertedRight(num, myFile);
                break;
            }
            case 3: {

                evenRightTriangle(num, myFile);
                break;

            }
            case 4: {

                printZero(num, myFile);
                break;

            }
            case 5: {

                printChars(num, myFile);
                break;

            }
            case 6: {

                printCharOfTwoTypes(num, myFile);
                break;

            }
            case 7: {
                cout << "you choose to exit" << endl;
                exit(7);
                break;

            }
            default: {
                cout << "you have entered invalid input" << endl;
                break;

            }

        }
    } while (opt >= 1 && opt <= 7);

}

void menuTask2() {
    int opt1;
    int size;
    cout << "please enter size =" << endl;
    cin >> size;
    fstream myFile;
    do {
        cout << "TASK 2" << endl;
        cout << "1. RIGHT ANGLE " << endl;
        cout << "2.INVERTED RIGHT ANGLE " << endl;
        cout << "3.HOLLOW RIGHT ANGLE" << endl;
        cout << "4.COMPLETE TRIANGLE" << endl;
        cout << "5.HOLLOW COMPLETE" << endl;
        cout << "6.INVERTED" << endl;
        cout << "7.EXIT" << endl;
        cin >> opt1;

        switch (opt1) {
            case 1: {

                rightAngle(size, myFile);
                break;
            }
            case 2: {

                invertedRightTriangle(size, myFile);
                break;
            }
            case 3: {

                rightHollowTriangle(size, myFile);
                break;

            }
            case 4: {

                CompleteTriangle(size, myFile);
                break;

            }
            case 5: {

                hollowCompleteTriangle(size, myFile);
                break;

            }
            case 6: {

                invertedRightTriangleHollow(size, myFile);
                break;

            }
            case 7: {
                cout << "you choose to exit" << endl;
                exit(0);
                break;

            }
            default: {
                cout << "you have entered invalid input" << endl;
                break;

            }
        }
    } while (opt1 >= 1 && opt1 <= 7);
}

void menuForFile1() {
    int opt;
    fstream myFile;
    int num;
    fstream file;
    file.open("shapesTask1.txt");
    if (!file.is_open()) {
        cout << "file is not open";
    } else {
        do {
            file >> num;
            cout << "TASK 1" << endl;
            cout << "1.ODD RIGHT ANGLE " << endl;
            cout << "2.INVERTED " << endl;
            cout << "3.EVEN RIGHT ANGLE" << endl;
            cout << "4.PRINT ZERO" << endl;
            cout << "5.PRINT CHAR" << endl;
            cout << "6.PRINT CHAR OF TWO TYPES" << endl;
            cout << "7.EXIT" << endl;
            cin >> opt;
            switch (opt) {
                case 1: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    oddRightTriangle1(rows, myFile, files);
                    break;
                }
                case 2: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    invertedRight1(rows, myFile, files);
                    break;
                }
                case 3: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    evenRightTriangle1(rows, myFile, files);
                    break;

                }
                case 4: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    printZero1(rows, myFile, files);
                    break;

                }
                case 5: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    printChars1(rows, myFile, files);
                    break;

                }
                case 6: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    printCharOfTwoTypes1(rows, myFile, files);
                    break;

                }
                case 7: {
                    cout << "you choose to exit" << endl;
                    exit(0);
                    break;

                }
                default: {
                    cout << "you have entered invalid input" << endl;
                    break;

                }

            }
        } while (opt >= 1 && opt <= 7);
    }
}

void menuForFile2() {
    int opt1;
    fstream myFile;
    fstream file1;
    int size;
    file1.open("shapesTask2.txt");
    if (!file1.is_open()) {
        cout << "file is not open";
    } else {
        file1 >> size;
        do {
            cout << "TASK 2" << endl;
            cout << "1. RIGHT ANGLE " << endl;
            cout << "2.INVERTED RIGHT ANGLE " << endl;
            cout << "3.HOLLOW RIGHT ANGLE" << endl;
            cout << "4.COMPLETE TRIANGLE" << endl;
            cout << "5.HOLLOW COMPLETE" << endl;
            cout << "6.INVERTED" << endl;
            cout << "7.EXIT" << endl;
            cin >> opt1;
            switch (opt1) {
                case 1: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    rightAngle1(rows, myFile, files);
                    break;
                }
                case 2: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    invertedRightTriangle1(rows, myFile, files);
                    break;
                }
                case 3: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    rightHollowTriangle1(rows, myFile, files);
                    break;

                }
                case 4: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    CompleteTriangle1(rows, myFile, files);
                    break;

                }
                case 5: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    hollowCompleteTriangle1(rows, myFile, files);
                    break;

                }
                case 6: {
                    int rows;
                    ifstream files;
                    files.open("input.txt");
                    files >> rows;
                    files.close();
                    invertedRightTriangleHollow1(rows, myFile, files);
                    break;

                }
                case 7: {
                    cout << "you choose to exit" << endl;
                    exit(0);
                    break;

                }
                default: {
                    cout << "you have entered invalid input" << endl;
                    break;

                }
            }
        } while (opt1 >= 1 && opt1 <= 7);
    }
}