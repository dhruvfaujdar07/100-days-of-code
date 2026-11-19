#include <stdio.h>
#include <string.h>
int main() {
char s1[100], s2[100];
int count[256] = {0};
int i, flag = 1;
scanf("%s", s1);
scanf("%s", s2);
if(strlen(s1) != strlen(s2))
{
flag = 0;
}
else
{
for(i = 0; s1[i] != '\0'; i++)
{
count[(unsigned char)s1[i]]++;
count[(unsigned char)s2[i]]--;
}
for(i = 0; i < 256; i++) {
if(count[i] != 0)
{
flag = 0;
break;
}
}
}
if(flag == 1)
printf("Anagram");
else
printf("Not Anagram");
return 0;
}
