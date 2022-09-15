#include <stdio.h>
/*
Make an array of struct Student given below and tell which student got the highest marks and which student got the lowest marks?

struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};

For example:
Input
“Akib” 91 29 ‘C’ 9
“Sakib” 99 31 ‘D’ 9
“Rakib” 57 45 ‘D’ 9

Output:
Highest - “Sakib” 99 31 ‘D’ 9
Lowest - “Rakib” 57 45 ‘D’ 9



*/
struct student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};
int main()
{
    struct student a;
    int max=-1;
    int min=99999;
    int i;
    struct student b;
    struct student c;
    for (i=0; i<3; i++)
    {
        scanf("%s %d %d %c %d",&a.name,&a.marks,&a.roll,&a.section, &a.whichClass);

        if (a.marks>max)
        {
            max=a.marks;

            b=a;
        }

        if (a.marks< min)
        {
            min=a.marks;

            c=a;
        }


    }

     printf("%s %d %d %c %d \n",b.name,b.marks,b.roll,b.section,b.whichClass);

    printf("%s %d %d %c %d \n",c.name,c.marks,c.roll,c.section,c.whichClass);


    return 0;
}
