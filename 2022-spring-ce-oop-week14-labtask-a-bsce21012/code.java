// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;
class LabTask {
     static int factorial(int n){    
  if (n == 0)    
    return 1;    
  else    
    return(n * factorial(n-1));    
 }   
    public static void main(String[] args) {  
        int opt1=0;
        Scanner opt= new Scanner(System.in);
        do{
        System.out.println("1.FACTORIAL BY LOOP.");
        System.out.println("2.FACTORIAL BY RECURSION.");
        System.out.println("3.REVERSE ARRAY");
        System.out.println("4.exit.");
          //System.in is a standard input stream.
        System.out.print("Enter YOUR CHOICE = ");
        opt1= opt.nextInt();
        if(opt1==1){
        int i;
        int num=1;  
        Scanner sc= new Scanner(System.in); //System.in is a standard input stream.
        System.out.print("Enter Number To Get Factorial = ");
        int numberToGetFactorial= sc.nextInt();
  //It is the number to calculate factorial    
        for(i=1;i<=numberToGetFactorial;i++){    
        num=num*i;    
        }    
        System.out.println("Factorial of "+numberToGetFactorial+" is: "+num);   
}
if(opt1==2){
      int i1,fact1=1;  
       Scanner idk= new Scanner(System.in); //System.in is a standard input stream.
        System.out.print("Enter Number To Get Factorial = ");
        int number= idk.nextInt();
        fact1 = factorial(number);   
        System.out.println("Factorial of "+number+" is: "+fact1);  
}
if(opt1==3){
       int [] array = {1, 2, 3, 4, 5};  
        System.out.println("Initial array: ");  
        for (int i = 0; i < array.length; i++) {  
            System.out.print(array[i] + " ");  
        }  
        System.out.println();  
        System.out.println("Reverse Array: ");  
        //Loop through the array in reverse order  
        for (int i = array.length-1; i >= 0; i--) {  
            System.out.print(array[i] + " ");  
        }  
}
if(opt1==4){
    System.out.println("YOU CHOOSE TO EXIT...");
    System.exit(0);
}
}while(opt1>=1 && opt1<=4);
    }
}