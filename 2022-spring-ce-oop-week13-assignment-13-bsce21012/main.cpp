#include <iostream>
#include "Functions.h"
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
   
//    teams T1;
//    teams T("abc","aa","bb",1,1,2,1,3,23,03225453000,"2021","bsce21012@gmail.com","bsce21012",5,"batsman","computerians");
//    T.info();

//singleton *s=s->getInstance();
//cout<<s->getData();
//s->setData(7);
//cout<<s->getData();
singleton *s=s->getInstance();
cout<<s->getData();
int Data;
s->setData(Data);
    return 0;
}
