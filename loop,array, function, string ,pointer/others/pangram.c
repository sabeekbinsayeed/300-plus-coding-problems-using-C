/*
https://codeforces.com/problemset/problem/520/A

input :
35
TheQuickBrownFoxJumpsOverTheLazyDog

output:
YES

input : abcd
output : NO
*/
#include <stdio.h>

int main()
{
    int length;
    scanf("%d",&length);
    char ch[100];
    scanf("%s",&ch);

    int counter[26]= {0};
    int exist;
    int i,j,val;
    if (length<26)
    {
        printf("NO\n");

        return 0;
    }

    else
    {

        for (i=0; i<26; i++)
        {
            exist=0;
            val=0;


            for (j=0; j<length; j++)
            {

                val=ch[j]-'a';
                if (val<0)
                {


                    val=ch[j]-'A';
                }

                if (val==i)
                {
                    counter[i]=counter[i]+1;
                    exist=1;
                }
            }
            if (exist==0)
            {
               printf("NO\n");

                return 0;
            }
        }
    }

    printf("YES");


    return 0;
}
