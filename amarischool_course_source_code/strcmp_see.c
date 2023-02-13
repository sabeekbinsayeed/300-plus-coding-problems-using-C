
#include <stdio.h>

int main()
{

    char ch[100],chh[100];
    scanf("%s %s",&ch,&chh);

    int length=strlen(ch);
    int length_second=strlen(chh);
    int small;
    if (length< length_second)
    {
        small=length;
    }
    else
    {
        small=length_second;
    }


    int i,j=0,val;
    for (i=0; i<=small; i++)
    {
        if (ch[i]<chh[i])
        {
            val=-1;
            break;
        }
        else if (chh[i]<ch[i])
        {
            val=1;
            break;
        }
        else
        {
            val=0;

        }


    }


    printf("%d",val);







    return 0;
}


