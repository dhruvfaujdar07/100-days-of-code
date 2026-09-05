//write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
int n, origional, digit;
int sum = 0;
scanf("%d", &n);
origional = n;
while (n > 0) {
    digit = n % 10;
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact = fact * i;
    }
    sum = sum + fact;
    n = n / 10;
}
if (sum == origional)
printf("Strong number");
else
printf("not strong number")
    return 0;

}
