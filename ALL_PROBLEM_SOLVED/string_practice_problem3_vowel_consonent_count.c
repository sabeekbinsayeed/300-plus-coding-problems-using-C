/*
Write a C program to find total number of vowels and consonants in a string using loop and if else. How to find total number of vowels and consonants in a string using switch case in C programming. Logic to count number of vowels and consonants in a string.
Example
Input
Input string: I love Phitron
Output
Total Vowels = 4
Total Consonants = 10

*/

#include <stdio.h>
int main()
{
    char ch[100];
    gets(ch);
    int vowels=0,consonants=0;
    int length=strlen(ch);
    int i;
    for (i=0;i<length;i++)
    {
        if (ch[i]=='a' || ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u')
        {
            vowels=vowels+1;
        }
        else{
            consonants=consonants+1;
        }



    }

  printf("Total Vowels = %d\n",vowels);
         printf("Total Consonants = %d",consonants);
    return 0;
}
