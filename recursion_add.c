// takes a value and add upto that value

#include <stdio.h>
int add_recursive(int val){



    if (1==val) return 1;
    return val +add_recursive(val-1);
}
int main()
{
int val;
scanf("%d",&val);
int values=add_recursive(val);
printf("%d",values);

    return 0;
}
