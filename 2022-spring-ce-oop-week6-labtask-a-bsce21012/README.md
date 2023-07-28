# CE101: Object Oriented Programming 

      Time allowed: 45 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## TASKS

### Task A: Operator Overloading in Unary Operators (++, --) [Marks: 10]
In this task, you are required to create a class NumberIncrement with the following data members and member functions,<br>

Private Data Members such as: <br>
num(int)<br>

Public Member Functions such as:<br>
DefaultConstructor() – It will initialize num to 10.<br>
void operator unary symbol()  – It will increment num two times (++num). <br>
e.g void operator ++() {…}<br>
void display()  – It will print num.<br>

1. Create UML diagram for Box class with data member and member functions<br>

2. Create object obj of class in main function and call the "void operator ++ ()" function e.g ++obj,<br> 

3. Call the display function to print incremented num.<br>



### Task B: Operator Overloading in Binary Operators (+, - etc ) [Marks: 15]
In this task, you are required to create a class Addition with the following data members and member functions,<br> 

Private Data Members such as: <br> 
number1, number2(int)<br> 

Public Member Functions such as:<br> 
ParametrizedConstructor(int x=0, int y=0) – It will initialize number1 and number2.<br> 
Addition operator + (Addition &obj) – It will do the following<br> 

Addition operator + (Addition &obj) {<br> 
		Addition temp;
		temp. number1= number1+ obj. number1;<br> 
		temp. number2= number2+ obj. number2;<br> 
		return temp;<br> 
	}<br> 

void print()  – It will print the sum of number1 and number2.<br> 

1. Create UML diagram for Addition class with data member and member functions<br> 

2. Create two objects obj1 and obj2 of class with parameters to call parameterized constructor in main function e.g Addition obj1(10, 4), obj2(4, 8)<br> 

3. Create another object of class obj3 and add other two objects (obj1, obj2). <br> 
e.g Addition obj3=obj1+obj2<br> 

4. Call print function from obj3 and write your observation about output.<br> 

### Task C: Inheritance [Marks: 15]
In this task, you are required to create a class Human and class Gender with the following data members and member functions,<br>

Protected Data Members of class Human such as:<br> 
type(string)<br>

Public Member Functions of class Human such as:<br>
void type_public() – It will print “Human as Public member in parent class”.<br>

Public Member Functions of class Gender such as:<br>
void setType(string) – It will access and initialize protected data member of Human class.<br>
void type_child() – It will print “Human as public member in child class”.<br>
void show() – It will print “I am a ” with concatenate of protected data member of parent class e.g cout << "I am a " << type << endl;<br>

1. Create a UML diagram.<br>

2. Create object of child class Gender in main function and call member functions such as void setType(string tp), void show(), type_child(), type_public().<br>



### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 



### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

