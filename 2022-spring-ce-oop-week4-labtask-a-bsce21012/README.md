# CE101: Object Oriented Programming 

      Time allowed: 45 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## TASKS

### Task A [Marks: 8]
Write a C++ code to define an Account Class that contains two Data Members AccountTitle and Member Functions to Set and Get its value. You will save it as Account.h.
The class will have Public Member Functions with the following declarations:<br>
void setAccount (string);<br>
string getAccount (void);<br>
The class will have a Private Data Member AccountTitle with the following declaration:<br>
string AccountTitle;<br>

### Task B [Marks: 8]
For the class definition in Task A, write a main driving code AccountMain.cpp to create and manipulate an Account object myAccount. You should get the following output:<br>
Initial account title is:<br>
Please enter the account title: Your Name and Roll number<br>
Title in object myAccount is: Your Name and Roll number<br>
Use getline() function to read in the string.<br>

### Task C [Marks: 8]
Now repeat Task A by using the Account Constructor to initialize the Name Data Member at the time each Account Object is created.<br>
The constructor function is Account (string);<br>

### Task D [Marks: 8]
Now repeat Task B by defining Account Class with a Constructor that Initializes the Account Name. Create three objects as account1, account2 and account3.<br>

The output must be like:<br>
account1 name is: Your First name and Roll No.<br>
account2 name is: Your Last name and Roll No.<br>
account3 name is: Your Course Name and Roll No.<br>

### Task E [Marks: 8]
Now repeat the above performed Task by separating the interface from the implementation.<br>
Create an Account.h file for class definition showing only declarations for the member functions.<br>
Create an Account.cpp file to define the class member functions. Create an Main.cpp file to contain the driving code.<br>




### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 



### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

