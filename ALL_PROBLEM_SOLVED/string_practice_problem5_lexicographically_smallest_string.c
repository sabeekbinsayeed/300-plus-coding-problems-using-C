/*
Find the lexicographically smallest string from a list of strings
Example
Input
3
banana
apple
apply
applet
app
Output
Lexicographically smallest string is app


*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int smallest=99;
     char smallest_ch[100];
    char ch[100]="sabeek";
    int i=0;
    while(i<n)
    {
        scanf("%s",&ch);
        int length=strlen(ch);
        if (length<smallest)
        {
            smallest=length;

           strcpy(smallest_ch,ch);

        }
        i++;



    }

    printf("%s",smallest_ch);

    return 0;
}
