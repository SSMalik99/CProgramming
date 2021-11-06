#include<stdio.h>
#include<string.h>
// in c string is an array of character ended with a null character(\0)...
// char myString[] = {'s', 'i', 'n', 'g', 'h', '\0'};
// or char myString[] = "singh"; //shorter way for the c given by the compiler
// in memory string is stored like array 
int main(){
    // print a string
    // char myString[] = {'s', 'i', 'n', 'g', 'h', '\0'};
    // char myString[] = "Singh";
    // char *ptr = myString;
    // while(*ptr != '\0'){
    //     printf("%c", *ptr);
    //     ptr++;
    // }
    // ------------OR--------------
    // using format specifier...
    // char *ptr = "Hello Yaar";
    // printf("%s", ptr);

    // %s in scanning the value...
    // char str[34];
    // printf("Enter your name:");
    // scanf("%s", str);// "str" is passed because we will pass address of the string just as array
    // printf("your name is %s", str);
    // out put will not take multiple words for this we have to use something else...
    /*
    Enter your name:sarvjeet singh
    your name is sarvjeet
    */
    // Note:
    // The string should be short enough to fit into the array.
    // scanf cannot be used to input multi-word strings with spaces

    // To get multiple words from the user input
    // there is gets() -> to get multiple words... and puts() -> to simply print the string...
    // char str[40];
    // printf("Enter Your name:");
    // gets(str);
    // puts(str);

    // Declaring a string
    // if string is declared like char str[] = "My string" then it can't be redeclared;
    // char str[] = "my string";
    // str[] = "Change this"; // can do this
    
    // so solution is 
    // char *str = "this is";
    // str = "change this"; // this will work

    // Library functions for the String...
    // strlen(), strcpy(), strcat(), strcomp() and many more...
    // char *str1 = "Saravjeet", *str2 = "Singh";
    // printf("The length of the string str1 = %d",strlen(str1));
    // Let copy a string
    // char target[50];
    // strcpy(target, str1);
    // printf("Copied String is %s", target);

    // Concate strings;;;
    // char *str1 = "Saravjeet", *str2 = "Singh";
    // printf("Before Concate str1 is %s\n", str1);  // output::
    /*
    why it not work because length of the str1 is small than the concat string... 
    strcat(str1, str2);//now str1 is not Saravjeet Singh it is now SaravjeetSingh
    */
    // char *str1[50] = "Saravjeet", *str2 = "Singh";
    // printf("Before Concate str1 is %s\n", str1);  // output:: Before Concate str1 is Saravjeet
    // strcat(str1, str2);// now it will work...
    // printf("After Concate : %s\n", str1); // output:: After Concate : SaravjeetSingh
    

    // strcmp();
    // char *str1 = "Mango", *str2 = "mango";
    // printf("%d", strcmp(str1, str2)); // output ::  -1 means not equal...

    // char *str1 = "Mango", *str2 = "Mango";
    // printf("%d", strcmp(str1, str2)); // output:: 0 means equal

    // char *str1 = "Mengo", *str2 = "Mango";
    // printf("%d", strcmp(str1, str2)); // output:: 1 means unequal

    // What is the difference in t strcmp() 1 and -1 is that 
    // If ascii value in first unmatching characted in first string is lower than the other string then it will give -1 otherwise it will return 1...

    return 0;

}