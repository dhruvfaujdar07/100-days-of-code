#include <stdio.h>

int main() {
int days , fine;
printf("number of late days: ");
scanf("%d", &days);
if (days <= 5) {
    fine = days * 2;
    printf("fine = Rs %d", fine);
} else if (days <= 10) {
    fine = days * 4;
    printf("fine = Rs %d", fine);
} else if (days <= 30) {
    fine = days * 6
    printf("membership cancelled");
}
    return 0;

}
