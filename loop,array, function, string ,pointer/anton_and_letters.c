/*
https://codeforces.com/problemset/problem/443/A
*/
#include <stdio.h>

int main()
{

char ch[1000];
gets(ch);
char val,val2;
int count=0;
int count_duplicate=0;

int i=0,j;
for (i=1;i<strlen(ch)-1;i++)
{


    if (ch[i]>='a' && ch[i]<='z' )
    {



         count++;
        val=ch[i];

for (j=i-1;j>=0;j--)
{
    val2=ch[j];

    if (val2==val)
    {
        count_duplicate++;
        break;
    }

}


    }


}

int result=count-count_duplicate;
printf("%d",result);


    return 0;
}
