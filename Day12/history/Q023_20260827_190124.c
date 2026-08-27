#include <stdio.h>

int main() {
int days , fine;
printf("number og late days: ");
scanf("%d", &days);
if (days <= 5) {
    fine = days * 2;
    printf("fine = ₹ %d", fine);
} else if (days <= 10) {
    printf("fine = ₹ %d", fine);
} elase if (days <= 30) {
    printf("membership cancelled");
}
    return 0;

}
