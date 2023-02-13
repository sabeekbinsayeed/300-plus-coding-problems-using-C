#include <stdio.h>
int main()
{
int number;
scanf("%d",&number);
int ar[100];
int rest;
int i=0;

while (number)
{
    rest=number%2;
    number=number/2;
    ar[i]=rest;
    i++;
    printf("%d %d\n",ar[i-1],number);
}

int j;
for (j=i-1;j>=0;j--)
{
    printf("%d",ar[j]);
}



    return 0;
}
