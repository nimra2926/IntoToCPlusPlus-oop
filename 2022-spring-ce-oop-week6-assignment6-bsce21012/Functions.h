//
// Created by Lenovo on 4/15/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK6_ASSIGNMENT6_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK6_ASSIGNMENT6_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class duckA {
public:
    void quackA();
     void flyA();                                                                               //declaring
    void swimA();
    virtual void displayA(){                                                       //making an virtual function of display to use abstract method
    }
};
class  MallardDuckA :public duckA{                                               //class inheriting duckA class
public:
    void displayA(){                                                            //making display function
        cout<<"I LOOK LIKE MALLARDUCK "<<endl;
    }

};
class  RedHeadDuckA:public MallardDuckA{                                    //class inheriting MallardDuckA class
public:
    void displayA(){                                                                //making display function
        cout<<"I LOOK LIKE REDHEADDUCK "<<endl;
    }

};
class RubberDuckA:public RedHeadDuckA{                                              //class inheriting RedHeadDuckA
public:
    void displayA(){                                                                //making display function
        cout<<"I LOOK LIKE RUBBERDUCK "<<endl;
    }

};

class DecoyDuckA:public RubberDuckA{                                              //class inheriting RubberDuckA class
public:
    void displayA(){                                                            //making display function
        cout<<"I LOOK LIKE DECOYDUCK "<<endl;
    }

};

class duck {                                                                        //creating another class of name duck
public:
    void quack();
    virtual void fly()=0;                                                           //pure virtual function of fly
    void swim();                                                                    //declaring
    virtual void display(){                                                         //virtual function of duck
    }
};
class  MallardDuck :public duck{                                                    //class inheriting duck class
public:
    void display(){
        cout<<"I LOOK LIKE MALLARDUCK "<<endl;                                              //making display function
    }
    void fly(){                                             //making fly function as we make its pure virtual function
        cout<<"I HAVE WINGS , I CAN FLY "<<endl;
    }
};
class  RedHeadDuck:public MallardDuck{                                          //class inheriting MallardDuck
public:
    void display(){
        cout<<"I LOOK LIKE REDHEADDUCK "<<endl;                                             //making display function
    }
    void  fly(){                                            //making fly function as we make its pure virtual function
        cout<<"I HAVE WINGS , I CAN FLY "<<endl;
    }
};
class RubberDuck:public RedHeadDuck{                                //class inheriting RedHeadDuck
public:
    void display(){
        cout<<"I LOOK LIKE RUBBERDUCK "<<endl;                                                      //making display function
    }
    void  fly(){                                                //making fly function as we make its pure virtual function
        cout<<"I HAVE WINGS , BUT I CAN'T FLY "<<endl;
    }
};

class DecoyDuck:public RubberDuck{                                      //class inheriting RubberDuck
public:
    void display(){                                                                 //making display function
        cout<<"I LOOK LIKE DECOYDUCK "<<endl;
    }
    void  fly(){                                            //making fly function as we make its pure virtual function
        cout<<"I HAVE WINGS , I CAN'T FLY "<<endl;
    }
};
//cout<<" -----------------------------------------------------------------------------------"<<endl;



#endif //INC_2022_SPRING_CE_OOP_WEEK6_ASSIGNMENT6_BSCE21012_FUNCTIONS_H
