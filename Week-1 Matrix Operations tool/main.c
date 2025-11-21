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
    //TODO
}

void inputMatrix(int r, int c, int a[r][c]) {
    for (int rows = 0; rows < r; rows++) {
        for (int cols = 0; cols < c; cols++) {
            printf("Enter the number for [%d][%d]\n", rows, cols);
            int num = safeInputRange(0, 1000);
            a[rows][cols] = num;
        }
    }
}

int main() {
    int rows = 3;
    int cols = 3;
    int array2D[rows][cols];
    inputMatrix(rows, cols, array2D);
    return 0;
}