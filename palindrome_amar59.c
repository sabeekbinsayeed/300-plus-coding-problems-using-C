#include <stdio.h>
#include <stdlib.h>
int main()
{

char ch[100];
scanf("%s",&ch);

int length=strlen(ch);

int i,m;
int flag=1;
m=length-1;
for (i=0;i<length;i++,m--)
{
if (ch[i]!=ch[m])
{
    flag=0;
}
}

if (flag==1)
{
    printf("palindrome");
}
else
{
    printf("not palindrome");
}

    return 0;
}
