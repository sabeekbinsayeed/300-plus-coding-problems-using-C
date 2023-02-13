//Write a function truncate() that takes a string and an integer k, and keeps only the first k characters. For example - if s is “abcd”, truncate(s, 2) will make s = “ab”

#include <stdio.h>
void truncate(char ch[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {

    }
    ch[i]='\0';

}
int main()
{

    char ch[100];
    gets(ch);
    int n;
    scanf("%d",&n);
    truncate(ch,n);
    int length=strlen(ch);
    int i=0;
   printf("%s",ch);
}
