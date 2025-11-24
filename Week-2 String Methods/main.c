#include<stdio.h>

int stringLen(char s[]) {
    int count = 0;
    while (s[count] != '\0') count++;
    return count;
}

void stringCopy(char dest[], char src[]) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

int stringCompare(char s1[], char s2[]) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char) *s1 - (unsigned char) *s2;
}

void reverseString(char s[]) {
    int j = stringLen(s) - 1;
    for (int i = 0; i < j; i++, j--) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main() {
    char s[] = "Mukesh";
    reverseString(s);
    printf("%s\n", s);
    return 0;
}