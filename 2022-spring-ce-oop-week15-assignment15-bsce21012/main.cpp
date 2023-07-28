#include <iostream>
#include "Functions.h"
using namespace std;

int main() {

    scene *S;
    scene s1(2);
    landscape L;
    landscape L1(2.34);
    L1.render();
    flightSimulator F=new flightSimulator(&s1);
    s1.draw();
    mountainScene S3;
    S=&S3;
    S->draw();

    return 0;
}
