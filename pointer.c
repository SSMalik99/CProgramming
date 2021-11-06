#include<stdio.h>


// "address of(&)" operator will give  address of the varible (&i)
// "value at address (*)" will give value at the address  *(&i)

// %u format specifier to print the pointer in the printf function...

/*
int variable;
int *addressOfVariable;
addressOfVariable = &variable;
int **addressOfAddressOfVariable;
addressOfAddressOfVariable = &addressOfVariable;
int ***addressofAddressofAddressOfVariable;
addressofAddressofAddressOfVariable = &addressOfAddressOfVariable;
and so on...

function call can be done by two ways...
call by value...
we can't change the value of variable if we pass it with value 
call by referance...
if we call by referance then we can change value of the variable
*/
// void callByValue(int a, int b);
// void callBYReferance(int *a, int *b);

// int getAddressOfVariable(int a);
// int getValueOfAddress(int *a);
// void justTrialFunction(int i);

// int increaseValueByTenTimes(int *x);

// int findSumWithPointer(int *a, int *b);
// float findAverageWithPointer(int *a, int *b);

// void functionByValue(int a);
void sumAndAvg(int a, int b, int *sum, float *avg);

int main(){
    // How to declare a pointer 
    // int *j(j is just a name can be any variable name) integer ke address ko save kre ga
    // float *j will point float
    // char *j will point char
    // int a = 1, b=3;
    // printf("value before function callByValue\n, %d and %d\n", a,b);
    // callByValue(a, b);
    // printf("value after function callByValue\n, %d and %d\n", a,b);
    
    // printf("value before function callByReferance\n, %d and %d\n", a,b);
    // callBYReferance(&a, &b);
    // printf("value after function callByReferance\n, %d and %d\n", a,b);

    
    // ---->>>>> Practice for the pointer <<<<<---
    
    // Write a program to print the address of a variable. Use this address to get the value of this variable.
    // int a = 5, valueOfA, *address;
    // address = &a;
    // printf("pointer is %u\n", address);
    // printf("value at address is %u\n", *address);
    // printf("value of a is %d\n", a);
    // address = getAddressOfVariable(a);
    // printf("addres of the a is %u", *address);
    // valueOfA = getValueOfAddress(*address);
    // printf("value stored at the address is %d", valueOfA);


    // Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?
    
    // int i = 5;
    // printf("address of the i is %u\n", &i);
    // justTrialFunction(i);
    // Address is different in both beacause when we pass variable by value then it will send a copy of the variable;


    // Write a program to change the value of a variable to ten times its current value. Write a function and pass the value by reference.
    // int num = 5;
    // printf("values before change %d\n", num);
    // increaseValueByTenTimes(&num);
    // printf("value after increase %d\n", num);

    
    // Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
    // int a=4, b=5, sum;
    // float average;
    // sum = findSumWithPointer(&a, &b);
    // average = findAverageWithPointer(&a, &b);
    // printf("Sum of %d and %d with pointer is %d\n", a, b, sum);
    // printf("Average of %d and %d with pointer is %.2f\n", a, b, average);

    
    // Write a program to print the value of a variable i by using the "pointer to pointer" type of variable.
    // int i, *ptr, **ptr2;
    // i = 8;
    // ptr = &i;
    // ptr2 = &ptr;
    // printf("%d\n", **ptr2 );

    // Try problem 3 using call by value and verify that it doesn’t change the value of the said variable.
    // int a = 10;
    // printf("address of a %u\n", &a);
    // functionByValue(a);
    // printf("Value of a after is %d\n", a);

    int a = 2, b = 7, sum; 
    float avg;
    sumAndAvg(a, b, &sum, &avg);

    printf("sum is %d\n", sum);
    printf("Average is %f\n", avg);
    return 0;

}

// void callByValue(int a, int b){
//     a = 4;
//     b = 7;
// }
// void callBYReferance(int *a, int *b){
//     // printf("%u\n", a);
//     // int **c = &(*a);
//     // printf("%u\n", &a);
//     *a = 4;
//     *b = 7;
//     // printf("%u and %u\n", a, b);

// }

// int getAddressOfVariable(int a){
    
//     int *address;
//     address = &a;
//     printf("address is %u\n", address);
//     return *address;

// }

// int getValueOfAddress(int *a){
    
//     return *a;

// }

// void justTrialFunction(int i){
//     int *pointer;
//     pointer = &i;
//     printf("address in the function %u\n", pointer);
// }

// int increaseValueByTenTimes(int *x){
//     printf("value of the address is %u\n", x);   
//     *x = (*x) * 10; 
// }

// int findSumWithPointer(int *a, int *b){
//     return (*a + *b);
// }

// float findAverageWithPointer(int *a, int *b){
//     return (((float)(*a + *b))/2);
// }

// void functionByValue(int a){
//     int *address = &a;
//     *address = (*address) * 10;
//     printf("%d\n", *address);
    
// }

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)*sum/2;
}