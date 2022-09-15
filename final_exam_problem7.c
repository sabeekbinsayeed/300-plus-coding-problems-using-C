#include <stdio.h>
#include <string.h>
int main()
{
    int n_val,k_val;
scanf("%d %d",&n_val,&k_val);
char csh;
scanf("%c",&csh);

char ch[100001];
gets(ch);

int n=n_val-1;
int k=k_val-1;
int i;

char chh[100001];
int j=0;
for (i=n;i<=k;i++)
{
    chh[j]=ch[i];
    j++;

}

 j--;

for (i=n;i<=k;i++)
{
    ch[i]=chh[j];
    j--;
}

puts(ch);

    return 0;
}
