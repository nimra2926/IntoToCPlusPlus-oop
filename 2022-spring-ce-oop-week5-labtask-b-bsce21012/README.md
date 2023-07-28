# CE101: Object Oriented Programming 

      Time allowed: 45 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## TASKS

### Task A [Marks: 15]
In this task, you are required to create a class Box with the following data members and member functions,<br>

Private Data Members such as: <br>
width(double)<br>

Public Member Functions such as:<br>
DefaultConstructor() – It will display “I am automatically called because I am constructor” and set width to zero.<br>
ParameterizedConstructor(int w)  – It will set width<br>

Non Member Function such as:
friend void printWidth(Box &b) – It is friend function, and it will print the width <br>
Create object of class in main function and call member and non-member function<br>


### Task B [Marks: 25]
In this task, you are required to create a class A and friend class B with the following data members and member functions,<br>

Private Data Members of class A such as: <br>
a(int)<br>

Public Member Functions of class A such as:<br>
ParameterizedConstructor(int a) – It will set value a.<br>

Public Non Member Class of class A such as:<br>
friend class B – Declare class B as friend<br>

Private Data Members of class B such as: <br>
b(int)<br>

Public Member Functions of class B such as:<br>
void showA(A &a) – It will print private member of class A.<br>

Create objects of class A and B in main function and print private member of A by calling public member function of class B<br>
You can assume that the dimensions are correct for the multiplication and addition.<br>



### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 



### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

