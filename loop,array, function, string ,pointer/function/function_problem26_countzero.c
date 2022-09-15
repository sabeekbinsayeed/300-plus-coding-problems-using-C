//Make a function named count_zero() which will take a binary string (Binary string is a string which is consist of only 0 and 1) as parameter and count how many 0’s are there in that string
#include <stdio.h>

void count_zero(char ch[])
{
    int length=strlen(ch);
    int i=0;
int    count=0;
    for(i=0;i<length;i++)
    {
        if (ch[i]=='0')
        {
            count++;
        }
    }

    printf("%d ",count);
}
int main()
{

    char ch[100];
    scanf("%s",&ch);
    count_zero(ch);
    return 0;
}
