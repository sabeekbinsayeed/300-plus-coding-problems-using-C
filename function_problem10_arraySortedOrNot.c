#include <stdio.h>
#include <stdbool.h>

void sort(int ar[],int size)
{

    int i,temp,position,check;
for (position=0;position<(size-1);position++)
{

 for (check=position+1;check< (size);check++)
    {
if (ar[check]<ar[position])
        {
            temp=ar[check];
            ar[check]=ar[position];
            ar[position]=temp;
        }
    }

}

}
bool check_sort(int ar[],int size)
{
    int b[size];
    int i;
    for (i=0;i<size;i++)
    {
        b[i]=ar[i];

    }
  sort (b,size);
    for (i=0;i<size;i++)
    {
        if (ar[i]!=b[i])
        {
            return false;
        }
    }
    return true;



}


int main()
{

    int ar[]={2,3,4,1,12,8};
    int size=6;
bool val=check_sort(ar,size);

  if (val==true)
  {
      printf("sorted");
  }
  else
  {

      printf("not sorted");
  }
    return 0;
}
