
#include <stdio.h>
void change_array(int ar[])
{
    ar[0]=1000;
}

int main()
{
int ar[5]={1,2,3,4,5};
//printf("%d %d",ar,&ar[0]);
printf("before function called: \n");
int i;
for (i=0;i<5;i++)
{
    printf("%d ",*(ar+i));
}

change_array(ar);
printf("\nafter function called: \n");

for (i=0;i<5;i++)
{
    printf("%d ",*(ar+i));
}

    return 0;

}

