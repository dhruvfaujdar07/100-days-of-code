#include <stdio.h>

int main() {
int  num, first, last, temp, divisor = 1, middle,result;
scanf("%d", &num);
last = num % 10;
temp = num;
while (temp >= 10)
{
    temp = temp / 10;
    divisor = divisor * 10;
}
first = temp;
middle = (num % divisor) / 10;
result = last * divisor + middle * 10 + first;
printf("%d", result);
    return 0;

}
