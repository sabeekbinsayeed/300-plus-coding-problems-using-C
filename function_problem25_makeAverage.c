//Make a function named make_average() which will take an array of integers and the size of that array and return the average of those values.
#include <stdio.h>
float make_average(float a[],float size)
{
    float average;
    int i;
    float sum=0;
    for (i=0;i<size;i++)
    {

sum=sum+a[i];
    }
    average=sum/size;

    return average;
}
int main()
{
float a[]={1,2,3,4,5};
float size=5;
float average=make_average(a,size);
printf("%f",average);

    return 0;
}
