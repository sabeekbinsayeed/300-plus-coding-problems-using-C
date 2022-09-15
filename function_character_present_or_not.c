//check whether a character is present in a string or not

#include <stdio.h>
void check_char(char input[],char ch)
{


    int i=0;
    for (i=0;i<strlen(input);i++)
    {
        if (ch==input[i])
        {
            printf("yes");
            return ;
        }
    }
    printf("no");
}
int main()
{

//char a[]="sabeek";
//char c='z';
char a[44];
scanf("%s",&a);
char c;
scanf(" %c",&c);

check_char(a,c);


    return 0;
}
