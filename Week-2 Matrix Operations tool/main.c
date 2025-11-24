#include<stdio.h>

int safeInputRange(int min, int max) {
    int x;
    while (1) {
        if (scanf("%d", &x) == 1 && x >= min && x <= max) {
            return x;
        }

        printf("Invalid input! Enter a number (%d - %d): ", min, max);

        while (getchar() != '\n');
    }
    return x;
}

void printMatrix(int r, int c, int a[r][c]) {
    printf("\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf(" %d ", a[i][j]);
            if (j != c - 1) printf("|");
        }
        printf("\n");
        if (i != r - 1) {
            for (int j = 0; j < c; j++) {
                printf("----");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void inputMatrix(int r, int c, int a[r][c]) {
    if (r == 0) {
        printf("No. of rows: ");
        scanf("%d", &r);
        printf("\n");
    }
    if (c == 0) {
        printf("No. of coloumns: ");
        scanf("%d", &c);
        printf("\n");
    }
    for (int rows = 0; rows < r; rows++) {
        for (int cols = 0; cols < c; cols++) {
            printf("Enter the number for [%d][%d]\n", rows, cols);
            int num = safeInputRange(0, 1000);
            a[rows][cols] = num;
        }
    }
}

int main() {
    int array2D[4][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    // int array2D[3][3] = {};

    int cols = sizeof(array2D[0])/sizeof(array2D[0][0]);
    int rows = sizeof(array2D)/sizeof(array2D[0]);

    printMatrix(rows, cols, array2D);
    return 0;
}