/*

Write a program in C to display the n terms of harmonic series and their sum

1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms


*/

#include <stdio.h>
int main()
{

int n;
scanf("%d",&n);

int sum=0;
int i=1;

while (i<=n)
{
    sum=sum+ i/1;
    i++;
}

printf("%d",sum);





    return 0;
}
