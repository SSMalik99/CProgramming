#include<stdio.h>

// array is define as
// myArray[7] that's mean myArray can have 7 elements from 0 to  6 index...
// int myArray[] =>  array to store integer element
// char myCharArray[] => array to store character elements
// float myFloatArray[] => array to store float elements
// initialize array myArray[3] = {1, 3, 4};
// 1st way ::: store values myArray[0] = 33;
// 2nd way ::: scanf("%d", &myArray[0]);


// How array stored in memory
/*
* myArray[3] = {1,2,3};
* suppose myArray[0] is stored at 675676 location address in the memory then next will be 
* stored at 675676 + 4 = 675680
* why we add four cause in memory integer take 4 bytes so next address will be at previous one + bytes
* "this 4 byte can be less or more this will depend on the system and memory allocation of the machine"
* so total memory allocated to an array is equal to the number of elements * byte to store an integer
* for example if we have array with 3 elements and memory allocation is 4 byte then total size of array will be
* equal to 3*4 = 12 bytes...
**/


// Pointer Arithmetic
// Following operations can be performed on pointers:

// Addition of a number to a pointer.
// Subtraction of a number from a pointer
// Subtraction of one pointer from another ->will return how many numebrs are between two location means if one location is 6372733 and another is 6372737 the 6372733 - 6372737 = 1(means 4 byte according to the memory organisation in my laptop)(if these are the address of the integer)
// Comparison of two pointer variables

// we are passing n-> length of the array to stay in the loop means how many times or how many element are in the array
// void printArray(int *address, int n){
//     for (int i = 0; i < n; i++){
//         printf("value%d = %d \n", i+1,*address);
//         address++;
//     }
    
// }

// void printArray(int address[], int n){
//     for (int i = 0; i < n; i++){
//         printf("value%d = %d \n", i+1,address[i]);
//     }
//     address[2] = 555;
    
// }

void printMy2dArray(int *ptr, int rows, int cols);

int main(){

    // input in array with loop
    // int myArray[5];
    
    // for(int i = 0; i < 5; i++){
    //     printf("Enter Number of student%d : \n",i+1);
    //     scanf("%d", &myArray[i]);
    // }

    // for(int i = 0; i < 5; i++){
    //     printf("Marks of student%d : %d \n", i+1, myArray[i]);
    // }

    // Quick Quiz: Try these operations on another variable by creating pointers in a separate program. Demonstrate all four operations.

    // int num = 3 , num2 = 8, num3 = 9, *intPtr, *intPtr2, *intPtr3, diffrencePtr, diffrencePtr2;
    // // char chr = '3', *charPtr;
    // // float flt = 3.3, *floatPtr;
    // intPtr = &num;
    // intPtr2 = &num2;
    // intPtr3 = &num3;
    // charPtr = &chr;
    // floatPtr = &flt;
    // ++ can be anything means we can add more than one unit like intPtr+=3;// next location will be +4 bytes int the previous pointer...

    // diffrencePtr = intPtr - intPtr2;
    // diffrencePtr2 = intPtr - intPtr3;

    // printf("intPtr, intPtr2 and intPtr3: %u, %u and %u\n", intPtr, intPtr2, intPtr3 );
    // // subtraction of one pointer to the other
    // printf("subtraction of the pointers intPtr and intPtr2 is: %u\n", diffrencePtr);
    // printf("subtraction of the pointers intPtr and intPtr3 is: %u\n", diffrencePtr2);
    // printf("int pointer value : %u\n", intPtr);
    // addition
    // intPtr++;
    // printf("int pointer value after ++(addition of one number): %u\n", intPtr++);
    // subtraction
    // intPtr--;
    // printf("int pointer value after --(aubtration of one number): %u\n", intPtr--);
    
    // printf("char pointer value : %u\n", charPtr);
    // addition
    // charPtr++;
    // printf("char pointer value after ++(addition of one number): %u\n", charPtr++);
    // subtraction
    // charPtr--;
    // printf("char pointer value after --(aubtration of one number): %u\n", charPtr--);
    
    // printf("float pointer value : %u\n", floatPtr);
    // addition
    // floatPtr++;
    // printf("float pointer value after ++(addition of one number): %u\n", floatPtr++);
    // subtraction
    // floatPtr--;
    // printf("float pointer value after --(aubtration of one number): %u\n", floatPtr--);


    // comparison in the pointers
    // int num = 3 , num2 = 8, *intPtr, *intPtr2, diffrencePtr;
    
    // intPtr = &num;
    // intPtr2 = &num2;
    // // diffrencePtr = intPtr - intPtr2;
    // if (intPtr > intPtr2)
    // {
    //     printf("intPtr is greater than intPtr2 values are intptr = %u and intPtr2 = %u", intPtr, intPtr2);
    // }else{
    //     printf("intPtr2 is greater than intPtr values are intptr = %u and intPtr2 = %u", intPtr, intPtr2);
    // }

    // Accessing Array with pointer

    // int myArray[3] = {2,3,4};
    // First by passing address of the first element and the length of the array
    // printArray(&myArray[0], 3);
    /*
    output : 
        value1 = 2 
        value2 = 3 
        value3 = 4
    */

//    By passign array to the function
    // address = &myArray[0] = myArray // means we are passing address fo the array or the address of the first element fo the array

    // As we are passing address of the array then it is certain that we can change this in the function...
    // printf("value of 2nd index before change %d", myArray[2]);
    // printArray(myArray, 3);
    // printf("value of 2nd index after change %d", myArray[2]);

    // multi dimentional array 
    // 2D array 
    // initialization
    // 2d in memory = array[0][0] array[0][1] array[0][3]....
    // int my2dArray[3][5];// that means array has 3 row 5 column...
    // for(int i = 0; i<3; i++){
    //     for(int j = 0; j < 5; j++){
    //         printf("enter marks of student%d in the subject%d :\n",i+1, j+1);
    //         scanf("%d", &my2dArray[i][j]);
    //     }
    // }

    // for(int i = 0; i<3; i++){
    //     for(int j = 0; j < 5; j++){
    //         printf("Marks of student%d in the subject%d : %d\n",i+1, j+1, my2dArray[i][j]);            
    //     }
    // }

    // Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

    int n_rows, n_cols;
    printf("Please Enter Number of rows\n");
    scanf("%d", &n_rows);
    printf("Please Enter Number of cols\n");
    scanf("%d", &n_cols);

    int my2dArray[n_rows][n_cols];
    
    for (int i=0; i < n_rows; i++){
        for(int j=0; j < n_cols; j++){
            printf("enter mark of Student%d in subject%d : \n", i+1, j+1);
            scanf("%d", &my2dArray[i][j]);
        }
    }
    printMy2dArray(&my2dArray[0][0], n_rows, n_cols);


    return 0;

}

void printMy2dArray(int *ptr, int rows, int cols){
    printf("[\n");
    for(int i = 0; i < rows; i++){
        printf("[");
        for(int j = 0; j < cols; j++){
            printf("%d", *ptr);
            if(j != (cols-1)){
                printf(",");
            }
            ptr++;
        }
        if(i != (rows-1)){
            printf("],\n");
        }else{
            printf("]\n");
        }
        
    }
    printf("]");
}