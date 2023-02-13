#include <stdio.h>
int main()
{

char c;
scanf("%c",&c);
if ((c>='a') && (c<='z'))
{
    printf("alphabets");
}

else if ((c>='1') && (c<='9'))
{
    printf("numbers");
}

else
{
    printf("special characters");
}

    return 0;
}
