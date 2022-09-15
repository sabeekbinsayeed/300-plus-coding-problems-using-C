/*

Takahashi is participating in a programming contest, AXC001. He has just submitted his code to Problem A.
The problem has NN test cases, all of which must be passed to get an AC verdict.
Takahashi's submission has passed MM cases out of the NN test cases.
Determine whether Takahashi's submission gets an AC.


Input
3 3

Output
Yes
*/
// https://vjudge.net/contest/490793#problem/C
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("Yes");
    }
    else{
        printf("No");    }






    return 0;
}
