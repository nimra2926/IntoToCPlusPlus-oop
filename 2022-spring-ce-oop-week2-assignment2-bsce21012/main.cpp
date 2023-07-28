#include <iostream>
#include "Functions.h"
#include <fstream>
#include <string>

using namespace std;

int main() {
    int input;
    int size;
    int count;
    string fileName;
    cout << "please enter file name" << endl;
    getline(cin, fileName);
    int *evenNumbers = new int[size];
    evenNumbers = findEven(fileName, input, size, count);
    findEven(fileName, input, size, count);
    char *ptr;
    int size;
    int countOfPairs;
    string fileName;
    cout << "please enter file name" << endl;
    getline(cin, fileName);
    read(fileName, size, countOfPairs, ptr);
    return 0;
}
