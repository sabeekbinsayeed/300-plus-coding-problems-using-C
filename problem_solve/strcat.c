
#include <stdio.h>

int main()
{

    char ch[100],chh[100];
    scanf("%s %s",&ch,&chh);

    int length=strlen(ch);
    int size=(length)+strlen(chh);

     int i,j=0;;
    for (i=length;i<size;i++)
    {
       ch[i]=chh[j];
       j++;
    }
   ch[i]='\0';



    printf("%s %s",ch,chh);







    return 0;
}
