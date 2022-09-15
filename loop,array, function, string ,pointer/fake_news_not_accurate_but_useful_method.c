//https://codeforces.com/problemset/problem/802/G
// not correct_
// check whether specific letters are present or not
#include <stdio.h>
int main()
{
    char ch[1001];
    scanf("%s",&ch);
    int length=strlen(ch);
    int i=0;
    int flag_h=0,flag_e=0,flag_i=0,flag_d=0;
    if (length<=5)
    {
        printf("NO");
        return 0;
    }
    for (i=0;i<length;i++)
    {
        if (ch[i]=='h')
        {
            flag_h=1;

        }
         if (ch[i]=='e')
        {
            flag_e=1;

        }
         if (ch[i]=='i')
        {
            flag_i++;

        }
        if (ch[i]=='d')
        {

            flag_d=1;
        }

    }

    if (flag_h && flag_e && flag_d  && flag_i==2)
    {
        printf("YES");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

