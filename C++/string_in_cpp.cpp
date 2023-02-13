#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st="good";// size disci na karon dynamic array
    // eikhane direct value dite pascci , no need of strcpy kore kora
    cout << st << endl;

    st="bad";
    cout << st << endl;

    string ne(10,'s');
    cout << ne<<endl;

    st=ne;
    cout << st<<endl;

    return 0;
}
