// https://vjudge.net/contest/498956#problem/F
// module 31
//https://dorhubs.blogspot.com/2019/07/codeforces-703-problem-solution.html

#include <stdio.h>
int main()
{

int n;
scanf("%d",&n);
int num,num1;

int i=0,count_m=0,count_c=0;
while (i<n)
{

scanf("%d",&num);
scanf("%d",&num1);
if (num>num1)
{
    count_m++;
}
else if (num1>num)
{
count_c++;
}
    i++;
}
if(count_c>count_m)
{

    printf("Chris");
}
else if( count_m> count_c)
{
    printf("Mishka");
}
else {
    printf("Friendship is magic!^^");
}

return 0;
}
