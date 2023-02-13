
// question: Take only even numbers, if odd number is given then stop the procedure
#include <stdio.h>
int main()
{
     int a;
    do{

        printf("give a number\n");
        scanf("%d",&a);


    }while(a%2==0);

printf("procedure stopped\n");

    return 0;
}
