//Make a function named check_array() which will take an array of integers and the size of that array N. It will return a boolean type whether this array has all values from 1 to N or not.
#include <stdio.h>
#include<stdbool.h>
bool check_array(int ar[],int size)
{
    int i;
    bool flag=true;
    for (i=0;i<size;i++)
    {
        if (ar[i]!=i+1)
        {
            flag=false;
            break;
        }
    }
    return flag;
}
int main()
{
    int size=5;
    int ar[]={1,2,3,4,5};
    bool result=check_array(ar,size);
    printf("%B\n", result);
    printf("%d\n", result);
    return 0;
}
