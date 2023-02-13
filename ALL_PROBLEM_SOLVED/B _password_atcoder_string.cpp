//B - ∵∴∵
//https://vjudge.net/contest/503451#problem/J
#include <bits/stdc++.h>
using namespace std;
int main()
{
char ch[100];
char ch1[100];

char news[100];

scanf("%s",&ch);
scanf("%s",&ch1);
int k=0,l=0;

int length=strlen(ch);
int length2=strlen(ch1);
int newlength=length+length2;
int i,j;
for (i=0;i<newlength;i++)
{
    if (i%2==0)
    {
        news[i]=ch[k];
        k++;
    }
    else
    {
        news[i]=ch1[l];
        l++;
    }
}
news[i]='\0';
printf("%s",news);

    return 0;
}
