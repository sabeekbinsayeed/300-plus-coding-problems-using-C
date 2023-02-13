/*
sabeek
keebas
keebas
*/

#include <stdio.h>
int main()
{
char ch[100];
gets(ch);
char chh[100];


int length=strlen(ch);
int i;
int m=length-1;
for (i=0;i<length;i++)
{
chh[i]=ch[m];
m--;
}

chh[i]='\0';
for (i=0;i<length;i++)
{
ch[i]=chh[i];

}
printf("%s",ch);


    return 0;
}
