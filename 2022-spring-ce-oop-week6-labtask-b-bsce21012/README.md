# CE101: Object Oriented Programming 

      Time allowed: 45 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## TASKS

### Task A: Multi Level Inheritance and Function Overriding [Marks: 20]
In this task, you are required to create three classes’ Staff (Parent class), Department (Child class), and Member (Grandchild class) with the following data members and member functions,<br>

Public Data Members of class Staff such as: <br>
salary(int)<br>

Public Member Functions of class Staff such as:<br>
//overriden function<br>
void base_public() – It will print “I am a function from base class”.<br>

Public Member Functions of class Department such as:<br>
void setsalary(int) – It will initialize data member salary.<br>

Public Member Functions of class Member such as:<br>
//overriding function<br>
void base_public() – It will print “I am a function from grandchild class”.<br>
int getsalary() – It will return salary.<br>

Create a UML diagram. <br>

Do the following operations in main function:<br>

1. Create object of class Staff and call member function void base_public().<br>

2. Create object of class Member (grandchild class) and call member function void base_public(), void setsalary(int s), void grandchild_public(), int getsalary() and print salary.



### Task B: Multiple Inheritance [Marks: 20]
In this task, you are required to create two parent classes’ Parent_One (Parent class), Parent_Two (Parent class), and one child class Derived_Class (Child class) with the following data members and member functions,<br>

Public/Protected Data Members of class Parent_One such as: <br>
a, b(int)<br>

Public Member Functions of class Parent_One such as:<br>
void set() – It will initialize a, b with any integer.<br>

Public/Protected Data Members of class Parent_Two such as: <br>
x, y(int)<br>

Public Member Functions of class Parent_Two such as:<br>
void set_input (int) – It will take input x, y.<br>

Public Member Functions of class Derived_Class such as:<br>
void show() – It will print addition of a,b(Parent_One class data members) and x,y(Parent_Two class data members).<br>

Create a UML diagram.<br>

Do the following operations in main function:<br>

1. Create object of class Derived_Class and call member functions such as  void set(), void set_input(), void show(). <br>




### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 



### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

