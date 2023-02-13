//https://vjudge.net/contest/499108#problem/F
//https://codeforces.com/problemset/problem/1167/A

#include <stdio.h>
int main()
{

    char ch[100];
    scanf("%s",&ch);
    int i=0;
    int length=strlen(ch);
    if (length<11)
    {
        printf("NO");
        return 0;
    }
    if ( ch[0]=='8' && length==11)
    {
        printf("YES");
        return 0;
    }
    if ( ch[0]!='8' && length==11)
    {
        printf("NO");
        return 0;
    }

    if (length>11)
    {
        int start=0;
        while (i<length)
        {
            if (ch[start]=='8')

            {

                if (length>=11)
                {
                    printf("YES");
                    return 0;
                }
                else
                {
                    printf("NO");
                    return 0;
                }
            }
            start++;
            i++;




            i++;
        }
    }



    return 0;
}
