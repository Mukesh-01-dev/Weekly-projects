#include<stdio.h>
#include <stdlib.h>

void displayBoard(char board[]) {
    printf("\n");
    printf("%c | %c | %c\n", board[0], board[1], board[2]);
    printf("---------\n");
    printf("%c | %c | %c\n", board[3], board[4], board[5]);
    printf("---------\n");
    printf("%c | %c | %c\n", board[6], board[7], board[8]);
    printf("\n");
}

int valiadateChoice(char board[], int choice, int player) {
    char mark = player == 1 ? 'X' : 'O';
    if (board[choice] != 'X' && board[choice] != 'O' ) {
        board[choice] = mark;
        return 1;
    }
    return 0;
}

int getValidChoice() {
    int choice;
    int status;

    while (1) {
        printf("Enter your move (1-9): ");

        status = scanf("%d", &choice);

        // Handle NON-NUMBER input
        if (status != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        // Convert to 0–8 index
        choice--;

        // RANGE CHECK
        if (choice < 0 || choice > 8) {
            printf("Invalid choice. Enter a number between 1 and 9.\n");
            continue;
        }

        return choice; 
    }
}

int matchDecision(char board[]) {
    int wins[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };

    for (int i = 0; i < 8; i++) {
        int a = wins[i][0];
        int b = wins[i][1];
        int c = wins[i][2];

        if ((board[a] == board[b]) && (board[b] == board[c])) {
            if (board[a] == 'X') return 1;
            if (board[a] == 'O') return 2;
        }
    }

    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') return 0;
    }

    return -1;
}


int main() {
    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int player = 1;

    while(1) {
        displayBoard(board);
        printf("Player %d: Enter a number from 1-9\n", player);

        int choice = getValidChoice();

        if(!valiadateChoice(board, choice, player)) {
            printf("Spot already taken! Try again.\n");
            continue;
        }

        int winner = matchDecision(board);
        if (winner == 1 || winner == 2) {
            displayBoard(board);
            printf("The winner is player %d\n", winner);
            exit(0);
        } else if (winner == -1) {
            displayBoard(board);
            printf("The match is a draw\n");
            exit(0);
        }

        player = player == 1 ? 2 : 1;
    }
    return 0;
}