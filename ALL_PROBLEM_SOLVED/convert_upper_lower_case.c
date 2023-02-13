// identify whether the given input is uppercase, lowercase or number

#include <stdio.h>
#include <ctype.h>
int main()
{

    char user_input,lower,upper;
    printf("your input: \n");
    scanf("%c",&user_input);

    if (isupper(user_input))
    {

        printf("it is uppercase\n");
        lower=tolower(user_input);
        int value = user_input +32 ;
        printf("now it is lowercase: %c %c",lower);
    }
    else   if (islower(user_input))
    {

        printf("it is lowercase\n");
        upper=toupper(user_input);
        printf("now it is uppercase: %c",upper);
    }


    else{
        printf("others");
    }


    return 0;
}
