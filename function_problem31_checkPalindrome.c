/*
You know palindromes, right? Now make a function named check_palindrome() which will take a string as a parameter and return the minimum number of characters you need to change so that the string can become palindrome. You can’t add or delete any character.
For example: check_palindrome(“abcdba”) will return 1 as you can change the character of index 2 to ‘d’ or character of index 3 to ‘c’ to make it palindrome.
*/
#include <stdio.h>

void check_palindrome(char ch[])
{
    int length=strlen(ch);
    int number=0;
    int j=length-1;
    int i=0;

    for (i=0;i<length/2;i++)
    {
if (ch[i]!=ch[j])
{

    number++;


}
j--;

    }
    printf("%d ",number);
}
int main()
{


char ch[100];
gets(ch);
check_palindrome(ch);


    return 0;
}
