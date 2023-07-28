#include "Functions.h"
#include <iostream>
using namespace std;
void Employee::addWork()		//Adding salary if employee works more than 6 hours
{
    if(hours>6)
    {
        salary=salary+5;
    }
}
void Employee::setValue(int duration,int cash)		//Setting the values in other variables
{
    salary=cash;
    hours=duration;
}
void Employee::addSalary()		//Adding salary if it is less than 500
{
    if(salary<500)
    {
        salary=salary+10;
    }
}
int Employee::getValue()		//Getting the salary
{
    return salary;
}
Employee::Employee()
{}
int Matrix::getRows()		//Getting rows
{
    return rows;
}
int Matrix::getCols()		//Getting columns
{
    return columns;
}
Matrix::Matrix(int r,int c)
{
    columns=c;
    rows=r;
    int i=0;
    while(i<r)
    {
        matrix[i]=new int[c];
        i++;
    }
}
void Matrix::setMatrix(int i,int j,int value)		//Setting values
{
    matrix[i][j]=value;
}
void Matrix::addMatrix()				//Adding the matrices
{
    int **added=new int*[rows];
    for(int i=0;i<rows;i++)
    {
        added[i]=new int [columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            added[i][j]=matrix[i][j]+matrix[i][j];
        }
    }
    cout<<"Resultant Matrix is: "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<" "<<added[i][j];
        }
        cout<<endl;
    }
}
void Matrix::multiMatrix()				//Multiplicating the matrices
{
    int **multi=new int*[rows];
    for(int i=0;i<rows;i++)
    {
        multi[i]=new int [columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            int elements;
            for(int k=0;k<rows;k++)
            {
                elements=elements+(matrix[i][k]*matrix[k][j]);
            }
            multi[i][j]=elements;
        }
    }
    cout<<"Resultant matrix is :";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<" "<<multi[i][j];
        }
        cout<<endl;
    }

}

