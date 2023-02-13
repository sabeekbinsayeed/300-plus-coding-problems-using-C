#include <stdio.h>
struct student{
char name[100];
int age;
int marks
};
int main()
{
int n=3;
int i;
struct student sh={.marks=0};;

for (i=0;i<n;i++)
{


    struct student a;
    scanf("%s %d %d",&a.name,&a.age,&a.marks);
    printf("%s %d %d",a.name,a.age,a.marks);

    if (a.marks>sh.marks)
    {
        sh=a;
    }
}
printf("%s %d %d",sh.name,sh.age,sh.marks);
    return 0;
}
