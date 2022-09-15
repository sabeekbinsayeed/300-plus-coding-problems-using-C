#include <stdio.h>

int main()
{

    float marks;
    printf("Your marks: \n");
    scanf("%d",&marks);

    if( marks>40)
    {
        printf("You have passed the examination");
    }
    else
    {

        printf("You have failed the examination");
    }

    return 0;


}
