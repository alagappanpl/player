#include<stdio.h>
#include<string.h>
int main(void)
{
char s[1000];
scanf("%s",&s);
strcat(s,".");
printf("%s",s);
return 0;
}
