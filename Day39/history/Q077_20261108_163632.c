#include <stdio.h>

int main() {
int a[100][100], n, m, i, j, flag = 0;
scanf("%d%d", &n, &m);
for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
    }
}
for(i = 0; i < n; i++) {
    for(j = i + 1; j < n; j++) {
    if(a[i][i] = a[j][j]) {
        flag = 1;
        break;
    }    
    }
}
if(flag == 0)
printf("true");
else
printf("false");
    return 0;

}
