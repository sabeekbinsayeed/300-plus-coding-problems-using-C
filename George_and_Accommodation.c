
/*



*/

//lab exam 3
//https://codeforces.com/problemset/problem/467/A

#include <stdio.h>
int main()
{
   int n,a,b;

scanf("%d",&n);

int count=0;

int i=1;
while  (i<=n)
{
    scanf("%d",&a);
    scanf("%d",&b);
    int dif=b-a;
    if (b>a)
    {
        if (dif >=2)
        {
count=count +1;
        }

    }




    i++;
}

printf("%d",count);


    return 0;
}





