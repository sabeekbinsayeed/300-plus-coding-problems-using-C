#include <stdio.h>
#include <string.h>
void sort(int  ar [],int size)
{
    int i,j;
for (i=0;i<size-1;i++)
{

    for (j=i+1;j<size;j++)
    {
        if (ar[i]>ar[j])
        {
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;

        }
    }
}



}
int main()
{

char ch[100];
gets(ch);
int length=strlen(ch);

int ar[100];
int j=0;

int i;
for (i=0;i<length;i++)
{

    if (i%2==0)
    {

        ar[j]=ch[i]-48;
        j++;



    }
}

sort (ar,j);

j=0;
for (i=0;i<length;i++)
{
    if(i%2==0)
    {
        ch[i]=ar[j]+48;
        j++;
    }
}

puts(ch);

    return 0;
}
