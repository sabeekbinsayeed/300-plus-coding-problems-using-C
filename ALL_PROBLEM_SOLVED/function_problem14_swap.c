//Write a function named swap() which will take two pointers which indicate two integer variables. After that swap the values of those pointers and print them in the main() function
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp=*b;
     *b=*a;
     *a=temp;


}
int main()

{
int a=10;
int b=5;
swap(&a,&b);
printf("%d %d",a,b);





    return 0;
}

