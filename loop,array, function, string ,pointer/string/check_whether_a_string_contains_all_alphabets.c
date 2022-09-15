#include <stdio.h>
int main()
{
    char ch[100];
    scanf("%s",&ch);
    int i=0,j;
    int flag=0;
    int length=strlen(ch);
    int val;
    int count=0;
    for (i=0;i<26;i++)
    {
        for (j=0;j<length;j++)
        {
            val=ch[j]-'a';
            if (val==i)
            {
                count++;
                flag=1;
                break;


            }

        }
        if(flag==0)
        {
            printf("Not contains all alphabets");
            return 0;
        }
    }
if (count==26)
{ printf("contains all alphabets");

}

else
{
 printf("Not contains all alphabets");
}
    return 0;
}
