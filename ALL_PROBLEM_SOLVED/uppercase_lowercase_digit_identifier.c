// identify whether the given input is uppercase, lowercase or number

#include <stdio.h>
int main()
{

    char user_input;
    printf("your input: \n");
    scanf("%c",&user_input);

    if (user_input>='A' & user_input<= 'Z')
    {

        printf("Uppercase");
    }

    else   if (user_input>='a' & user_input<= 'z')
    {

        printf("lowercase");
    }

    else   if (user_input>='0' & user_input<= '9')
    {

        printf("number");
    }
    else{
        printf("others");
    }


    return 0;
}
