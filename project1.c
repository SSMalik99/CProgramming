// Project 1: Number Guessing Game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guess, number, nguessess = 1; 
    // Generate random number
    srand(time(0));
    number = rand()%100+1;
    
    do{
        printf("Guess a number between 1 to 100\n");  
        scanf("%d", &guess);
        if(guess > number ){
            printf("Please enter a lower number\n");
        }else if(guess < number){
            printf("Please enter a higher number\n");
        }else{
            printf("You guess the number in %d attempts", nguessess);
        }
        nguessess++;
    } while (guess!=number);
    
    


    return 0;

}