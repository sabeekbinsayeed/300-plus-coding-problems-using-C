
/*

What is structure in C? Make an example to create a structure named Student with three integer values named roll, class, marks and make a variable with it. Now make an array of that structure of size N which will take input from the user and calculate the sum of marks of all students and print it.

*/
#include <stdio.h>
struct student{
int roll;
int classes;
int marks;


};
int main()
{
struct student std[100];

int n;
scanf("%d",&n);

int i;
for (i=0;i<n;i++)
{
scanf("%d %d %d",&std[i].roll,&std[i].classes,&std[i].marks);
}

int sum=0;

for (i=0;i<n;i++)
{
sum=sum+std[i].marks;
}

printf("%d\n",sum);

    return 0;
}
