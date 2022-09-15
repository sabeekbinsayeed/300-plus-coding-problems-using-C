#include <stdio.h>
/*
Write a C program to insert element in array at specified position.
Example
Input
Input array elements: 10 20 30 40 50
Input element to insert: 25
Input position where to insert: 3


*/
int main()
{
    int ar[6];
    int i;
    printf("Input array elements: \n");

    for ( i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
int number,index;
printf("Input array elements: \n");
scanf("%d",&number);
printf("Input array elements: \n");
scanf("%d",&index);

for ( i=5;i>=index;i--)
{
    ar[i]=ar[i-1];
}

ar[index-1]=number;
for ( i=0;i<6;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}
