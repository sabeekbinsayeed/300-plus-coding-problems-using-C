/*

a="red "  3
b="black"  5
a="redblack"

a= redb
*/
#include <stdio.h>
int main()
{
char a[100];
char b[100];
gets(a);
gets(b);
strcat(a,b);
/*
int i,j=0;

int length_of_a=strlen(a);
int length_of_b=strlen(b);
int new_length= length_of_a+ length_of_b;

for (i=length_of_a;i<new_length;i++)
{
    a[i]=b[j];
    j++;

}

a[i]='\0';
*/
printf("%s %s",a,b);


    return 0;
}
