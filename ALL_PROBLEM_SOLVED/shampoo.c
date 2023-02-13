
/*

Input
25 10 11 12

Output
T

*/

//module 10.5
//https://vjudge.net/contest/491097#problem/D
//AtCoder Beginner Contest 243

#include <stdio.h>
int main()
{
   int v,a,b,c;
 //  scanf("%d%d%d%d ",&v,&a,&b,&c);
scanf("%d",&v);
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

   int temp, x;

int sum=0;

while (1)
 {




if ( v-a >= 0)
{
    v=v-a;
}
else {
       printf("F");
       break;

}





if ( v-b >= 0)
{
    v=v-b;
}
else {
       printf("M");
       break;

}




if ( v-c >= 0)
{
    v=v-c;

}
else {
       printf("T");
       break;

}




 }


    return 0;
}




