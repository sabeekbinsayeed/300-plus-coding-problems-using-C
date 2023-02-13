#include <stdio.h>
int main()
{
int size;
printf("Enter the size of array\n");
scanf("%d",&size);
int ar[size];
int sum=0;
int i;
for (i=0;i<size;i++)
{
    scanf("%d",&ar[i]);
}

for (i=0;i<size;i++)
{
    sum=sum+ar[i];
}
printf("%d",sum);
    return 0;
}
