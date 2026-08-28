//write a program to implement a basic calcuulator using switch-case for +, -, /, %. 

#include <stdio.h>

int main() {
int a, b;
char op;
scanf("%d %d %c", &a, &b, &op);
switch (op) {
    case '+': 
    printf("%d", a + b);
    break;
    case '-':
    printf("%d", a - b);
    break;
    case '*':
    printf("%d", a * b);
    break;
    case '/':
    if(b != 0)
    printf("%d", a / b);
    else
    printf("cannot divided by zero");
    break;
    case '%':
    if(b != 0)
    printf("%d", a % b);
    else 
    printf("cannot divided by 0");
    break;
    default:
    printf("invalid operator")
}
    return 0;

}
