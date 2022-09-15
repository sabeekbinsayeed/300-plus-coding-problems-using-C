/*
Make a function named get_min() which takes an array of structures and the size of that array. In this function you will find the minimum val from the array of structures and return that value. The format of structure is given below,
struct Person
{
	    char name[100];
	    int val;
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

int min_find(struct Person p[],int size)
{
    int i,j;
    int min=p[0].val1;
struct Person temp;
    for (i=0;i<size-1;i++)
    {

       if (p[i].val1<min)
       {
           min=p[i].val1;
       }





        }
        return min;
}



int main()
{
struct Person p[3];
int i;
for (i=0;i<3;i++)
{
    scanf("%s %d %d",&p[i].name, & p[i].val1,&p[i].val2);
}
int min=min_find(p,3);

    printf("%d",min);

    return 0;
}


