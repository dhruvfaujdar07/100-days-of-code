//write a program to find the sum of series: 2/3 + 4/7 + 6/11 + 8/15... up to n terms.

#include <stdio.h>

int main() {
int n, i;
float sum = 0;
int num = 2, den = 3;
scanf("%d", &n);
for(i = 1; i <= n; i++) {
    sum = sum + (float)num / den;
    num = num + 2;
    den = den + 4;
}
printf("approximate sum:%.2f", sum);
    return 0;

}
