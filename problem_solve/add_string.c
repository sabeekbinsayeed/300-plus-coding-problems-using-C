#include <stdio.h>
int main()
{

int i=0,j=0,k=0;

char a[100],b[100],jogfol[101];
int hate=0;

scanf("%s",&a);
scanf("%s",&b);

strrev(a);
strrev(b);

int sum;

while (i<strlen(a) && j<strlen(b))
{

    int sum= (a[i]-'0')+ (b[i]-'0')+ hate;
    jogfol[k]=(sum%10)+'0';

    hate=sum/10;

    i++;
    j++;
    k++;

}

while (i<strlen(a))
{

     sum= (a[i]-'0')+ hate;
    jogfol[k]=(sum%10)+'0';

    hate=sum/10;
    i++;
    k++;

}

while (i<strlen(a) && j<strlen(b))
{

     sum= (a[i]-'0')+ hate;
    jogfol[k]=(sum%10)+'0';

    hate=sum/10;

    i++;

    k++;

}

if (hate>0)
{



    jogfol[k]=hate+'0';


    k++;

}

jogfol[k]='\0';



strrev(jogfol);

printf("%s",jogfol);



    return 0;
}
