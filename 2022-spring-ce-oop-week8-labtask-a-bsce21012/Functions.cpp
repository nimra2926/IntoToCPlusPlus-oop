//
// Created by Lenovo on 4/27/2022.
//
#include <iostream>
#include "Functions.h"

using namespace std;

void shape::calculateArea() {                                                   //function of shape class
    cout << "PARENT CLASS IS GENERIC" << endl;                                              //displaying
}

void shape::display() {                                                                  //function of shape class
    cout << "NAME : NIMRA MAQOOL" << endl;
    cout << "ROLL NUMBER : BSCE21012" << endl;                                              //displaying
}

void circle::calculateArea(double r) {                                               //function of circle class
    cout << "ENTER RADIUS = ";
    cin >> r;                                                                       //taking input
    c_radius = r;
    double area;                                                                    //declaring
    area = (pie * ((c_radius) * (c_radius)));                                       //calculating
    s_area = area;
    cout << "AREA = " << s_area << endl;                                        //displaying
}

void circle::display(double r) {                                                        //function of circle class
    cout << "ENTER RADIUS = ";
    cin >> r;                                                                                   //taking input
    c_radius = r;
    double area;                                                                                    //initializing
    area = (pie * ((c_radius) * (c_radius)));                                               //calculating
    s_area = area;
    cout << "AREA OF CIRCLE = " << s_area << endl;                                              //displaying
}

void square::calculateArea(float a) {                                              //function of square class
    cout << "ENTER A = ";
    cin >> a;                                                                               //taking input
    s_length = a;
    s_width = a;
    float area;                                                                             //declaring
    area = s_width * s_length;                                                                  //calculating
    s_area = area;
    cout << "AREA OF SQUARE = " << s_area << endl;                                              //displaying
}

void square::display() {                                                                //function of square class
    float a;
    cout << "ENTER LENGTH (as length is equal to width) = ";
    cin >> a;                                                           //taking input
    s_length = a;
    s_width = a;
    float area;                                                                      //initializing
    area = s_width * s_length;                                                  //calculating
    s_area = area;
    cout << "AREA OF SQUARE = " << s_area << endl;                                              //displaying
}

float triangle::calculateArea(float b, float h) {                                       //function of triangle class
    cout << "ENTER HEIGHT = ";
    cin >> h;
    t_height = h;
    cout << "ENTER BASE = ";
    cin >> b;                                                           //taking input
    t_base = b;
    float area;
    float area1;                                                                        //declaring
    area = (t_height * t_base);                                                             //calculating
    area1 = (area) * 1 / 2;
    t_area = area1;
    cout << "AREA OF TRIANGLE = " << t_area << endl;                                    //displaying
    return t_area;
}

void triangle::display() {                                                  //function of triangle class
    float b;
    float h;
    cout << "DISPLAY IS CALLED.." << endl;
    cout << "ENTER HEIGHT = ";
    cin >> h;                                                       //taking input
    t_height = h;
    cout << "ENTER BASE = ";
    cin >> b;                                                       //taking input
    t_base = b;
    float area;
    float area1;                                                        //declaring
    area = (t_height * t_base);
    area1 = (area) * 1 / 2;                                                             //calculating
    t_area = area1;
    cout << "AREA OF TRIANGLE = " << t_area << endl;                                        //displaying
}

void shape1::calculateArea() {                                      //function of shape1 class
    cout << "PARENT CLASS IS GENERIC" << endl;
    cout << "NAME : NIMRA MAQBOOL" << endl;                                         //displaying
    cout << "ROLL NUMBER : BSCE21012 " << endl;
}

void circle1::calculateArea() {                                                    //function of circle1 class
    double x;
    cout << "ENTER RADIUS = ";
    cin >> x;                                                           //taking input
    c_radius = x;
    double Area;                                                                                //declaring
    Area = (pie * ((c_radius) * (c_radius)));                                               //calculating
    s_area = Area;
    cout << "AREA = " << s_area << endl;                                        //displaying
}

void square1::calculateArea() {                                     //function of square1 class
    float A;
    cout << "ENTER A = ";
    cin >> A;                                                                                       //taking input
    s_length = A;
    s_width = A;
    float area;                                                                                 //declaring
    area = s_width * s_length;                                              //calculating
    s_area = area;
    cout << "AREA OF SQUARE = " << s_area << endl;                                              //displaying
}

float triangle1::calculateArea() {                                                  //function of triangle1 class
    float b;
    float h;
    cout << "ENTER HEIGHT = ";
    cin >> h;                                                                                   //taking input
    t_height = h;
    cout << "ENTER BASE = ";
    cin >> b;                                                                           //taking input
    t_base = b;
    float area;
    float area1;                                                                //declaring
    area = (t_height * t_base);                                                 //calculating
    area1 = (area) * 1 / 2;
    t_area = area1;
    cout << "AREA OF TRIANGLE = " << t_area << endl;                                    //displaying
    return t_area;
}

void shape2::calculateArea() {                                          //function of shape2 class
    cout << "PARENT CLASS IS GENERIC" << endl;
    cout << "NAME : NIMRA MAQBOOL" << endl;
    cout << "ROLL NUMBER : BSCE21012 " << endl;                                     //displaying
}

void circle2::calculateArea() {                                             //function of circle2 class
    double x;
    cout << "ENTER RADIUS = ";
    cin >> x;                                                                           //taking input
    c_radius = x;
    double Area;                                                //declaring
    Area = (pie * ((c_radius) * (c_radius)));                                                   //calculating
    s_area = Area;
    cout << "AREA = " << s_area << endl;                                            //displaying
}

void square2::calculateArea() {                                             //function of square2 class
    float A;
    cout << "ENTER A = ";
    cin >> A;                                                                                   //taking input
    s_length = A;
    s_width = A;
    float area;                                                                             //declaring
    area = s_width * s_length;                                                  //calculating
    s_area = area;
    cout << "AREA OF SQUARE = " << s_area << endl;                                                  //displaying
}

void triangle2::calculateArea() {                                               //function of triangle2 class
    float b;
    float h;
    cout << "ENTER HEIGHT = ";
    cin >> h;                                                                       //taking input
    t_height = h;
    cout << "ENTER BASE = ";
    cin >> b;                                                                   //taking input
    t_base = b;
    float area;
    float area1;                                                            //declaring
    area = (t_height * t_base);                                                 //calculating
    area1 = (area) * 1 / 2;
    t_area = area1;
    cout << "AREA OF TRIANGLE = " << t_area << endl;                                    //displaying
}

void circle3::calculateArea() {                                           //function of circle3 class
    double x;
    cout << "ENTER RADIUS = ";
    cin >> x;                                                                           //taking input
    c_radius = x;
    double Area;                                                                //declaring
    Area = (pie * ((c_radius) * (c_radius)));                                           //calculating
    s_area = Area;
    cout << "AREA = " << s_area << endl;                                //displaying
}

void square3::calculateArea() {                                     //function of square3 class
    float A;
    cout << "ENTER A = ";
    cin >> A;                                                                                   //taking input
    s_length = A;
    s_width = A;
    float area;                                                                 //declaring
    area = s_width * s_length;                                                          //calculating
    s_area = area;
    cout << "AREA OF SQUARE = " << s_area << endl;                                  //displaying
}

void triangle3::calculateArea() {                                       //function of triangle3 class
    float b;
    float h;
    cout << "ENTER HEIGHT = ";
    cin >> h;                                                                                   //taking input
    t_height = h;
    cout << "ENTER BASE = ";
    cin >> b;                                                                                   //taking input
    t_base = b;
    float area;
    float area1;                                                                                //declaring
    area = (t_height * t_base);                                                         //calculating
    area1 = (area) * 1 / 2;
    t_area = area1;
    cout << "AREA OF TRIANGLE = " << t_area << endl;                                        //displaying

}