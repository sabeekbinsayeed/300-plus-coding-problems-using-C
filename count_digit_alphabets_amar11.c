#include <stdio.h>
int main()
{

    char ch[100];
    scanf("%s",&ch);
    int length=strlen(ch);
    int i;
    int alphabet=0,numbers=0,rest=0;
    for (i=0;i<length;i++)
   {

       if ((ch[i]>='a') && (ch[i]<='z'))
{
    alphabet++;
}
else  if ((ch[i]>='A') && (ch[i]<='Z'))
{
    alphabet++;
}

else if ((ch[i]>='1') && (ch[i]<='9'))
{
   numbers++;
}

else
{
    rest++;
}
   }

   printf("alphabets %d numbers %d rest %d\n",alphabet,numbers,rest);

    return 0;
}
