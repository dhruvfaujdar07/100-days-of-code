#include <stdio.h>

int main() {
int arr[100], n, i;
int largest, second;

scanf("%d", &arr[i]);
for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
largest = arr[0];
for(i = 0; i < n; i++) {
    if(arr[i] > largest) {
        largest = arr[i];
    }
}
second = 0;
for(i = 0; i < n; i++) {
    if(arr[i] < largest && arr[i] > second) {
        second = arr[i];
    }
}
printf("%d", second);
    return 0;

}
