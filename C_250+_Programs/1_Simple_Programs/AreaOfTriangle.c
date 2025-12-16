#include <stdio.h>

int main()
{
    int height;
    int bredth;

    printf("Enter the height and breadth of Traingle: \n");
    if (scanf("%d", &height) != 1)
    {
        printf("Invalid input");
        return 1;
    }
    if (scanf("%d", &bredth) != 1)
    {
        printf("Invalid input");
        return 1;
    }

    int area = 0.5 * height * bredth;

    printf("The triangle of height %d and bredth %d\n", height, bredth);
    printf("The area of Triangle is %d", area);

    return 0;
}