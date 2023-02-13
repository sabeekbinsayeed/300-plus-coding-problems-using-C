#include <stdio.h>
#include <math.h>
int main()
{

    int radius;
    double area;
    double pi=M_PI;
    printf("radius : ");
    scanf("%d",&radius);

    area=pi*radius*radius;
    printf("area of a circle %lf",area);
}

