//write a program to calculate simple and compound interest for given principal, rate, time.

#include <stdio.h>
#include <math.h>

int main() {
float p, r, t, si, ci;

scanf("%f %f %f", &p, &r, &t);

si = (p * r * t) / 100;
ci = p * pow(1 + r / 100, t) -p;
printf("simple intrest=%.0f, compound interest=%.1f", si, ci);
return 0;

}
