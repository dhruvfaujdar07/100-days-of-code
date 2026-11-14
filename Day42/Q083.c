#include <stdio.h>

int main() {
char str[100];
int i, vowels = 0, consotants = 0;
scanf("%s", str);
for(i = 0; str[i] != '\0'; i++) {
    if(str[i] == 'a' || str[i] == 'e' ||
    str[i] == 'i' || str[i] == 'o' ||
    str[i] == 'u' || str[i] == 'A' ||
    str[i] == 'E' || str[i] == 'I' ||
    str[i] == 'O' || str[i] == 'U') {
        vowels++;
    } else if((str[i] >= 'a' && str[i] <= 'z') ||
    (str[i] >= 'A' && str[i] <= 'Z')) {
        consotants++;
    }
}
printf("vowels=%d, consonants=%d", vowels, consotants);
    return 0;

}
