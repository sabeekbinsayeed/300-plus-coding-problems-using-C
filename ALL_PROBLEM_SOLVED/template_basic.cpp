#include <bits/stdc++.h>
using namespace std;
template <typename T > T find_max(T a,T b)
{


    return a>b ? a: b;
}
int main()
{
int a,b;
a=5;
b=3;
cout << find_max<char>('a','b') << endl;;

    return 0;
}
