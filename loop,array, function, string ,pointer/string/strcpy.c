#include <stdio.h>

int main()
{

    char ch[100],chh[100];
    scanf("%s %s",&ch,&chh);

    int length=strlen(chh);

    int i=0;
    for (i=0;i<length;i++)
    {
        ch[i]=chh[i];
    }
    ch[i]='\0';


    printf("%s %s",ch,chh);

    printf("%d",strlen(ch));


    return 0;
}
