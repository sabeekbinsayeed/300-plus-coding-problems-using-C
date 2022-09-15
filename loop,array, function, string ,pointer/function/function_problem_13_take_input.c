//Write a function named take_input() which will take an array and its size. This function will take input of that array. After that print those values in the main() function.
#include <stdio.h>
void take_input(int ar[],int size)
{
    int i;
    for (i=0;i< size;i++)
    {
        scanf("%d",&ar[i]);
    }
}
int main()

{

    int ar[5];
    int size=5;
    take_input(ar,size);
    int i;
    for (i=0;i<size;i++)
    {
        printf("%d ",ar[i]);
    }





    return 0;
}
