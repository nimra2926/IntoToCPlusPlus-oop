#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    do {
        cout << endl;
        cout << "1.CALL SHAPE CLASS." << endl;
        cout << "2.CALL SPHERE CLASS." << endl;                                     //displaying options
        cout << "3.CALL CONE CLASS." << endl;
        cout << "4.EXIT." << endl;
        cin >> opt;                                                               //taking input
        if (opt == 1) {
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
            Shapes s2(3.14, 0, 0, 0);                           //calling parametrized constructor
            cout << endl;
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
        }
        else if (opt == 2) {
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
            Shapes *S;                                                                      //making pointer object
            sphere sp;                                                              //making object
            float Volume;
            float SurfaceArea;
            float Pi;                                                                   //declaring
            float r;
            sphere S2(Pi, r, Volume,
                      SurfaceArea);                                      //calling parametrized constructor
            S = &sp;                                                            //storing the address in the object
            S->setSurfaceArea(r);                                          //calling functions
            S->setVolume(r);
            S->getSurfaceArea();
            S->getVolume();
            S->display();
            cout << endl;
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
        }
        else if (opt == 3) {
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
            sphere *sp;                                                                  //making pointer object
            cone c;                                                     //making object
            float s1;
            float h1;
            float S;                                                    //declaring object
            float H;
            cone c1(s1, h1);
            sp = &c;                                                        //storing address
            sp->setSurfaceArea(S);
            sp->setVolume(H);                                               //calling
            sp->getVolume();
            sp->getSurfaceArea();
            sp->display();
            cout << endl;
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
        }
        else if (opt == 4) {
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
            cout << "CHOOSE TO EXIT.." << endl;                                         //displaying
            cout << endl;
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
            exit(3);
        }
        else{
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
            cout<<"YOU HAVE ENTERED INVALID ARGUMENT.."<<endl;
            exit(4);
            cout << endl;
            cout << "-----------------------------------------------------------------------------" << endl;
            cout << endl;
        }
    } while (opt >= 1 && opt <= 4);                                         //condition for do while loop that if opt is greater than 4 or less than 1 then exit it
    return 0;
}
