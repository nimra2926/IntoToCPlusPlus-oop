#include <iostream>
#include "Functions.h"
#include "Ducks.h"

using namespace std;

int main() {
    int opt;                                                                            //declaring
    do {
        cout << "WHICH TASK DO YOU WANT TO PERFORM?" << endl;
        cout << "1.TASK 1." << endl;                                                    //asking for the choice from user
        cout << "2.TASK 2." << endl;
        cout << "3.TASK 3." << endl;
        cout << "4.EXIT." << endl;
        cin >> opt;                                                                     //taking input
        if (opt == 1) {

            cout << "-------------------------------------------------------------------------" << endl;
            duckA *a;                                                                   //making an pointer obj
            MallardDuckA z;                                                             //making an object
            a = &z;                                                                     //taking it equal to the object
            a->displayA();                                                              //pointing to the function
            z.quackA();                                                                 //calling
            z.swimA();
            z.flyA();
            cout << "-------------------------------------------------------------------------" << endl;
            RedHeadDuckA Z;                                                                     //making an object
            a = &Z;                                                                             //taking it equal to the object
            a->displayA();                                                                      //pointing to the function
            Z.quackA();
            Z.swimA();                                                                              //calling
            Z.flyA();
            cout << "------------------------------------------------------------------------" << endl;
        }
       if(opt==2){
           cout << "-------------------------------------------------------------------------" << endl;
           duckA *a;                                                                   //making an pointer obj
           MallardDuckA z;                                                             //making an object
           a = &z;                                                                     //taking it equal to the object
           a->displayA();                                                              //pointing to the function
           z.quackA();                                                                 //calling
           z.swimA();
           z.flyA();
           cout << "-------------------------------------------------------------------------" << endl;
           RedHeadDuckA Z;                                                                     //making an object
           a = &Z;                                                                             //taking it equal to the object
           a->displayA();                                                                      //pointing to the function
           Z.quackA();
           Z.swimA();                                                                              //calling
           Z.flyA();
           cout << "------------------------------------------------------------------------" << endl;
           RubberDuckA t;                                                                      //making an object
           a = &t;                                                                             //taking it equal to the object
           a->displayA();                                                                      //pointing to the function
           t.quackA();
           t.swimA();
           t.flyA();                                                                     //calling
           cout << "------------------------------------------------------------------------" << endl;
           DecoyDuckA T;                                                                               //making an object
           a = &T;                                                                         //taking it equal to the object
           a->displayA();                                                                              //pointing to the function
           T.quackA();
           T.swimA();
           T.flyA();                                                                               //calling
           cout << "-----------------------------------------------------------------------" << endl;
       }

        if (opt == 3) {
            int opt1;                                                                               //declaring
            cout << "I HAVE PERFORMED TASK 2 FROM 2 METHODS " << endl;
            cout << "FROM WHICH METHOD DO YOU WANT TO PERFORM IT?" << endl;
            cout << "1.METHOD 1" << endl;                                                   //asking for the choice from user
            cout << "2.METHOD 2" << endl;
            cout << "3.EXIT" << endl;
            cin >> opt1;                                                                    //taking input
            if (opt1 == 1) {
                cout << "-------------------------------------------------------------------------" << endl;
                duck1 *f;                                                                   //making an pointer obj
                MallardDuck1 M;                                                                     //making an object
                f = &M;                                                                      //taking it equal to the object
                f->display1();                                                          //pointing to the function
                M.swim1();
                M.quack1();                                                                     //calling
                M.flyB();
                cout << "--------------------------------------------------------------------------" << endl;
                RedHeadDuck1 R;                                                                 //making an object
                f = &R;                                                                     //taking it equal to the object
                f->display1();                                                                      //pointing to the function
                R.swim1();                                                                  //calling
                R.quack1();
                R.flyB();
                cout << "--------------------------------------------------------------------------" << endl;
                RubberDuck1 E;                                                              //making an object
                f = &E;                                                                 //taking it equal to the object
                f->display1();                                                              //pointing to the function
                E.swim1();
                E.quack1();
                E.flyB();                                                                   //calling
                cout << "--------------------------------------------------------------------------" << endl;
                DecoyDuck1 g;                                                           //making an object
                f = &g;                                                                 //taking it equal to the object
                f->display1();                                                  //pointing to the function
                g.swim1();                                                                  //calling
                g.quack1();
                g.flyB();
                cout << "--------------------------------------------------------------------------" << endl;

            }
            if (opt1 == 2) {
                cout << "-----------------------------------------------------------------------------" << endl;
                duck *c;                                                                            //making an pointer obj
                MallardDuck m;                                                                      //making an obj
                c = &m;                                                                             //taking it equal to the object
                c->display();                                                                       //pointing to the function
                m.quack();                                                                      //calling
                m.swim();
                m.fly();
                cout << "------------------------------------------------------------------------" << endl;
                RedHeadDuck d;                                                              //making an object
                c = &d;                                                                          //taking it equal to the object
                c->display();                                                                           //pointing to the function
                d.swim();
                d.quack();                                                                      //calling
                d.fly();
                cout << "------------------------------------------------------------------------" << endl;
                RubberDuck r;                                                                    //making an object
                c = &r;                                                                         //taking it equal to the object
                c->display();                                                                        //pointing to the function
                r.swim();
                r.quack();                                                                          //calling
                r.fly();
                cout << "------------------------------------------------------------------------" << endl;
                DecoyDuck D;                                                                    //making an object
                c = &D;                                                                         //taking it equal to the object
                c->display();                                                                       //pointing to the function
                D.swim();
                D.quack();                                                                          //calling
                D.fly();
                cout << "-----------------------------------------------------------------------------" << endl;
            }
            if (opt1 == 3) {
                cout << "YOU CHOOSE TO EXIT .." << endl;
                exit(5);
            }
        }
        if (opt == 4) {
            cout << "YOU CHOOSE TO EXIT .." << endl;
            exit(5);
        }
    }while(opt>=1 && opt<=4);

    return 0;
}
