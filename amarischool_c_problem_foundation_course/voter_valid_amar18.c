
#include <stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if (age<0)
    {
        printf("age is not valid");
    }
    else if (age<19)
    {
        printf("wait koro\n");
    }
    else{
        printf("vote dite parba");
    }
    return 0;
}
