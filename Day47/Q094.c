#include <stdio.h>
#include <string.h>
int main() {
char str[200], longest[200] = "";
char *word;
fgets(str, sizeof(str), stdin);
word = strtok(str, " \n");
while(word != NULL) {
if(strlen(word) > strlen(longest)) {
strcpy(longest, word);
}
word = strtok(NULL, " \n");
}
printf("%s", longest);
return 0;
}
