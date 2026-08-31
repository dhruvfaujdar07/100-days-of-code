#include <stdio.h>

int main() {
int n, origional, digit, sum = 0;
scanf("%d", &n);
origional = n;
while (n > 0) {
    digit = n % 10;
    sum = sum + (digit + digit * digit);
    n = n / 10;
}
if (sum == origional)
printf("Armstrong");
else
printf("Not Armstrong");
    return 0;

}
