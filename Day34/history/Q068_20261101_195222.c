#include <stdio.h>

int main() {
int n, a[100], pos, i;
scanf("%d", &n);
for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
}
scanf("%d", &pos);
for(i = pos; i < n; i++) {
    a[i] = a[i + i];
}
n--;
for(i = 0; i < n; i++) {
    printf("%d", a[i]);
}
    return 0;

}
