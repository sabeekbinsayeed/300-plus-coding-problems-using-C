/*
Take an integer N as input and write a for loop that prints all values from 1 to N that are divided by 2 and 7.


*/

#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int i;
for (i=1;i<=n;i++)
{
    if (i%2==0 && i%7==0)
    {
        printf("%d\n",i);
    }

}
    return 0;
}
