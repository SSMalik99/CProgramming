#include<stdio.h>

// float findAverage(int x, int y, int z);
// float celciusToFahr(int temp);
// float calculateForceByEarth(float mass);
// int findInFibonacci(int x);
// int findSumOfElements(int x);
void makePattern(int x);

int main(){
    // Write a program using functions to find the average of three numbers.
    // int num1, num2, num3;
    // printf("Enter first number\n");
    // scanf("%d", &num1);

    // printf("Enter second number\n");
    // scanf("%d", &num2);

    // printf("Enter third number\n");
    // scanf("%d", &num3);

    // printf("code start here\n");
    // printf("average of the numbers is %f\n",findAverage(num1, num2, num3));


    // Write a function to convert Celcius temperature into Fahrenheit
    // int temp;
    // printf("enter temperature: ");
    // scanf("%d", &temp);
    // printf("Temprature in Fahrenheit = %f\n", celciusToFahr(temp));


    // Write a function to calculate the force of attraction on a body of mass m exerted by earth. (g=9.8m/S2)
    // float mass;
    // printf("Enter mass of the body\n");
    // scanf("%f", &mass);
    // printf("Force experienced by the body = %.2f", calculateForceByEarth(mass));

    // Write a program using recursion to calculate the nth element of the Fibonacci series.
    // int num, elementNum;
    // printf("Enter the element you want to find\n");
    // scanf("%d",&num);
    // elementNum = findInFibonacci(num);
    // printf("Element at %d place is %d\n", num, elementNum);

    // What will the following line produce in a C program: printf(“%d %d %d\n”,a,++a,a++);
    // int a = 5;
    // printf("%d %d %d\n", a, ++a, a++);
    /*
    result::: 7 7 5
    why because in printf excution start from right to left and output will be rendered from left to right

    this will depend on interpretor and compiler how it is taking elements in case of gcc it takes from right to left so first cross check how compiler is taking arguments.
    */

    // Write a recursive function to calculate the sum of first n natural numbers.
    // int num, sum;
    // printf("Enter How many natural numbers sum do you want\n");
    // scanf("%d", &num);
    // sum = findSumOfElements(num);
    // printf("Sum of %d natural numbers is %d\n", num, sum);



    // Write a program using functions to print the following pattern(first n lines):
    // *
    // ***
    // *****
    int num;
    printf("Enter How many rows you want to print in the pattern\n");
    scanf("%d", &num);
    makePattern(num);

    return 0;

}

// float findAverage(int x, int y, int z){
//     return (float)(x+y+z)/3;
// }

// float celciusToFahr(int temp){
//     float result;
//     result = (temp * 9/5) + 32;
//     return result ;

// }

// float calculateForceByEarth(float mass){
//     float force;
//     force = mass * 9.8;
//     return force;
// }

// int findInFibonacci(int x){
//     int number;
//     if(x <= 1){   
//         return 0;
//     }else if(x == 2){
//         return 1;
//     }else{
//         number = findInFibonacci(x-1) + findInFibonacci(x-2);
//     }
//     return number;
// }

// int findSumOfElements(int x){
//     int sum;
//     if(x <= 1){
//         sum = 1;
//     }else{
//         sum = x + findSumOfElements(x-1);
//     }
//     return sum;
// }

void makePattern(int x){
 
    if(x == 1){
        printf("*\n");
        return;
    }
    makePattern(x-1);
    for (int i = 0; i < (2*x - 1); i++)
    {
        printf("*");
    }
    printf("\n");
    
}