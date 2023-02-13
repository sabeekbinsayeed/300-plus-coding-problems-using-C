

/*

input 7 20 12
output Yes

*/

//lab exam 3
//https://codeforces.com/problemset/problem/467/A

#include <stdio.h>
int main()
{
   int s,t,x;

scanf("%d",&s);
scanf("%d",&t);
scanf("%d",&x);

if ( t>=s)
{

    if (x >=s && x<t)
    {
        printf("Yes");
    }

    else
    {

        printf("No");
    }


}
else {

         if ((x>=s && x<=23)|| (x>=0 && x<t))
    {
        printf("Yes");
    }

    else
    {

        printf("No");
    }


}


    return 0;
}





