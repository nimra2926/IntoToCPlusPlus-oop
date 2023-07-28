#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    int x;
    cout<<"Enter 1 for task 1 or 2 for task 2 : ";
    cin>>x;
    if(x==1)
    {
        int out,cash,duration;		//initializing other variables
        Employee empl;		//creating object
        cout<<"For how many hours does the employee work :";		//taking input of duration of work
        cin>>duration;
        cout<<"How much is the salary of the employee :";			//taking input of salary
        cin>>cash;
        empl.setValue(duration,cash);				//Calling all the class fuctions
        empl.addSalary();
        empl.addWork();
        out=empl.getValue();
        cout<<"The returned values are:"<<out;		//printing calculated value
    }else if(x==2)
    {

//        Matrix mat;		//creating object
        int row,column,value;		//initializing other variables
        Matrix mat(row,column);
        cout<<"Enter the number of rows:";		//input of rows
        cin>>row;
        cout<<"Enter the number of columns:";		//input of columns
        cin>>column;
//        mat.Matrix(row,column);
        for(int i=0;i<row;i++)				//input of elements
        {
            for(int j=0;j<column;j++)
            {
                cout<<"Enter value of "<<i+1<<" and "<<j+1<<" of matrix:";
                cin>>value;
                mat.setMatrix(i,j,value);
            }
        }
        mat.multiMatrix();
        mat.addMatrix();
    }else
        cout<<"Wrong input!!!!";
    return 0;
}
