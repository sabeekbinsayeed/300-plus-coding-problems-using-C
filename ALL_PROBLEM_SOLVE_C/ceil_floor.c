#include <stdio.h>
#include <math.h>

int main () {
   float num;

  printf("number\n");
    scanf("%f",&num);

   double ceil_value=ceil(num);
     double floor_value=floor(num);


   printf ("ceil of %f is  = %d\n",num, (int)ceil_value);
     printf ("floor of %f is = %d\n",num, (int)floor_value);

   return(0);
}
