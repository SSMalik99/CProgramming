#include<stdio.h>

// void reverseMyArray(int *myArray, int count){
//     // int myReverseArray[count];
    
//     // for(int i = count ; count ;i--){
//     //     myReverseArray[i] = 
//     // }
//     // for(int i = count ;  i ; i--){
//     //     myReverseArray[i] = *(myArray + i);
//     //     printf("%d in the debug\n", myReverseArray[i]);
//     // }
//     // for(int i = 0; i < count; i++){
//     //     *(myArray+i) = myReverseArray[i];
//     // }

//     // printf("%u", myArray);

//     int temp;
//     // Why count/2 because as it run hallf way then it is sorted already when its half way down
//     // for example if array has 3 element then 1 changed with 3 and three changed with 1st so sorted... in first trial
//     for(int i; i< (count/2); i++){
//         temp = myArray[i];
//         myArray[i] = myArray[count-i-1];//means if array has 3 element a[1] = a[3-0(i)-1]
//         myArray[count-i-1] = temp;
//     }
// }

// int findPositiveInteger(int *array, int count);

// void findMultiOfArrayElement(int *myArray,  int num, int count);
// void printTables(int *myArray, int *numArray, int howManyTable, int howManyColumn);

int main(){

    // Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
    // int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int *ptr; 
    // ptr = &myArray[0]; //or ptr = myArray

    // if(*(ptr+2) == myArray[2]){
    //     printf("Value of ptr2 and myArray third element are equal\n");
    // }else{
    //     printf("Values are not equal");
    // }

    /*
    If S[3] is a 1-D array of integers, then *(S+3) refers to the third element:
        True
        False
        Depends
    My answer is ---- False;
    real answer is ---- False
    because as *(s+3) (as pointer = array = &array[0]) will refere fourth element of the array...
    */


    // Write a program to create an array of 10 integers and store a multiplication table of 5 in it
    // int myArray[10];
    // for(int i = 0; i < 10; i++){
    //     myArray[i] = 5 * (i + 1);
    // }

    // for(int i = 0; i < 10; i++){
    //     printf("5 multiply by %d = %d\n", i+1,myArray[i]);
    // }

    // Table of a  number
    // Repeat problem 3 for a general input provided by the user using scanf()
    // int num, myArray[10];
    // printf("please enter number you want to print the table:\n");
    // scanf("%d", &num);
    // for(int i = 0; i < 10; i++){
    //     myArray[i] = num * (i + 1);
    // }

    // for(int i = 0; i < 10; i++){
    //     printf("%d multiply by %d = %d\n", num, i+1,myArray[i]);
    // }

    // Write a program containing a function that reverses the array passed to it.
    // Not working in this way
    // int myArray[5] = {22, 33, 44, 54, 55};
    // for (int i = 0; i < 5; i++){
    //     printf("befroe swap %d\n", myArray[i]);
    // }
    // reverseMyArray(myArray, 5);
    // for (int i = 0; i < 5; i++){
    //     printf("After swap %d\n", myArray[i]);
    // }

    // code that work 
    // int myArr[6] = {1,2,3,4,5,6};
    
    // for (int i = 0; i < 6; i++){
    //     printf("Before Swap value at %d place = %d\n", i+1, myArr[i]);
    // }

    // reverseMyArray(myArr, 6);

    // for (int i = 0; i < 6; i++){
    //     printf("After Swap value at %d place = %d\n", i+1, myArr[i]);
    // }

    // Write a program containing functions that counts the number of positive integers in an array.
    // int myArray[12] = {-1,-2,-3,-4, -5, -6,-7,-8, -22, -333,-9,-10}, positiveIntegers;
    // positiveIntegers = findPositiveInteger(myArray, 12);
    // printf("Positive integers in my array are  %d\n", positiveIntegers);


    // Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
    // int howManyTable = 3;
    // int myArray[3][10];
    // int numArray[3] = {2, 7, 9};    
    // int howManyColumn = 10;
    
    // // store table in the array
    // for (int i = 0; i < howManyTable; i++){
    //     findMultiOfArrayElement(myArray[i], numArray[i], howManyColumn);
    // }

    // // print table from the array
    // printTables(myArray[0], numArray, howManyTable, howManyColumn);


    // Repeat problem 7 for a custom input given by the user
    // int howManyTable, howManyColumn;
    // printf("enter how many table do you want :");
    // scanf("%d", &howManyTable);
    // printf("Enter How many multiplication do you want(example 10 or more) : ");
    // scanf("%d", &howManyColumn);
    // int myArray[howManyTable][howManyColumn];

    // int numArray[howManyTable];
    
    // for (int tableCount = 0; tableCount < howManyTable; tableCount++){
    //     printf("Enter number%d\n : ", tableCount+1);
    //     scanf("%d", &numArray[tableCount]);
    // }

    // // store table in the array
    // for (int i = 0; i < howManyTable; i++){
    //     findMultiOfArrayElement(myArray[i], numArray[i], howManyColumn);

    // }
    // // print table from the array
    // printTables(myArray[0], numArray, howManyTable, howManyColumn);


    // Create a three-dimensional array and print the address of its elements in increasing order.
    // int my3dArray[2][3][4];
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         for(int k = 0; k < 4; k++){
    //             printf("address of the my3dArray[%d][%d][%d] = %u\n", i, j, k, &my3dArray[i][j][k]);
    //         }
    //     }
    // }
    
    
    return 0;

}

// void printTables(int *myArray, int *numArray, int howManyTable, int howManyColumn){
//     int index = 0;
//     for (int i = 0; i < howManyTable; i++){
//         printf("Table of %d\n", numArray[i]);
//         for(int j = 0; j < howManyColumn; j++){
//             printf("%d multiply by %d = %d \n", numArray[i], j+1, myArray[index]);
//             index++;
//         }
//         printf("\n");
//     }     
// }

// void findMultiOfArrayElement(int *myArray, int num, int count){
//     // printf("inside funciton %u \n", myArray);
//     // printf("inside funciton %u \n", myArray+29);
//     // printf("inside funciton %u \n", myArray[0]);
//     // printf("%d", *numArray);
    
//     for(int i=0 ; i < count; i++){
//         myArray[i] = num * (i+1);
//     }

//     // printf("%u", myArray);
//     // for (int i = 0; i < numCount; i++){
        
//     //     for(int j=0; j < 10; j++){
//     //         *myArray = (*numArray)*(j+1);
//     //         printf("%d\n", *myArray);
//     //         myArray++;            

//     //     }
//     //     numArray++;
//     // }
    
// }
// int findPositiveInteger(int *array, int count){
//     int positiveInt = 0;
//     for(int i=0; i<count; i++){
        
//         if(array[i] > 0){
//             positiveInt++;
//         }
//         else{
//             continue;
//         }
//     }

//     return positiveInt;
// }