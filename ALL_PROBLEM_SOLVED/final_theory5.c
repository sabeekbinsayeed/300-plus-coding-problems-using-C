/*
Write a C program that takes a string as input and tell if that string contains all digits from 0 to 9. The maximum length of string could be 1000.


*/


#include <stdio.h>
int main()
{

    char ch[1000];
    gets(ch);
    int flag[10]={0};

    int i;


 int val;
    int length=strlen(ch);
    for (i=0;i<length;i++)
    {

        val=ch[i]-48;
        if (val>=0 && val <=9)
        {
            flag[val]=1;
        }

    }



    int verify=1;
    for (i=0;i<10;i++)
    {
        if (flag[i]!=1)
        {
            verify=0;

        }
    }


    if (verify==1)
    {
        printf("YES");

    }
    else
    {

        printf("NO");
    }


    return 0;
}
