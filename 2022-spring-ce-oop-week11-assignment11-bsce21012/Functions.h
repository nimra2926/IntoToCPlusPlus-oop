//
// Created by Lenovo on 5/26/2022.
//

#ifndef INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT11_BSCE21012_FUNCTIONS_H
#define INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT11_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class Shapes {
private:
    float surfaceArea;
    float volume;                                                                   //declaring variables(private members)
    float pi;
    float R;
public:
    Shapes() {
        cout << "DEFAULT CONSTRUCTOR OF SHAPES.." << endl;
        surfaceArea = 0.00;                                                      //setting values in default constructor
        volume = 0.00;
        pi = 0.00;
        R = 0.00;
    }

    Shapes(float Pi, float r, float Volume, float SurfaceArea) {
        cout<<"PARAMETRIZED CONSTRUCTOR OF SHAPES IS CALLED.."<<endl;
        pi = Pi;
        R = r;
        volume = Volume;                                                 //setting values in parametrized constructor
        surfaceArea = SurfaceArea;
    }

    virtual void setVolume(float r) {
        const float Pi = 3.14;                                                  //copying values
        pi = Pi;
        cout << "ENTER VALUE OF R FOR VOLUME = ";
        cin >> r;                                                   //taking input
        R = r;
    }

    virtual float getVolume() {
        return volume;                                                              //getting surface area
    }

    virtual float getSurfaceArea() {
        return surfaceArea;                                                 //getting surface area
    }

    virtual void setSurfaceArea(float r) {
        const float Pi = 3.14;
        pi = Pi;                                                                                        //copying
        cout << "ENTER VALUE OF R FOR SURFACE AREA = ";                                              //taking input
        cin >> r;
        R = r;
    }

    virtual void display() {
        cout << "SURFACE AREA = " << surfaceArea << endl;
        cout << "VOLUME = " << volume << endl;                                              //displaying
    }

    ~Shapes() {
        cout << "destructor of shapes is called.." << endl;                         //making destructor
    }

};

class sphere : public Shapes {
protected:
    float surfaceArea;                                                              //declaring protected data members
    float volume;
    float pi;
    float R;
public:
    sphere() {
        cout << "DEFAULT CONSTRUCTOR OF SPHERE.." << endl;
        surfaceArea = 0.00;                                                 //setting values in default constructor
        volume = 0.00;
        pi = 0.00;
        R = 0.00;
    }

    sphere(float Pi, float r, float Volume, float SurfaceArea) {
        cout<<"PARAMETRIZED CONSTRUCTOR OF SPHERE IS CALLED.."<<endl;
        pi = Pi;
        R = r;
        volume = Volume;                                                    //copying values in parametrized constructor
        surfaceArea = SurfaceArea;
    }

    virtual void setVolume(float r) {
        const float Pi = 3.14;                                                      //copying
        pi = Pi;
        cout << "ENTER VALUE OF R FOR VOLUME = ";
        cin >> r;                                                            //taking input
        R = r;
        float v;
        v = (4 / 3 * (Pi * (R * R * R)));                                               //calculating volume
        volume = v;                                                             //copying
    }

    virtual void setSurfaceArea(float r) {
        const float Pi = 3.14;
        pi = Pi;                                                                //copying
        cout << "ENTER VALUE OF R FOR SURFACE AREA= ";
        cin >> r;                                                                    //taking input
        R = r;
        float sA;
        sA = 4 * Pi * R * 22;                                                               //calculating surface area
        surfaceArea = sA;                                                   //copying
    }

    virtual float getVolume() {
        return volume;                                                  //getting surface area
    }

    virtual float getSurfaceArea() {
        return surfaceArea;                                                     //getting volume
    }

    virtual void display() {
        cout << "SURFACE AREA = " << surfaceArea << endl;                        //displaying surface area and volume
        cout << "VOLUME = " << volume << endl;
    }

    ~sphere() {
        cout << "destructor of sphere is called.." << endl;                     //calling destructor
    }
};

class cone : public sphere {
private:
    float s;
    float h;
public:
    cone() {
        cout<<"DEFAULT CONSTRUCTOR OF CONE IS CALLED.."<<endl;
        s = 0.00;
        h = 0.00;                                                   //making default constructor and setting values to zero
    }

    cone(float s1, float h1) {
        cout<<"PARAMETRIZED CONSTRUCTOR OF CONE IS CALLED.."<<endl;
        s = s1;
        h = h1;                                                         //copying values in parametrized constructor
    }

    void setSurfaceArea(float S) {
        float r;
        const float Pi = 3.14;
        pi = Pi;                                                                //copying
        cout << "ENTER VALUE OF R FOR SURFACE AREA = ";
        cin >> r;                                                                        //taking input
        R = r;                                                                              //copying
        cout << "ENTER S FOR SURFACE AREA= ";
        cin >> S;                                                                                //taking input
        s = S;                                                                          //copying
        float SA;
        SA = (pi * R * s + pi * R * R);                                      //calculating surface area
        surfaceArea = SA;                                                               //copying
    }

    void setVolume(float H) {
        float r;
        cout << "ENTER H FOR VOLUME = ";
        cin >> H;                                                                    //taking input
        h = H;                                                                          //copying
        const float Pi = 3.14;
        pi = Pi;                                                                                //copying
        float v;
        v = (pi * R * R * H);                                                           //calculating volume
        float v1;
        v1 = v / 3;
        volume = v1;                                                                                //copying
    }

    float getSurfaceArea() {
        return surfaceArea;                                         //getting surface area
    }

    float getVolume() {
        return volume;                                          //getting volume
    }

    void display() {
        cout << "SURFACE AREA = " << surfaceArea << endl;
        cout << "VOLUME = " << volume << endl;                                          //displaying surface area and volume
    }

    ~cone() {
        cout << "destructor of cone is called.." << endl;                                   //destructor is called
    }
};

#endif //INC_2022_SPRING_CE_OOP_WEEK11_ASSIGNMENT11_BSCE21012_FUNCTIONS_H
