#include <stdio.h>

int main() {
int n, key;
scanf("%d", &n);
int arr[n];
for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
scanf("d", &key);

int low = 0;
int high = n- 1;
int found = -1;

while(low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == key) {
        found = mid;
        break;
    } else if (arr=[mid] < key) {
        low = mid + 1;
    } else {
        high = mid - 1;
    } 
    
}
if (found != -1)
printf("found at index %d", found);
else
printf("not found");
    return 0;

}
