/*
Make a function named structure_sort() which takes an array of structures and the size of that array. In this function you will sort that array on the basis of val2 and you don’t need to return anything as you remember the array will be updated from where it was called.
The format of structure is given below,
struct Person
{
    char name[100];
    int val1;
    int val2;
}

*/
#include <stdio.h>
#include <string.h>
struct Person
{
    char name[100];
    int val1;
    int val2;
    int j;

};

void structure_sort(struct Person p[],int size)
{
    int i,j;
struct Person temp;
    for (i=0;i<size-1;i++)
    {

        for (j=i+1;j<size;j++)
        {
if (p[i].val2< p[j].val2)
{


       strcpy(temp.name,p[i].name);
        strcpy(p[i].name,p[j].name);
        strcpy(p[j].name,temp.name);

        temp.val2=p[i].val2;
       temp.val1=p[i].val1;
p[i].val2=p[j].val2;
p[i].val1=p[j].val1;

       p[j].val2=temp.val2;
       p[j].val1=temp.val1;





}
        }

    }
}
int main()
{
struct Person p[3];
int i;
for (i=0;i<3;i++)
{
    scanf("%s %d %d",&p[i].name, & p[i].val1,&p[i].val2);
}
structure_sort(p,3);
for (i=0;i<3;i++)
{
    printf("%s %d %d",p[i].name,  p[i].val1,p[i].val2);
}
    return 0;
}
