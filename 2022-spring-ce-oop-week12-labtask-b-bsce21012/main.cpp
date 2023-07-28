#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

int main() {
    inr n1;
    inr n2;
    rationalNumber r(n1, n2);
    rationalNumber r1(n1, n2);
    rationalNumber r2;
    r2 = r + r1;
    r2 = r - r1;
    r2 = r * r1;
    r2 = r / r1;
    if ((r = r1)) {
        cout << "BOTH ARE EQUAL.." << endl;
    }
    else{
        cout<<"BOTH ARE NOT EQUAL.."<<endl;
    }


    return 0;
}
