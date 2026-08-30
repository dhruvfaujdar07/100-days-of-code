#include <stdio.h>

int main() {
int n, origional, reverse = 0, rem;
scanf("%d", &n);
origional = n;
while (n != 0)
{
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n = n / 10;
}
if (origional == reverse)
printf("palindrome");
else
printf("not Palindrome");
    return 0;

}
