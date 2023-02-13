
/*

Write a function named set_min_max() which will take two values in such a way so that if you change the value, it will be affected to the original one also. Then set the minimum value of them to the first one, and maximum value to the second one
*/
#include <stdio.h>
void set_min_max(int *a,int *b)
{
    int max,min;
    if (*a>*b)
    {
        max=*a;
        min=*b;
    }
    else{
        max=*b;
        min=*a;
    }
    *a=min;
    *b=max;

}
int main()
{

    int a=3,b=1;
    printf("before a:%d b: %d\n",a,b);
    set_min_max(&a,&b);
    printf("before a:%d b: %d\n",a,b);





    return 0;
}




