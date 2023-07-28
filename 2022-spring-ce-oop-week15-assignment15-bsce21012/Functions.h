//
// Created by Lenovo on 6/22/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK15_ASSIGNMENT15_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK15_ASSIGNMENT15_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class scene {
private:
    int captureData;
public:
    virtual void draw() = 0;

    scene() {
        captureData = 0;
    }

    scene(int Cd) {
        captureData = Cd;
    }
};
class cityScene:public scene{
public:
    void draw(){
        cout<<"DRAW FUNCTION IS CALLED.."<<endl;
    }
};
class landscape {
private:
    double area;
public:
    landscape() {
        area = 00.0;
    }

    landscape(double Area) {
        area = Area;
    }

    void render() {
        cout << "RENDER IS CALLED..." << endl;
    };
};

class flightSimulator  {
private:
    scene *S;
public:
    flightSimulator(scene *S) {
        this->S = S;
    }
    void draw(){
        cout<<"DRAWING SCENES."<<endl;
    }
};

class mountainScene : public scene {
public:
    landscape Landscape;

    void draw() {
        Landscape.render();
    }
};

#endif //INC_2022_SPRING_CE_OOP_WEEK15_ASSIGNMENT15_BSCE21012_FUNCTIONS_H
