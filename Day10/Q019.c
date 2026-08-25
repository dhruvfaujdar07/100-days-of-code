//write a program to classify a triangle as equilateral, isosceles, or sscalene based on its side length.

#include <stdio.h>

int main() {
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if (a == b && b ==c) {
    printf("Equilateral");
} 
 else if (a == b || b == c || a == c) {
    printf("Isosceles");
 }
 else {
    printf("scalene");
 }

    return 0;

}
