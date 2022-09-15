#include <stdio.h>
int main()
{
    char ch[100];
    scanf("%s",&ch);
    int length=strlen(ch);
    int i;
    char c;
    for (i=0;i<length;i++)
    {
        c=ch[i];
       if ((c>='A')&& (c<='Z'))
{
 ch[i]=ch[i]+32;
}
    };

    printf("%s",ch);

    return 0;
}
