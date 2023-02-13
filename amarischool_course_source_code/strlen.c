#include <stdio.h>
int main()
{
    char ch[100];
    gets(ch);

    int length=strlen(ch);
    printf("%d",length);
    /*
    int i=0;

    //abc

    while (ch[i]!='\0')
    {
        i++;
    }

printf("%d",i);

*/
    return 0;
}
