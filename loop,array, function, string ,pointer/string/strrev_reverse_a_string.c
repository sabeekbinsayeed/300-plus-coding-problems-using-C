#include <stdio.h>
/*
Write a C program to find reverse of a given string.
Example
Input
	Hello
Output
Reverse string: olleH


*/
int main()
{
    char ch[100],chh[100];
    scanf("%s",&ch);
    int length=strlen(ch);

    int i;
    int m=length-1;
    for (i=0;i<length;i++)
    {
        chh[m]=ch[i];
        m--;
    }
    chh[length]='\0';
    printf("%s",chh);





    return 0;
}
