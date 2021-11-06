// Use function inside function 

// Basic example of recursion...
#include<stdio.h>
int customFactorial(int a);

int main(){

    int num;
    printf("Please enter number you want to find factorial\n");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, customFactorial(num));
    return 0;

}

int customFactorial(int a){
    
    if(a == 0 || a == 1){
        return 1;
    }
    return a * customFactorial(a-1);

}