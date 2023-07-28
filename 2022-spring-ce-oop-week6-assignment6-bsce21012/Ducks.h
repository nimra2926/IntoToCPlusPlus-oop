//
// Created by Lenovo on 4/18/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK6_ASSIGNMENT6_BSCE21012_DUCKS_H
#define INC_2022_SPRING_CE_OOP_WEEK6_ASSIGNMENT6_BSCE21012_DUCKS_H

#include <iostream>

using namespace std;
class flyDuck{                                                                          //making a class of flyDuck
public:
    void flyB(){                                                                        //a public function of flyB
        cout<<"I HAVE WINGS,I CAN FLY"<<endl;
    }
};
class duck1 {                                                                       //making a class of name duck!
public:
    void quack1(){                                                                  //making quack function in duck1
        cout<<"I CAN TALK , QUACK QUACK "<<endl;
    }
    void swim1(){                                                                   //making a swim function in duck1
        cout<<"I CAN FLOAT "<<endl;
    }
    virtual void display1(){
    }                                                                           //making virtual function of display
};

class  MallardDuck1 :public duck1 ,public flyDuck{                       //inheriting multiple classes(duck1 and flyDuck)
public:
    void display1(){                                                        //making function of display
        cout<<"I LOOK LIKE MALLARDUCK "<<endl;
    }

};

class  RedHeadDuck1:public MallardDuck1{                                 //inheriting MallardDuck1
public:
    void display1(){                                                    //making function of display
        cout<<"I LOOK LIKE REDHEADDUCK "<<endl;
    }
};
class RubberDuck1:public RedHeadDuck1 {                                 //inheriting RedHeadDuck
public:
    void display1(){                                                        //making function of display
        cout<<"I LOOK LIKE RUBBERDUCK "<<endl;
    }
    void flyB(){
        cout<<"I HAVE WINGS , BUT I CAN'T FLY"<<endl;                    //an overriden function of flyB
    }

};
class DecoyDuck1:public RubberDuck1 {                                      //inheriting RubberDuck1
public:
    void display1(){                                                                     //making function of display
        cout<<"I LOOK LIKE DECOYDUCK "<<endl;
    }
    void flyB(){
        cout<<"I HAVE WINGS , BUT I CAN'T FLY"<<endl;                                    //a overriden function of flyB
    }
};
#endif //INC_2022_SPRING_CE_OOP_WEEK6_ASSIGNMENT6_BSCE21012_DUCKS_H
