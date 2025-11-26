#include<stdio.h>
#define ELEMENTS 5

void inputArray(int el, int array[el]) {
    for (int i = 0; i < el; i++) {
        printf("Element for index %d: ", i);
        scanf("%d", &array[i]);
    }
}

float mean(int a[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total+= a[i];
    }
    return (float)total/size;
}


int main() {
    int arr[ELEMENTS];

    inputArray(ELEMENTS, arr);
    float m = mean(arr, ELEMENTS);

    printf("Mean of the given array is %.2f\n", m);
    return 0;
}