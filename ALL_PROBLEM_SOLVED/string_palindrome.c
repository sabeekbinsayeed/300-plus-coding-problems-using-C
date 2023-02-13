#include<stdio.h>

int main()

{

    char ch[100];

    scanf("%s",&ch);
    int length=strlen(ch);
char chh[length];
strcpy(chh,ch);
strrev(chh);
int i;
for (i=0;i<length;i++)
{
    if (ch[i]!=chh[i])
    {
        printf("not palindrome");
        return 0;
    }

}


printf("it is palindrome");
        return 0;
}
