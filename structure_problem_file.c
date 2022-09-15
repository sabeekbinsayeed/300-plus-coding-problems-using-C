/*
In this problem you will take the size of an array and an array of structures from the file and save that information in the file. The format of structure is given below,
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
    int val;
};




int main()
{

    int n;
    scanf("%d",&n);

    struct Person p[n];
    int i=0;

for (i=0;i<n;i++)
{
    scanf("%s %d",&p[i].name, & p[i].val);
}

for (i=0;i<n;i++)
{
    printf("%s %d",p[i].name,  p[i].val);
}


    return 0;
}



