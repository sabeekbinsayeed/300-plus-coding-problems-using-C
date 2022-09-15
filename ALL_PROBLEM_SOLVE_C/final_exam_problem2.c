#include <stdio.h>
int main()
{
char ch[100];
int i=0;
gets(ch);
int count=0;
int length=strlen(ch);



for (i=0;i<length;i++)
{
    if (ch[i]=='a')
    {
        count++;

    }
}
int result;

int val=2*count -1;

if (length/2<count)
{
    result=length;
}
else
{
    result=val;
}


printf("%d\n",result);

    return 0;
}
