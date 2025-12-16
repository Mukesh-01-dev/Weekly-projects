#include<stdio.h>

int main(){
  float pi = 3.14;
  int radius;

  printf("Enter the radius of the circle: ");

  if (scanf("%d", &radius) != 1) {
    printf("Invalid input\n");
    return 1;
  }

  float area = pi * (radius * radius);
  float circumference = 2 * pi * radius;

  printf("The circumference of the circle is: %f\n", circumference);
  printf("The area of the circle is: %f", area);

  return 0;
}