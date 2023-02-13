#include <stdio.h>
int main()
{

char ch[100];
gets(ch);
int i;
int count=0;
int word=1;

for (i=0;i<strlen(ch);i++)
{

if (ch[i]==' ')
{
    if (word==1)
    {
          count++;
          word=0;
    }


}
else

{
    word=1;
}

}
count=count+1;

printf("%d",count);

    return 0;
}
