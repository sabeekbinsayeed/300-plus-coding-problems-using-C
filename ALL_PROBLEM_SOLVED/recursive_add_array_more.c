// takes a value and add upto that value for an array

#include <stdio.h>
int add_recursive(int ar[],int size){



    if (size==-1) return 0;
    return ar[size] +add_recursive(ar,size-1);
}
int main()
{

int arr[5]={1,2,3,4,5};
int values=add_recursive(arr,5-1);
printf("%d",values);

    return 0;
}


