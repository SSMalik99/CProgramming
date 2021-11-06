#include <stdio.h>

int main()
{

    int a = 5;
    int b = 7.7;   //Not recommended because we have float to save real numbers
    float c = 7.7; //correct way to define
    char d = '@';
    int e = 5;

    printf("value of a= %d", a);
    printf("value of b= %d \n", b);
    printf("value of c= %f \n", c);
    printf("value of d= %c \n", d);
    printf("value of sum= %d \n", a+e);

    /*
    output: 
        value of a= 5value of b= 7 
        value of c= 7.700000
        value of d= @
    */

    return 0;
}