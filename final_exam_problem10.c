#include <stdio.h>

struct person{
char name[100];
char address[100];
};
int main()
{
int i;

int n;
scanf("%d",&n);


struct person p[n];

for (i=0;i<n;i++)
{
scanf("%s %s",&p[i].name,&p[i].address);
}

int j;

for (i=0;i<n;i++)
{

    for (j=i+1;j<n;j++)
    {

        int a=strcmp(p[i].name,p[j].name);
        int b=strcmp(p[i].address,p[j].address);


        if (a==0 && b==0 )
        {
            printf("Yes");
            return 0;

        }

    }

}
printf("No");

    return 0;
}
