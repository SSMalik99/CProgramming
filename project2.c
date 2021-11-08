#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// <<<<<<<<<<<<<<<<----------------Snack Water Gun Game--------->>>>>>>>>>>>>>>>>>>>>
// snake water gun---> snake->kill->water water->gun gun->sanke
int snakeWaterGun(char you, char computer){

    // Draw
    if(you == computer){
        return 0;
    }

    // you win
    if( 
        (you == 's' && computer=='w') || 
        (you == 'w' && computer=='g') || 
        (you == 'g' && computer=='s')){
            return 1;
        }
    
    // computer win
    if( 
        (you == 'w' && computer=='s') || 
        (you == 'g' && computer=='w') || 
        (you == 's' && computer=='g')){
            return -1;
    }

}
int main(){
    char you, computer;
    int number, result;
    int startGame = 1;
    // User choice
    while(startGame == 1){
        fflush(stdin);
        printf("Enter you choice s for Snake, w for water or g for gun : ");
        scanf("%c", &you);

        // Computer choice
        srand(time(0));
        number = rand()%100+1;
        if(number < 33){
            computer = 's';
        }else if(number < 66){
            computer = 'w';
        }else{
            computer = 'g';
        }

        result = snakeWaterGun(you, computer);
        switch (result){
        case 1:
            printf("You selected %c and computer select %c\n", you, computer);
            printf("You Win!\n");
            break;
        
        case -1:
            printf("You selected %c and computer select %c\n", you, computer);
            printf("You Lost!\n");
            break;
        case 0:
            printf("You selected %c and computer select %c\n", you, computer);
            printf("It's a Draw!\n");
            break;
        default:
            printf("Some error occured at our platform please try after some time\n");
            printf("It's a Draw!\n");
            break;
        }

        printf("Press 1 to start again or 0 to quit : ");
        scanf("%d", &startGame);
    }

    return 0;

}