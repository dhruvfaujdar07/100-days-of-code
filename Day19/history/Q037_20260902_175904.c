#include <stdio.h>

int main() {
int a, b, lcm;
scanf("%d %d", &a, &b);
if (a > b)
lcm = a;
else
lcm = b;
wehile (1)
{
    if (lcm % a == 0 && lcm % b == 0)
    {
        printf("%d", lcm);
        break;
    }
    lcm++
}
    return 0;

}
