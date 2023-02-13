#include <stdio.h>
int main()
{
char c;
scanf("%c",&c);

switch(c)
{
case 'A':
    printf("Excellent\n");
    break;

case 'B':
    printf("need improvement\n");
    break;
case 'F':
    printf("try again\n");
    break;
 default:
    printf("nothing worked");



}    return 0;
}
