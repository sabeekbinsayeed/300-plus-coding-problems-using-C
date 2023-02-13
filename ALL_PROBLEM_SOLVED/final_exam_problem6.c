/*
https://atcoder.jp/contests/abc076/tasks/abc076_b

*/

#include <stdio.h>
int main()
{

    int n,k;
    scanf("%d %d",&n,&k);
    int val=1,temp1,temp2;
    int i=0;
    while (i<n)
    {

temp1=val*2;
temp2=val+k;
if (temp1<temp2)
{

    val=temp1;
}
else
{

    val=temp2;
}




        i++;
    }
    printf("%d\n",val);


    return 0;
}
