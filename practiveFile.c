#include<stdio.h>

typedef struct employee{
    char name[30];
    int salary;
}employee;

int main(){

    // Write a program to read three integers from a file.
    // Variable declaration...
    // int num1, num2, num3;
    // FILE *filePointer;

    // // Opening and reading file
    // filePointer = fopen("./trialFiles/intTrial.txt","r");
    // fscanf(filePointer, "%d", &num1);
    // fscanf(filePointer, "%d", &num1);
    // fscanf(filePointer, "%d", &num3);
    // fclose(filePointer); // closing the opened file...

    // // Showing Output...
    // printf("Numeber1 = %d\n", num1);
    // printf("Numeber2 = %d\n", num2);
    // printf("Numeber3 = %d\n", num3);


    // Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable and well-formatted.
    // FILE *filePointer;
    // int num;
    // printf("Enter the numebr for the table : ");
    // scanf("%d", &num);

    // // insert table in the file...
    // filePointer = fopen("./trialFiles/table.txt", "w");
    // for(int i = 0; i < 10; i++){
    //     fprintf(filePointer, "%d", (num*(i+1)));
    //     fprintf(filePointer, "%c", '\n');
    // }
    // fclose(filePointer);

    // // takes the data from the file...
    // filePointer = fopen("./trialFiles/table.txt", "r");
    // printf("Table of %d:\n", num);
    // char ch; //to read the character from the file
    // while(1){
    //     ch = fgetc(filePointer);
    //     if(ch == EOF){
    //         break;
    //     }
    //     printf("%c", ch);
    // }
    // fclose(filePointer);


    // Write a program to read a text file character by character and write its content twice in a separate file.

    // FILE *filePointer, *copyFilePointer;
    // char ch, *mainContent;
    
    // copyFilePointer = fopen("./trialFiles/copiedFile.txt", "a");
    // for(int i = 0; i < 2; i++ ){
    //     filePointer = fopen("./trialFiles/trial.txt", "r");
    //     while(1){
    //         ch = getc(filePointer);
    //         if(ch == EOF){
    //             fputc('\n', copyFilePointer);
    //             break;
    //         }
    //         fputc(ch, copyFilePointer);
    //     }    
    //     fclose(filePointer);
    // }


    /*
    Take name and salary of two employees as input from the user and write them to a text file in the following format:
    name1, 3300
    name2, 7700
     */
    // employee emp[2];
    // FILE *filePointer;
    // filePointer = fopen("./trialFiles/employeeData.txt", "a");
    // for(int i = 0; i < 2 ; i++){
    //     printf("Enter name for employee%d:", (i+1));
    //     scanf("%s", &emp[i].name);
    //     printf("Enter Salary for employee%d:", (i+1));
    //     scanf("%d", &emp[i].salary);
    //     fprintf(filePointer, "%s, %d", emp[i].name, emp[i].salary);
    //     fputc('\n', filePointer);
    // }
    // fclose(filePointer);

    // Write a program to modify a file containing an integer to double its value.
    // If old value = 2, then new file value = 4
    // FILE *filePointer;
    // int num;
    // printf("Starting is Here...\n");
    // // reading integer
    // filePointer = fopen("./trialFiles/intTrial.txt", "r");
    // fscanf(filePointer,"%d", &num);
    // fclose(filePointer);
    // printf("Old Number : %d\n", num);
    
    // // Updating integer;
    // filePointer = fopen("./trialFiles/intTrial.txt", "w");
    // fprintf(filePointer,"%d", (num*2));
    // fclose(filePointer);
    // printf("Everything is done...\n");
    
    // // re-reading number
    // filePointer = fopen("./trialFiles/intTrial.txt", "r");
    // fscanf(filePointer,"%d", &num);
    // fclose(filePointer);
    // printf("New Number : %d\n", num);

    return 0;

}