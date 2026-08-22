//write a program to input a year and check whether it is a laep year or not using contitional statements.

#include <stdio.h>

int main() {
int year;
scanf("%d", &year);
if(year % 4 == 0) {
    printf("Laep Year");
} else {
    printf("not a leap year");
}

    return 0;

}
