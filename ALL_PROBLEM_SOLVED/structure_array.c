
#include <stdio.h>
struct student{
char name[100];
int age;
int marks
};

void change(struct student *st[])
{
    st[0]->marks=99;
}
int main()
{


struct student a[3];
int i;
for (i=0;i<3;i++)
{
    scanf("%s %d %d",&a[i].name,&a[i].age,&a[i].marks);
}

for (i=0;i<3;i++)
{
    printf("%s %d %d",a[i].name,a[i].age,a[i].marks);
}
    return 0;
}
