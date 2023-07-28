#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
   int s ;
   customizedArray<int> c(5);                                                          //calling object
   c.add();
   c.display();
   c.expand();                                                                              //calling
   c.add();
   c.display();
    return 0;
}
