 //Write a program in C to display the cube of the number upto given an integer.
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i=1;
int cube;
while (i<=n)
{
    cube=i*i*i;
    printf("number %d  cube %d \n",i,cube);

    i++;
}


    return 0;
}
