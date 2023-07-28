#include "Functions.h"
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int *findEven(string fileName, int input, int size, int count) {
    fstream myFile;
    myFile.open(fileName);
    if (!myFile.is_open()) {
        cout << "the file is not open ";
    } else {
        myFile >> input;
        cout << "THE SIZE OF ARRAY = " << input << endl;
        int *array = new int[input];
        int *even = new int[input];

        for (int i = 0; i < input; i++) {
            myFile >> array[i];
        }
        for (int i = 0; i < input; i++) {
            if (array[i] % 2 == 0) {
                count++;
            }
        }
        cout << "count =" << count << endl;
        cout << "EVEN ARRAY is= ";
        int j = 0;
        for (int i = 0; i < input; i++) {
            if (array[i] % 2 == 0) {
                even[j] = array[i];
                cout << even[j] << " ";
                j++;
            }
        }
        myFile.close();
        delete[]array;
        return even;
    }
}

char *read(string fileName, int &size, int &countOfPairs, char *ptr) {
    string line;
    size = 1;
    int count = 0;
    ifstream file;
    file.open(fileName);
    if (!file.is_open()) {
        cout << "the file is not open" << endl;
    } else {
        getline(file, line);
        size = line.size();
        cout << "size =" << size << endl;
        int j = 0;
        for (int i = 0; i < size; i++) {
            if (line[i] == line[i + 1]) {
                countOfPairs++;
            }
        }
        cout << "countOfPairs = " << countOfPairs++ << endl;
        char *sameCharacter = new char[countOfPairs];
//        int j=0;
        for (int i = 0; i < size;) {
            if (line[i] == line[i + 1]) {
                sameCharacter[j] = line[i];
                sameCharacter[j + 1] = line[i];
                cout << sameCharacter[j] << sameCharacter[j + 1] << " ";

                i++;
                j += 2;
            } else {
                i++;
            }
        }
        return sameCharacter;
    }
}