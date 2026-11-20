#include <stdio.h>
#include <stdio.h>
int main() {
char str[100], temp;
int i, j, start = 0, len;
fgets(str, sizeof(str), stdin);
len = strlen(str);
for(i = 0; i <= len; i++) {
if(str[i] == ' ' || str[i] == '\0')
{
j = i - 1;
while(start < j) {
temp = str[start];
str[start] = str[j];
str[j] = temp;
start++;
j--;
}

start = i + 1;
}
}
printf("%s", str);
return 0;
}
