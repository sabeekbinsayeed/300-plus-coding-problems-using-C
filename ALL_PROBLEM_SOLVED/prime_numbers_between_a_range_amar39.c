#include <stdio.h>
int prime_number(number)
{
    int flag=1;
    int i;
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
int main()
{

    int n;
    scanf("%d",&n);

int i;


int flag;
int j;
for (j=1;j<=n;j++)
{

    prime_number(j);


}



    return 0;
}


