
/*
Write a C program to count all occurrences of a character in a string.
Example
Input
Input string: I love programming. I love Philtron.
Input character to search: o
Output
Total occurrences of 'o': 4


*/
s
#include <stdio.h>
int main()
{
    char ch[100];
    gets(ch);
    int vowels=0,consonants=0;
    int length=strlen(ch);
    int counter[100]={0};
    int i,val;
    char c;
 scanf("%c",&c);
    for (i=0;i<length;i++)
    {
        val=ch[i]-'a';
       counter[val]=counter[val]+1;


    }
    val=c-'a';
    printf("Total occurences of '%c' : %d",c,counter[val]);

    return 0;
}
