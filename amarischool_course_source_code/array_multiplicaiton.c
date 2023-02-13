#include <stdio.h>
int main()
{
int size;
printf("Enter the size of array\n");
scanf("%d",&size);
int ar[size];
int product=1;
int i;
for (i=0;i<size;i++)
{
    scanf("%d",&ar[i]);
}

for (i=0;i<size;i++)
{
    product=product*ar[i];
}
printf("%d",product);
    return 0;
}

