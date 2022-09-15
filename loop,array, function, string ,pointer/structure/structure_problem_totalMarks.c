#include <stdio.h>
struct student {

char name[100];
int roll;
int marks;
int total;
};

int main()
{


    int i;
    int j;
    struct student ar[3];
    for (i=0;i<3;i++)
    {

        printf("loop\n");
        int sum=0;
        scanf("%s %d %d",&ar[i].name,&ar[i].roll,&ar[i].marks);
        for (j=0;j<i;j++)
        {
if (ar[j].roll==ar[i].roll)
{
sum=sum+ar[j].marks;
}
        }
        ar[i].total=sum+ ar[j].marks;

    }

    for (i=0;i<3;i++)
    {
printf("%s %d %d %d\n",ar[i].name,ar[i].roll,ar[i].marks,ar[i].total);
    }


    return 0;
}
