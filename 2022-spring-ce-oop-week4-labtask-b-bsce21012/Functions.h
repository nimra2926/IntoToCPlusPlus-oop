#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
using namespace std;
class Employee
{
private:
    int salary;		//Initializing the variables privately
    int hours;
public:
    int getValue();		//Creating the function prototypes in class
    void addWork();
    void setValue(int duration,int cash);
    void addSalary();
    Employee();
};
class Matrix
{
private:			//Initializing the variables privately
    int columns;
    int **matrix;
    int  rows;
public:
    int getRows();			//Creating the function prototypes in class
    Matrix(int r,int c);
    int getCols();
    void setMatrix(int i,int j,int value);
    void addMatrix();
    void multiMatrix();
};


#endif
