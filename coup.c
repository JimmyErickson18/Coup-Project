/**Author: James Erickson
 * November 7th, 2018
 * 
 **/

#include<stdio.h>
#include<stdlib.h>

int main(){

    const int duke = 1;
    const int captain = 2;
    const int assasin = 3;
    const int contessa = 4;
    const int inquisitor = 5;
    int numPlayer;
    int numcard;
    int treasury;
    char player;

    printf("How many players are there?\n");
    scanf("%i", &numPlayer);

    int **coup = (int **)malloc(sizeof(int*)*numPlayer);
    for(int i=0; i<numPlayer; i++){
        coup[i] = malloc(sizeof(int)*6);
    }

    char *players = malloc(sizeof(char)*numPlayer);

    printf("Please enter your name\n");
    scanf("%c", &players[0]);

    for(int i=1; i<numPlayer; i++){
        printf("Please enter next Player's name\n");
        scanf("%c", &players[i]);
    }

    int card1, card2;

    printf("The card reference values are:\nDuke:1\nCaptain:2\nAssasin:3\nContessa:4\nInquisitor:5\n");

    printf("What is your first card? (all lowercase)");
    scanf("%i", &card1);
    printf("What is your second card? (all lowercase)");
    scanf("%i", &card2);

    for(int i=0; i<6; i++){
        if(i!=card1 && i!= card2){
            coup[0][i] = 0;
        }
        else{
            coup[0][card1] = 1;
            coup[0][card2] = 1;
        }
    }
    
    return 0;
}