#include<stdio.h>

// Files are to use external files inside our program
// To use file we first need to declare FILE *pointer ;
// Then pointe = fopen("path-to-file", mode)
// Mode can be "r" => read mode, "w" => write mode, "rb" => read binary mode, "wb" => write binary, "a" => append mode

/*
fopen will return null if no file or directory is available to open
fscanf(filePointer, "%d/%s/%u/%c", &variable) => to put file content in the variable 
fprintf(filePointer, "content type", varibel/date) => will put data in the file
fgetc(filePointer) ===> to get the single character from the file
again fgetc(filePointer) will return new character from the file..

fputc(characterWhichNeedsToAdd, filePointer) ===> this will put a character in the file...

to access whole the file with the character by character
while(true){
    ch = fgetc(filePointer);
    if(ch == EOF){
        break
    }
    // do what you want...
}
what is EOF =>>> "end of file" predefined in c...

in the last do most adviceable thing...
fclose(filePointer); //this will close the open file...
*/


int main(){

    // Let do practically
    FILE *filePointer;
    // char stringContent[100];
    // filePointer = fopen("./trialFiles/trial.txt", "r");

    // if(filePointer == NULL){
    //     printf("This file is not available.\n");
    // }else{
    //     // printf("DO what you want\n");
    //     fscanf(filePointer,"%s", stringContent);
    //     fclose(filePointer);
    //     // Content in the file = This is first reading style
    //     printf("%s", stringContent);
    //     // output = This ---> same as scanf function....

    // }

    // let add ccontent to the file with fprintf()
    // filePointer = fopen("./trialFiles/trialCreate.txt","w");
    // fprintf(filePointer, "%s", "Thisismy first created and content added file int the c language");
    // fclose(filePointer);
    // working correctly

    // Lets open in append mode
    // filePointer = fopen("./trialFiles/trialCreate.txt","a");
    // fprintf(filePointer, "%s", "\nThis is my appended text not the newer one\n");
    // fclose(filePointer);
    // Working correctly


    // putc and getc willl work same as fputc and fgetc 
    // filePointer = fopen("./trialFiles/addCharacter.txt", "r");
    // // Content in file = This file is for the character get and put
    // printf("%c", fgetc(filePointer)); // output ::: T
    // printf("%c", fgetc(filePointer)); // output ::: h (this line will read next character)...
    // fclose(filePointer);

    // filePointer = fopen("./trialFiles/writeCharacter.txt", "w");
    // fputc('c',filePointer);
    // working correctly

    // lets read whole content of the file
    // Working correctly
    // filePointer = fopen("./trialFiles/addCharacter.txt", "r");
    // if(filePointer != NULL){
    //     char ch;
    //     while(1){
    //         ch = fgetc(filePointer);
    //         if(ch == EOF){
    //             break;
    //         }
    //         printf("%c", ch);
    //     }
    // }else{
    //     printf("This file is not available");
    // }

    return 0;

}