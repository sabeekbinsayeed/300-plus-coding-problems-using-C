#include <stdio.h>
int main()
{

char c[100];
scanf("%s",&c);
char temp;
int length=strlen(c);
temp=c[0];
c[0]=c[length-1];
printf("%s",c);
    return 0;
}
