#include<stdio.h>

int main()

{

    char ch[100];

    scanf("%s",&ch);
    int j=strlen(ch)-1;
    int i;


for (i=0;i<j;i++)
{
    if (ch[i]!=ch[j])
    {
        printf("not palindrome");
        return 0;

    }
    j--;
}


printf("it is palindrome");
        return 0;
}

