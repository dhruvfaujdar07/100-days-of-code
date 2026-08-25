//write a program to display the day of week based on a number (1-7) using switch-case.

#include <stdio.h>

int main() {
int day;
printf("enter day(1-7) :");
scanf("%d", &day);

switch (day) {
    case 1 : printf("monday");
    break;
    case 2 : printf("tuesdsy");
    break;
    case 3 : printf("wednesday");
    break;
    case 4 : printf("thursday");
    break;
    case 5 : printf("friday");
    break;
    case 6 : printf("saturday");
    break;
    case 7 : printf("sunday");
}
    return 0;

}
