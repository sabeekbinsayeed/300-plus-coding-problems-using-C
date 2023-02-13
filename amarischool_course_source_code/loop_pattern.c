#include <stdio.h>
int main()
{
int i,j,number,line_number=9;
printf("give number: \n");
scanf("%d",&number);



for (i=1;i<=line_number;i++)
{
    for (j=1;j<=i;j++)
    {
printf("%d ",number);
    }
    printf("\n");
}

    return 0;
}
