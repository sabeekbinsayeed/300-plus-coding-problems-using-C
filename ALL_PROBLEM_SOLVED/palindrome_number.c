#include <stdio.h>
int main()
{

    // 121
    int a;
    scanf("%d",&a);
    int real_num=a;
    int rem, reverse=0;

    while (1)
    {
        rem=a%10;
        reverse=reverse*10 + rem;
        a=a/10;

        if (a==0)
            break;


    }
   if ( real_num   ==reverse)
   {
       printf("It is a palindrome");
   }
   else {
    printf("not palindrome");
   }


    return 0;
}
