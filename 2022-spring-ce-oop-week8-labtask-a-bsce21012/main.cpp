#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;                                                //declaring
    do {
        cout << "WHICH TASK DO YOU WANT TO PERFORM ?" << endl;
        cout << "1.TASK 1" << endl;
        cout << "2.TASK 2" << endl;                                         //taking options
        cout << "3.TASK 3" << endl;
        cout << "4.EXIT." << endl;
        cin >> opt;
        switch (opt) {
            case (1): {
                int opt1;                                                               //declaring
                cout << "YOU WANT TO CALCULATE OR DISPLAY?" << endl;
                cout << "1.CALCULATE." << endl;
                cout << "2.DISPLAY." << endl;                                           //taking option from user
                cout << "3.EXIT." << endl;
                cin >> opt1;
                if (opt1 == 1) {
                    int opt2;                                                           //declaring
                    do {
                        cout << "OF WHICH SHAPE DO YOU WANT TO CALCULATE?" << endl;
                        cout << "1.SHAPE ITSELF." << endl;
                        cout << "2.CIRCLE." << endl;                                                    //taking option
                        cout << "3.SQUARE." << endl;
                        cout << "4.TRIANGLE." << endl;
                        cout << "5.EXIT." << endl;
                        cin >> opt2;
                        if (opt2 == 1) {
                            shape s;                                                        //making object
                            s.calculateArea();                                          //calling
                        }
                        if (opt2 == 2) {
                            circle c;                                           //making object
                            double r;                                               //declaring
                            c.calculateArea(r);                                                 //calling
                        }
                        if (opt2 == 3) {
                            square s1;                                                  //making object
                            int a;                                              //declaring
                            s1.calculateArea(a);                                            //calling
                        }
                        if (opt2 == 4) {
                            triangle t;                                 //making object
                            float b;
                            float h;                                            //declaring
                            t.calculateArea(b, h);                                  //calling
                        }
                        if (opt2 == 5) {
                            cout << "YOU CHOOSE TO EXIT.." << endl;                             //displaying
                            exit(4);
                        }
                    } while (opt2 >= 1 && opt2 <= 5);                                    //condition to end do while
                }
                if (opt1 == 2) {
                    int opt3;                                                                               //declaring
                    do {
                        cout << "WHICH ONE DO YOU WANT TO DISPLAY?" << endl;
                        cout << "1.SHAPE ITSELF." << endl;
                        cout << "2.CIRCLE." << endl;                                        //taking choice
                        cout << "3.SQUARE." << endl;
                        cout << "4.TRIANGLE." << endl;
                        cout << "5.EXIT." << endl;
                        cin >> opt3;
                        if (opt3 == 1) {
                            shape s;                                                    //making object
                            s.display();                                            //calling
                        }
                        if (opt3 == 2) {
                            circle c;                                                 //making object
                            double r;                                                       //declaring
                            c.display(r);                                                   //calling
                        }
                        if (opt3 == 3) {
                            square s1;                                                  //making object
                            s1.display();                                                   //calling
                        }
                        if (opt3 == 4) {
                            triangle t;                                             //making object
                            t.display();                                            //calling
                        }
                        if (opt3 == 5) {
                            cout << "YOU CHOOSE TO EXIT.." << endl;                                         //displaying
                            exit(4);
                        }

                    } while (opt3 >= 1 && opt3 <= 5);                                                //condition to end do while
                }
                if (opt == 3) {
                    cout << "YOU CHOOSE TO EXIT.." << endl;
                    exit(4);
                }

                break;
            }
            case (2): {
                int opt5;                                                               //declaring
                do {
                    cout << "OF WHICH DO YOU WANT TO CALCULATE ?" << endl;
                    cout << "1..CIRCLE." << endl;                           //taking option from user
                    cout << "2.SQUARE." << endl;
                    cout << "3.TRIANGLE." << endl;
                    cout << "4.EXIT." << endl;
                    cin >> opt5;
                    if (opt5 == 1) {
                        shape1 *Shape;                                                          //making pointer option
                        circle1 C;
                        Shape = &C;                                                                 //storing its address
                        Shape->calculateArea();                                                          //calling
                    }
                    if (opt5 == 2) {
                        shape1 *Shape;                                                          //making pointer option
                        square1 S;
                        Shape = &S;                                                                     //storing its address
                        Shape->calculateArea();                                                          //calling
                    }
                    if (opt5 == 3) { ;
                        shape1 *Shape;                                                      //making pointer option
                        triangle1 T;
                        Shape = &T;                                                         //storing its address
                        Shape->calculateArea();                                                  //calling
                    }
                    if (opt5 == 4) {
                        cout << "YOU CHOOSE TO EXIT.." << endl;
                        exit(2);
                    }
                } while (opt >= 1 && opt <= 4);                                                      //condition to end do while
            }
            case (3): {
                int opt4;                                                           //declaring
                do {
                    cout << "HOW TO DO WANT TO PERFORM?" << endl;
                    cout << "1.VIRTUAL." << endl;
                    cout << "2.PURE VIRTUAL." << endl;
                    cout << "3.EXIT." << endl;                                                  //taking options from user
                    cin >> opt4;
                    if (opt4 == 1) {
                        shape2 *bptr;                                                               //making pointer option
                        circle2 Circle;                                         //making object
                        bptr = &Circle;                                         //storing its address
                        bptr->calculateArea();                                           //calling
                        cout << "-----------------------------------------" << endl;
                        shape2 *Shape;                                                          //making pointer option
                        square2 S;                                              //making object
                        Shape = &S;                                             //storing its address
                        Shape->calculateArea();                                          //calling
                        cout << "-----------------------------------------" << endl;
                        shape2 *Shape3;                                                                     //making pointer option
                        triangle2 T;                                                            //making object
                        Shape3 = &T;                                                    //storing its address
                        Shape3->calculateArea();                                                             //calling
                    }
                    if (opt4 == 2) {
                        shape3 *bptr;                                                   //making pointer option
                        circle3 Circle;                                                     //making object
                        bptr = &Circle;                                                     //storing its address
                        bptr->calculateArea();                                                                   //calling
                        cout << "-----------------------------------------" << endl;
                        shape3 *Shape;                                                              //making pointer option
                        square3 S;                                                                      //making object
                        Shape = &S;                                                             //storing its address
                        Shape->calculateArea();                                                                  //calling
                        cout << "-----------------------------------------" << endl;
                        shape3 *Shape4;                                                 //making pointer option
                        triangle3 T;                                                //making object
                        Shape4 = &T;                                                        //storing its address
                        Shape4->calculateArea();                                                    //calling
                    }
                    if (opt4 == 3) {
                        cout << "YOU CHOOSE TO EXIT.." << endl;                                 //displaying
                        exit(3);
                    }
                } while (opt4 >= 1 && opt4 <= 3);
            }
            case (4): {
                cout << "YOU CHOOSE TO EXIT.." << endl;                                             //displaying
                break;
            }
            default: {
                cout << "YOU HAVE ENTERED INVALID ARGUMENTS .." << endl;                                //displaying
                break;
            }
        }
    } while (opt >= 1 && opt <= 3);                                 //condition to end do while

    return 0;
}
