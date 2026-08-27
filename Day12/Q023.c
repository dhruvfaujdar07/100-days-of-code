//write a program to calculate library fine based on late days as follows:

#include <stdio.h>

int main() {
int days , fine;
printf("number of late days: ");
scanf("%d", &days);
if (days <= 5) {
    fine = days * 2;
    printf("fine = Rs %d", fine);
} else if (days <= 10) {
    fine = 10 + (days - 5) * 4;
    printf("fine = Rs %d", fine);
} else if (days <= 30) {
    fine = 30 + (days - 10) * 6;
    printf("fine = Rs %d", fine);
} else {
    printf("membership cancelled");
}
    return 0;

}
