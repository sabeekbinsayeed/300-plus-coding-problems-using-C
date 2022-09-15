#include <stdio.h>
#include <string.h>

struct student{
char name[100];
int marks;
int age;
int numbers[5];

};
int main()
{
    struct student a={"sabeek",3,4};
    int i=0;
    for (i=0;i<5;i++)
    {
        a.numbers[i]=4;
    }

    strcpy(a.name,"sb");
    printf("%s %d %d\n",a.name,a.marks,a.age);

 for (i=0;i<5;i++)
    {
        printf("%d ",a.numbers[i]);
    }
    return 0;
}
