/*

You are given an integer NN. If NN is between -2^{31}−2
31
  and 2^{31}-12
31
 −1 (inclusive), print Yes; otherwise, print No.


 AtCoder Beginner Contest 237

 https://vjudge.net/contest/491097#problem/B


*/

#include <stdio.h>
#include <math.h>

int main()
{


    long long n;
    scanf("%lld",&n);
    long long lower= -(pow (2, 31));
      long long higher= pow (2, 31)-1;


    if (n >= lower && n <= higher)
    {
        printf("Yes\n");

    }
    else {
        printf("No\n");
    }

    return 0;
}
