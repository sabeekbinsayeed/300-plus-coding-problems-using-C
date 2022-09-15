#include <stdio.h>
int main()
{
char c;
scanf("%c",&c);

switch (c)
{

case 'A':
    printf("Excellent\n");
    break;

case 'B':
    printf("Need improvement\n");
    break;
case 'F':
    printf("Try again \n");
    break;
default:
    printf("Give correct input");
}


/*
if (c=='A')
{
    printf("Excellent\n");
}
else if (c=='B')
{
    printf("Need improvement\n");
}
else if (c=='F')
{
    printf("Try again \n");
}
else
{
    printf("Give correct input");
}

*/

    return 0;
}
