#include <stdio.h>
int main()
{
int lines;

int i;
int j;
int m;
scanf("%d",&m);
int k=0;
while (k<m)
{
    scanf("%d",&lines);
for (i=1;i<=lines;i++)
{
    for (j=1;j<=lines;j++)
    {
        printf("*");
    }
    printf("\n");
}

    k++;
    printf("\n\n");
}


    return 0;
}
