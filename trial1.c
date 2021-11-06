#include<stdio.h> //preprocess directive

/*
const type in c
integer 1,2 ,3... also -ve
real constant 2.3 , -3.44,...
character constant (character must be in single inverted commas);
example of character constant = 'a', '$'...

double quotes are string
"this is a string"
*/

// semicolon is important in the end of line...
//Compilation and Execution
/*
 ---------        ------------        -----------
| first.c | ---> | c Compiler | ->>> | first.exe |
 ---------        ------------        -----------
                    (gcc)
"gcc first.c" will create "a.exe"
"gcc first.c -o first.exe" will create "first.exe"
*/

// Library function are those which are predefined in c to use in 
// for Example printf("this is %d", 5);
// %d is for integer
// %f is for real values
//  %c is for character


//int a;
//  scanf("%d", &a) &a means take value from the user and store in variable "a"



//from main function code will start executing
int main(){

    printf("hello! this is first trial...");
    return 0;

}