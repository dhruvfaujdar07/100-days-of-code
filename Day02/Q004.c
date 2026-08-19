//write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>

int main() {
float radius, area, circumference;
float pi = 3.14;

scanf("%f", &radius);

area = pi * radius * radius;
circumference = 2 * pi * radius;

printf("area = %.2f\n", area);
printf("circumference = %.2f\n", circumference);
return 0;

}
