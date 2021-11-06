#include<stdio.h>
#include<math.h>
/*
Type declartions : meaning declaration of type like int a, float b, char c...
Arithmetic Instructions: addition division multiplication....
Control instructions:  conditions and loops...
*/

int main(){

    // Type declarations
    // int a, b, c, d;
    // a = b = c = d = 40;//very much correct

    // Arithmetic Instructions
    // int a = 9;
    // int b = 4;
    // printf("The value of a + b = %d\n", a + b);
    // printf("The value of a - b = %d\n", a - b);
    // printf("The value of a * b = %d\n", a * b);
    // printf("The value of a / b = %d\n", a / b);
    
    // Modular division operater this will provide remainder
    // printf("The value of remainder when 9 divided by 4 = %d\n", a % b);

    // to calculate power we will first import math library of c and then perform pow() method
    // printf("4 power of 2 = %d", pow(2, 4));//this will return float number so this will create an output 0.
    // So we need to use %f instead of %d
    // printf("5 power of 2 = %f", pow(2, 5));

    // Some rules
    /*
    operation between
    int and int =int
    int and float = float
    float and float = float
    */

    // printf("Value of 5+5 = %d\n", 5 + 5);
    // printf("Value of 5+5.6 = %f\n", 5 + 5.6);
    // printf("Value of 5/2 with d = %d\n", 5 / 2);
    // printf("Value of 2/5 with f = %d\n", 2 / 5);
    // printf("Value of 2.0/5 with f = %f\n", 2.0 / 5);

    // if int a = 3.5 then it will store only three so be specific with varible declaration
    // float a = 8 will store  a = 8.0

    // int k = 3.0 / 9 --->  k = 0.333 but as k is int so it will not store float value so it will be demoted to 0.
    // int k = 3.0/9;
    // printf("value of k : %d", k);
    // Output = value of k : 0

    // >>>>>>>>>>>>>>>---------Operator Precedence in C-----------<<<<<<<<<<<<<<<<<<<<
    // Which operator has priorty to solve a math in C is called operator precedence

    // This will work only when paranthesis are not there if parenthesis are there then it will calculated according to the paranthesis

    // 3*x - 8y = ? //(3x-8y) or 3(x-8y) 
    // Example
    // int x = 4;
    // int y = 9;
    // printf("value is %d", 3 * x - 8 * y);
    // Output : value is -60 
    /*
    priorty |  operators
    1st     |  * / %
    2nd     |  + -
    3rd     | =

    what if there is two or more from the 1st priorty.
    take an example below.
    */
    // int x = 2;
    // int y = 3;
    // printf("The value of 8*y/3*x = %d\n", 8*y/3*x);
    // Output : The value of 8*y/3*x = 16

    /*
    So when there is a tie in the operator then associativity come into playground 
    associativity of * / % is in left to right associativity means they will follow calculate value from left to right
    so how it was 8*y/3*x = 16
    first 8*3 = 24 then 24/3 = 8 then 8*2 = 16
    
    these are very important...
    */

   /*
    Control instructions are four type in C
    1. Sequence Control Instructions is same which is associativity and operator precedences.
    2. Decision Control Instructions (if, else).
    3. Loop Controll Instructions (for, while, do while loops).
    4. Case Control Statements(Switch cases).
   */


    return 0;

}