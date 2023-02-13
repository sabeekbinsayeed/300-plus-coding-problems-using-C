/*

Write a C code which takes an string of small alphabets as input which size will be maximum 100 and do the following:
Print the index of vowels in that string. Index of that string starts from 0.

For example:
Input:
abdeufigoh
Output:
0 3 4 6 8


*/

#include <stdio.h>
int main()
{

    char ch [100];
    int i=0;

   scanf("%s",&ch);

   int length=strlen(ch);
   for (i=0;i<length;i++)
   {
       if (ch[i]=='a' || ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u')
       {
           printf("%d ",i);
       }
   }



    return 0;
}
