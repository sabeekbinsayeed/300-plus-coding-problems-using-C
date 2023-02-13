
//a="red" b ="blue" strcpy (a,b)  a= blue b=blue

#include <stdio.h>
int main()
{

    char a[100],b[100];
    scanf("%s",&a);
    scanf("%s",&b);
  printf("\n before copy: %s %s",a,b);
  strcpy(a,b);
/*
    int length=strlen(b);

    int i;
    for (i=0;i<length;i++)
    {
        a[i]=b[i];
    }

    a[i]='\0';

    */

    printf("\n after copy: %s %s",a,b);





    return 0;
}
