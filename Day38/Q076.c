#include <stdio.h>

int main() {
int a[10][10], r, c, i, j, flag = 0;
scanf("%d%d", &r, &c);
for(i = 0; i < r; i++) {
    for(j = 0; j < c; j++) {
        scanf("%d", &a[i][j]);
    }
}
if(r != c) {
    flag = 1;
} else {
    for(i = 0; i < r; i++) {
        for(j= 0; j < c; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        break;
    }
}
if(flag == 0) {
    printf("true");
} else {
    printf("false");
}
    return 0;

}
