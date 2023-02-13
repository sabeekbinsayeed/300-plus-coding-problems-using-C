#include <stdio.h>
struct student{
char name[100];
int age;
int marks
};

void change(struct student *st)
{
    st->marks=99;
}
int main()
{


struct student a={"sabeek",3,4};
change (&a);
printf("%s %d %d",a.name,a.age,a.marks);
    return 0;
}
