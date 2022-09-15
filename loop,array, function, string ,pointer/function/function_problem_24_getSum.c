//Make a function named make_sum() which will take two floating values as parameters and return their sum

#include <stdio.h>
float make_sum(float a, float b)
{
    float sum=a+b;
    return sum;
}
int main()
{
    float a=3.5;
    float b=4.5;
    float sum=make_sum(a,b);
    printf("%f",sum);

    return 0;
}
