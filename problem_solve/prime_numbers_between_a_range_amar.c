#include <stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

int i;

int number;
int flag;
int j;
for (j=1;j<=n;j++)
{
    number=j;
     flag=1;
for (i=2;i<=number/2;i++)
{
    if (number%i==0)
    {
        flag=0;
    }
}

if(flag==0)
{

}
else{
    printf("%d\n",number);
}

}



    return 0;
}

