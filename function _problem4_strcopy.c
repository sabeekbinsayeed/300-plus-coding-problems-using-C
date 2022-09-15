
/*
Write a function named string_copy() which will take two strings A and B as parameters and make copy of B into A without using any library function i.e. strcpy

*/
#include <stdio.h>
void string_copy(char ch[])
{
    int i=0,length=0;

    while (ch[i]!='\0')
    {
        length++;
        i++;
    }
    char chh[length];
    i=0;
     while (ch[i]!='\0')
    {
        chh[i]=ch[i];
        i++;
    }
    ch[i]='\0';
     printf("chh: %s\n",chh);


}
int main()
{


    char ch[4]={'s','a','b'};

    string_copy(ch);
    printf("ch:  %s\n",ch);


    return 0;
}


