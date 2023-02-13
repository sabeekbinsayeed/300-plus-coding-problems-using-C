// print from a to z
// print from A to Z

#include <stdio.h>
int main()
{
    char i;

    for (i='a';i<='z';i++)
    {
        printf("%c ",i);
    }

    printf("\n");

    for (i='A';i<='Z';i++)
    {
        printf("%c ",i);
    }


    return 0;
}
