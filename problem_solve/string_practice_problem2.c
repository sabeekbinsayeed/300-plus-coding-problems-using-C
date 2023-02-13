/*
Take your name as input and add “Phitron Member “ at first.

For example:
Input:
Rahat
Output:
Phitron Member Rahat

*/

#include <stdio.h>
int main()
{
    char ch[100];
scanf("%s",&ch);
char output[100]="Phitron Member ";
strcat (output, ch);
printf("%s",&output);




    return 0;
}
