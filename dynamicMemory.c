#include<stdio.h>
#include<stdlib.h>
/*
dynamic memory allocation : define memory everytime at runtime if it get short icrease it if it is free make it free if it larger than expectaion cut it down...
mainly we have 4 functions for this memory allocation
1.malloc() -> stands for memory allocation
2.calloc() -> stands for continuous allocation
3.free()
4.realloc()

// allocatino of meomory will return NULL if not enough memory or any other error occurs...
*/
int main(){

    // Start with malloc()
    // int size;
    // int *pointer;
    // printf("Enter how many size of data array do you want:");
    // scanf("%d", &size);
    // pointer = (int *)malloc(size*sizeof(int));
    // // Syntax explanation (int *) will type cast in the specific format int/float/character
    // // size -> how many number of the integer/float/char you want to stroe in the memory
    // // sizeof(int/float/char) will return size of int memory consumption in the computer

    // for(int i = 0; i < size; i++){
    //     printf("Enter value of element%d :", i+1);
    //     scanf("%d", &pointer[i]);
    // }

    // for(int i = 0; i < size; i++){
    //     printf("Enter value of element%d : %d\n", i+1, pointer[i]);
    // }

    // For Float
    // int size;
    // float *pointer;
    // printf("Enter how many size of data array do you want:");
    // scanf("%d", &size);
    // pointer = (float *)malloc(size*sizeof(float));
    
    // for(int i = 0; i < size; i++){
    //     printf("Enter value of element%d :", i+1);
    //     scanf("%f", &pointer[i]);
    // }

    // for(int i = 0; i < size; i++){
    //     printf("Enter value of element%d : %.2f\n", i+1, pointer[i]);
    // }

    // For Char //not working for me currently but i will get it screw...
    // int size;
    // char *pointer;
    // free(pointer);
    // printf("Enter how many size of data array do you want:");
    // scanf("%d", &size);
    // pointer = (char *)malloc(size*sizeof(char));
    // printf("%u----------<<<>.", pointer);
    // if(pointer != NULL){
    //     for(int i=0; i<size; i++){
    //         printf("Enter value of element");
    //         scanf("%c", &pointer[i]);
    //     }

    //     for(int j = 0; j < size; j++){
    //         printf("Enter value of element%d : %c\n", j+1, pointer[j]);
    //     }
    // }

    // // calloc()
    // float *pointer;
    // int size;
    // printf("Enter the size of the array do you want:");
    // scanf("%d", &size);
    // pointer = (float*)calloc(size, sizeof(float)); //Allocates Contiguous space in memory for 30 blocks
    // if(pointer != NULL){
    //     for(int i=0; i<size; i++){
    //         printf("Enter value of element%d : ", i+1);
    //         scanf("%f", &pointer[i]);
    //     }

    //     for(int j = 0; j < size; j++){
    //         printf("Enter value of element%d : %.2f\n", j+1, pointer[j]);
    //     }
    // }else{
    //     printf("Not available space available");
    // }


    // int *pointer, size, *ponter2;
    // printf("Enter number of elements do you want to store:");
    // scanf("%d", &size);
    // pointer = malloc(size*sizeof(int));
    // for(int i = 0; i < size; i++){
    //     ponter2 = malloc(999696*sizeof(int));
    //     printf("Enter value of element%d", i+1);
    //     scanf("%d", &pointer[i]);
    // }
    
    // for(int i = 0; i < size; i++){
    //     printf("value of element%d = %d\n", i+1, pointer[i]);
    // }
    // free(ponter2);

    // realloc() function
    // int *pointer,size;
    // printf("Enter the size you want to take in array:");
    // scanf("%d", &size);
    // pointer = calloc(size, sizeof(int));
    
    // for(int i = 0; i < size; i++){
    //     printf("Enter value of element%d", i+1);
    //     scanf("%d", &pointer[i]);
    // }
    
    // for(int i = 0; i < size; i++){
    //     printf("value of element%d = %d\n", i+1, pointer[i]);
    // }
    // printf("do you want ot increase the size then enter new size");
    // scanf("%d", &size);
    // realloc(pointer, size*sizeof(int));
    // for(int i = 0; i < size; i++){
    //     printf("Enter value of element%d", i+1);
    //     scanf("%d", &pointer[i]);
    // }
    
    // for(int i = 0; i < size; i++){
    //     printf("value of element%d = %d\n", i+1, pointer[i]);
    // }

    return 0;

}