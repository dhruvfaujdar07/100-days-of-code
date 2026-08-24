//write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main() {
int a, b, c, d;
float r1, r2;

scanf("%d %d %d", &a, &b, &c);

d = b*b - 4*a*c;

if(d > 0) {
    r1 = (-b + sqrt(d)) / (2*a);
    r2 = (-b - sqrt(d)) / (2*a);

    printf("roots are real and different: %.0f", r1, r2);
    
}
else if(d == 0) {
    r1 = -b / (2.0*a);
    printf("roots are real and same: %.0f", r1);
}
else {
    printf("roots are complex");
}
    return 0;

}
