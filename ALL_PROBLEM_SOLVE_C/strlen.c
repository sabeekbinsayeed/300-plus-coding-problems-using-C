#include <stdio.h>
int main()
{


char ch[100];
scanf("%s",&ch);
int i=0;
while (ch[i]!='\0')
{
    i++;
}

printf("%d",i);
printf("\n%d",strlen(ch));


    return 0;
}
