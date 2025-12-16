#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the character to get Ascii value: ");
    if (scanf("%c", &ch) != 1) 
    {
        printf("Invalid input");
        return 1;
    }

    printf("The ASCII value of the character - %c is %d\n", ch, ch);

    return 0;
}