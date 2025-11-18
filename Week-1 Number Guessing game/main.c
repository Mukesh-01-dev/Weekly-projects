#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 101

int main() {
    srand(time(NULL));
    int randomNum = rand() % MAX;
    int guessedNum;
    int TotalGuess = 0;
    while (1) {
        printf("Guess a number from 1-100\n");
        int status = scanf("%d", &guessedNum);
        //For handling non-integet input
        if (status != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (guessedNum > MAX || guessedNum <= 0){
            printf("Your guess number %d is out of bounds\n", guessedNum);
            continue;
        }

        if (guessedNum == randomNum) {
            printf("You have guess the right num: %d \n", guessedNum);
            printf("You have guessed %d times", TotalGuess);
            exit(0);
        } else if (guessedNum > randomNum) {
            printf("Your guess: %d is too high\n", guessedNum);
        } else if (guessedNum < randomNum) {
            printf("Your guess: %d is too low\n", guessedNum);
        }
        TotalGuess++;
    }
    return 0;
}