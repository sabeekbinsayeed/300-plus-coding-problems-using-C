//https://codeforces.com/problemset/problem/1619/A

#include <stdio.h>
int main()
{

int n;
scanf("%d",&n);
int i=0;
int val;
int length,half;
char ch[100];
char rev[100];
int square;
int temp;
int j;
while (i<n)
{

    scanf("%s",&ch);

    length=strlen(ch);
    half=length/2;
     temp=half;
     if (length>1)
     {
         square=1;
     }


   for (j=0;j<half;j++)
    {
        if (ch[j]!=ch[temp])
        {
            square =0;
            break;

        }
        temp++;

    }

if (square==1 && length%2==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");

    }




    i++;
}



    return 0;
}
