#include <stdio.h>

int main() {
int a[100][100], n, m, i, j, sum = 0;
scanf("%d%d", &n, &m;);
for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
    }
}
for(i = 0; i < n; i++) {
    sum = sum + a[i][i];
}
printf("%d", sum);
    return 0;

}
