//https://codeworld19.blogspot.com/2020/05/digit-frequency-in-c-hacker-rank.html

#include <stdio.h>
int main()
{

    char ch[1000];
    scanf("%s",ch);
    int count=0;
    char val;
    int length=strlen(ch);
    int j;
    char i;
    for(i='0'; i<='9'; i++)
    {
        count=0;


        for (j=0; j<length; j++)
        {
            val=ch[j];
            if (val==i)
            {
                count++;
            }
        }
        printf("%d ",count);
    }


    return 0;
}
