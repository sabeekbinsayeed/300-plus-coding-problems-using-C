
/*
Write a function named get_length() which will take a string as parameter and return the length of that string without using any library function i.e. strlen.

*/
#include <stdio.h>
int get_length(char ch[])
{
    int i=0,length=0;
    while (ch[i]!='\0')
    {
        length++;
        i++;
    }
    return length;

}
int main()
{


    char ch[4]={'s','a','b'};

    int length=get_length(ch);
    printf("length value : %d\n",length);


    return 0;
}

