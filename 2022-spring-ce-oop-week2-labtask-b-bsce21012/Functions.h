#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include <iostream>
#include <fstream>
using namespace std;
void oddRightTriangle(int &num, fstream &myFile);
void oddRightTriangle1(int &rows,fstream &myFile,ifstream &files) ;
void invertedRight(int &num,fstream &myFile);
void invertedRight1(int &rows,fstream &myFile,ifstream &files );
void evenRightTriangle(int &num,fstream &myFile);
void evenRightTriangle1(int &rows,fstream &myFile,ifstream &files);
void printZero(int &num,fstream &myFile);
void printZero1(int &rows,fstream &myFile,ifstream &files);
void printChars(int &num,fstream &myFile);
void printChars1(int &rows,fstream &myFile,ifstream &files) ;
void printCharOfTwoTypes(int &num,fstream &myFile);
void printCharOfTwoTypes1(int &rows,fstream &myFile,ifstream &files) ;
void rightAngle(int &size,fstream &myFile);
void rightAngle1(int &rows,fstream &myFile,ifstream &files) ;
void invertedRightTriangle(int &size,fstream &myFile);
void invertedRightTriangle1(int &rows,fstream &myFile,ifstream &files) ;
void rightHollowTriangle(int &size,fstream &myFile);
void rightHollowTriangle1(int &rows,fstream &myFile,ifstream &files) ;
void CompleteTriangle(int &size,fstream &myFile) ;
void CompleteTriangle1(int &rows,fstream &myFile,ifstream &files) ;
void hollowCompleteTriangle(int &size,fstream &myFile);
void hollowCompleteTriangle1(int &rows,fstream &myFile,ifstream &files) ;
void invertedRightTriangleHollow(int &size,fstream &myFile) ;
void invertedRightTriangleHollow1(int &rows,fstream &myFile,ifstream &files) ;
void menuTask1();
void menuTask2();
void menuForFile1();
void menuForFile2();
#endif
