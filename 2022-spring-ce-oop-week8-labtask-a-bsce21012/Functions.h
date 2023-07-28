//
// Created by Lenovo on 4/27/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK8_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK8_LABTASK_A_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class shape {                                                                     //created class of shape
protected:
    float s_area;
    double c_radius;
    float s_length;
    float s_width;                                                                      //declared protected members
    float t_base;
    float t_height;
    float c_height;
    float t_area;
    const double pie = 3.1416;
public:
    void calculateArea();                                                               //declared public members

    void display();

};

class circle : protected shape {                                                //inherited shape class
public:
    void calculateArea(double r);                                                    //declared public members

    void display(double r);

};

class square : protected shape {                                                        //inherited shape class
public:
    void calculateArea(float a);                                                             //declared public members

    void display();
};

class triangle : protected shape {                                                              //inherited shape class
public:
    float calculateArea(float b, float h);                                               //declared public members

    void display();
};

class shape1 {                                                                                //created class of shape1
protected:
    float s_area;
    double c_radius;
    float s_length;
    float s_width;                                                           //declared protected members
    float t_base;
    float t_height;
    float c_height;
    float t_area;
    const double pie = 3.1416;
public:
    void calculateArea();                                                                        //declared public members
};

class circle1 : public shape1 {                                             //inherited shape1 class
public:
    void calculateArea();                                                                       //declared public members
};

class square1 : public shape1 {                                                        //inherited shape1 class
public:
    void calculateArea();                                                                         //declared public members
};

class triangle1 : public shape1 {                                       //inherited shape1 class
public:
    float calculateArea();                                                                 //declared public members
};

class shape2 {                                                                   //created class of shape2
protected:
    float s_area;
    double c_radius;
    float s_length;
    float s_width;
    float t_base;                                                                    //declared protected members
    float t_height;
    float c_height;
    float t_area;
    const double pie = 3.1416;
public:
    virtual void calculateArea();                                                                       //declared public members
};

class circle2 : public shape2 {                                                 //inherited shape2 class
public:
    void calculateArea();                                                                         //declared public members
};

class square2 : public shape2 {                                                             //inherited shape2 class
public:
    void calculateArea();                                                                //declared public members
};

class triangle2 : public shape2 {                                                       //inherited shape2 class
public:
    void calculateArea();                                                          //declared public members
};

class shape3 {                                                               //created class of shape3
protected:
    float s_area;
    double c_radius;
    float s_length;
    float s_width;
    float t_base;
    float t_height;
    float c_height;
    float t_area;
    const double pie = 3.1416;
public:
    virtual void calculateArea() = 0;                                       //declared public members
};

class circle3 : public shape3 {                                         //inherited shape3 class
public:
    void calculateArea();                                       //declared public members
};

class square3 : public shape3 {                                     //inherited shape3 class
public:
    void calculateArea();                                                       //declared public members
};

class triangle3 : public shape3 {                                                       //inherited shape3 class
public:
    void calculateArea();                                                                       //declared public members
};

#endif //INC_2022_SPRING_CE_OOP_WEEK8_LABTASK_A_BSCE21012_FUNCTIONS_H
