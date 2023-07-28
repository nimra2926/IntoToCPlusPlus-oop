# CE101: Object Oriented Programming 

      Time allowed: 45 minutes 

### Instructions:

      i.   Code must be commented and indented properly.
      ii.  Make sure to push the lab tasks within deadline.
      iii. Anybody found cheating or helping any other person in cheating will get his/her lab cancelled.
      iv.  Submit manual as well. 



## TASKS

### Task A

Task A (For 1st member of Group)<br>
Part 1) A double pointer is used for declaring two dimensional arrays dynamically. For example,<br>

We want to implement a triangular 2D array in which each row has one column greater than the previous one. i.e., the first row has one column, the second one has two columns, and the third one has three columns and so on. You have to take the total number of rows from the user. Following is an example of a triangular 2D array with four rows.<br>
![image](https://user-images.githubusercontent.com/36464117/157492730-c0dfe92d-f6d0-4178-9bf2-9d0979f44965.png)
Write following functions with given prototype:<br>
a. void AddColumns (int * &, int size)<br>
This function takes a single pointer by reference and dynamically allocates memory to it. You will call this function in main to allocate number of columns to each row turn by turn.<br>
int main( ){<br>
int **p;<br>
p=newint *[rows];<br>
for(int i=0; i<rows; i++)<br>
//call function...<br>
}<br>
b. void RowWiseInput(int *, int size)<br>
This function simply takes a pointer as an argument and takes input  in it from the user. The second argument is the size of 1D array pointed by pointer.<br>
c. void RowWisePrint(int *, int size)<br>
This function takes a pointer as argument and prints its contents. The second argument is the size of 1D array pointed by pointer.<br>
d. int main()<br>
In main function you have to do the following tasks:<br>
•	Ask the user to enter the number of rows.<br>
•	Declare a 2D array.<br>
•	Allocate memory for its columns in this array using AddColumns Function defined above.<br>
•	Take input in the 2D array using RowWiseInput function.<br>
•	Print the 2D array using RowWisePrint function.<br>
•	You may use loops in main.<br>


### Task B

Task A (For 1st member of Group)<br>
Part 2) Do above task opposite with Dynamic Memory Allocation <br>
![image](https://user-images.githubusercontent.com/36464117/157492999-f83285a2-0724-4c69-b854-77c4f7c1e1b7.png)



### Additional Functions

Additional function(s) should be written in Functions.cpp and used in main.cpp


### Run command

`make run`  This will run main.cpp executable 



### Notes

- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- You should use C++ standard approach for the development, using g++ extensions is not acceptable 

