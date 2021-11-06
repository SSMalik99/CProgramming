#include<stdio.h>
#include<string.h>

// int findLengthOfString(char *str);
// void sliceMyString(char *string, int start, int end);
// void copyStingToOther(char *original, char *copyTo);
// void encrypMyMessage(char *myString);
// void decryptMyMessage(char *msg);
// int findOccuranceInString(char *myStr, char chr);
int findInMyString(char *myStr, char charToFind);

int main(){

    // 1. Write a program to take a string as an input from the user using %c and %s. Confirm that the strings are equal.
    // char str1[10], str2[10];
    // char c;
    // int i =0;
    // printf("Please enter first string : \n");
    // scanf("%s", str1);
    // printf("Please enter second string character by character : \n");
    
    // while(c!='\n'){
    //     fflush(stdin);
    //     scanf("%c", &c);
    //     str2[i] = c;
    //     i++;
    // }
    // str2[i-1] = '\0';

    // if(!strcmp(str1, str2)){
    //     printf("Both String %s and %s are equal", str1, str2);
    // }else{
    //     printf("Both String %s and %s are not equal", str1, str2);
    // }

    // 2.Write your own version of strlen function from <string.h>
    // char str[50];
    // printf("Ente any string\n");
    // gets(str);
    // int length = findLengthOfString(str);
    // printf("Length of your string = %d\n", length);

    // Write a function slice() to slice a string. It should change the original string such that it is now the sliced strings. Take m and n as the start and ending position for slice.

    // char myString[50];
    // int inCount, lastCount;
    // printf("Enter your string: ");
    // gets(myString);
    // printf("Enter Starting Point\n");
    // scanf("%d", &inCount);
    // printf("Enter Endpoint");
    // scanf("%d", &lastCount);
    // printf("%s", myString);
    // printf("Before Slicing : %s ", myString);
    // sliceMyString(myString, inCount, lastCount);
    // printf("Your sliced String is : %s", myString);


    // Write your own version of strcpy function from <string.h>
    // char str1[20] = "OriginString", str2[20];
    // printf("Before Copy : %s\n", str2);
    // copyStingToOther(str1, str2);
    // printf("After copy : %s", str2);


    // Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
    // char *myString = "This is a message"; //passing this way is only read only memory so we can't change value of inside elements...
    // char myString[] = "Welcome To My Hood";//correct way to change elements value;
    
    // printf("Before Encryption %s\n", myString);
    // encrypMyMessage(myString);
    // printf("After Encription :%s\n", myString); 

    // // Lets decretp this
    // decryptMyMessage(myString);
    // printf("Message is:%s", myString);

    // Write a program to count the occurrence of a given character in a string.
    // char myStr[] = "IntoMyHoodNothingIsGood";
    // printf("Working here");
    // int charCount = findOccuranceInString(myStr, 'o');
    // printf("Occurrance of the element = %d\n", charCount);


    // Write a program to check whether a given character is present in a string or not.
    char myStr[]= "abcddekkdkadgha";
    char charToFind = 'z';
    int isAvailable = findInMyString(myStr, charToFind);
    if(!isAvailable){
        printf("%c is not available in %s\n", charToFind, myStr);
    }else{
        printf("%c is available in %s\n", charToFind, myStr);
    }

    return 0;

}

// int findLengthOfString(char *str){
//     int i =0 ;
//     // printf("inside funcitn %s", str);
//     while(str[i] !='\0'){
//         i++;
//     }
//     return i;
// }


// void sliceMyString(char *string, int start,int end){
//     printf("inside fucntion\n");
//     int index = 0;
//     while((start+index) < end){
//         string[index] = string[(index+start)];
//         index++;
//     }
//     string[index] = '\0';
//     /*
//     Explanation why start+index in while loop because we need to start from the strating index for example index 3...
//     then we will change indexes values according to the required values
//     */
// }


// void copyStingToOther(char *original, char *copyTo){ 
//     int index = 0;
//     // printf("%c\n", original[index]);
//     while(original[index] != '\0'){
//         copyTo[index] = original[index];
//         index++;
//     }
//     copyTo[index] = '\0';

// }

// void encrypMyMessage(char *myString){
    
//     char *ptr = myString;    
//     while ( *ptr != '\0'){
//         *ptr = *ptr + 1;
//         ptr++;
//     }
    
// }

// void decryptMyMessage(char *msg){
    
//     char *ptr = msg;
//     while ( *ptr != '\0'){
//         *ptr = *ptr - 1;
//         ptr++;
//     }
// }


// int findOccuranceInString(char *myStr, char chr){
//     int chrCount = 0;
//     char *ptr = myStr;
//     while (*ptr != '\0'){
//         if(*ptr == chr){
//             chrCount++;
//         }
//         ptr++;        
//     }
//     return chrCount;
// }


int findInMyString(char *myStr, char charToFind){
    
    char *ptr = myStr;
    int isAvailable = 0;
    while (*ptr != '\0'){    
        if(*ptr == charToFind){
            isAvailable = 1;
            break;
        }
        ptr++;
    }
    return isAvailable;
}