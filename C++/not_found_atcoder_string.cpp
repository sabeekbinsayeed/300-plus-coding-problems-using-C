//https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
#include <bits/stdc++.h>
int main()
{
    char ch[100001];
    fgets(ch,100001,stdin);
    int length=strlen(ch);
    char chl;
    ch[length]='\0';
    int flag;
    char saved=' ';

for (char i='a';i<='z';i++)
{

flag=1;
    for (int j=0;j<length;j++)
    {
        chl=ch[j];
     //   printf("%c %c\n",chl,i);
        if (chl==i)
        {
            flag=1;
           break;


        }
        else

        {
            flag=0;
        }


    }
    if (flag==0)
    {
        saved=i;
        break;

    }

}
if (saved==' ')
{
printf("None\n");
}
else

{
    printf("%c",saved);
}


    return 0;
}
