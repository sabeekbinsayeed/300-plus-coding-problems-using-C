#include <stdio.h>
int main()
{
int n1=0;
int n2=1;
int term;
scanf("%d",&term);
int i;
int temp;

for (i=2;i<=term;i++)
{


      temp=n2;
    n2=n2+n1;

    n1=temp;


}
 printf("\n%d",n1);
    return 0;
}
