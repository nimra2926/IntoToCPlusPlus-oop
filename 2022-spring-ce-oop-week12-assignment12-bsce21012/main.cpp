#include <iostream>
#include "Functions.h"
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int opt;                                                              //declaring
    QuarterMatch Q;
    QuarterMatch Q1("20-10-10 at 5", 2, 4, 6);
    do {
        cout << "CHOOSE ANY OPTION." << endl;
        cout << "1.INFO OF PLAYERS ?" << endl;
        cout << "2.SET MATCH TIMING?" << endl;
        cout << "3.STARTING MATCH." << endl;
        cout << "4.QUARTER MATCH." << endl;
        cout << "5.SEMIFINAL MATCH." << endl;
        cout << "6.FINAL MATCH." << endl;
        cout << "7.EXIT." << endl;
        cin>>opt;
        if (opt == 1) {
            teams T;                                        //making object
            teams T1("itu", "ali", "talha", 3, 4, 3, 4, 11, 34, 0322545, "bsce-17", "bsce21017@itu.edu.pk", "bsce21010",
                     15,
                     "batsman");
            T1.info();
        }
        if (opt == 2) {
            Q1.matchTiming();
        }
        if (opt == 3) {
            Q1.pointsOfMatch();

        }
        if (opt == 4) {
            Q1.pointsOfQuarter();

        }
        if (opt == 5) {
            Q1.pointsOfMatchSemiFinal();

        }
        if (opt == 6) {
            Q1.finalMatch();
        }
        if (opt == 7) {
            cout << "YOU CHOOSE TO EXIT.." << endl;
            exit(3);
        }
    }while(opt>=1 && opt<=7);


    return 0;
}
