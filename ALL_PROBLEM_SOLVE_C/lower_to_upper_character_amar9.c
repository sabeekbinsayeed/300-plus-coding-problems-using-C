#include <stdio.h>
int main()
{
char c;
scanf("%c",&c);
if ((c>='a')&& (c<='z'))
{
    c=c-32;
}
else if ((c>='A')&& (c<='Z'))
{
    c=c+32;
}
else
{
    printf("enter a character");
    return 0;
}

printf("%c",c);

    return 0;
}
