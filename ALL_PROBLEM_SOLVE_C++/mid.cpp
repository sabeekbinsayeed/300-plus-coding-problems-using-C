
#include <bits/stdc++.h>
#include "SABEEK_STACK.h";
using namespace std;




int main()
{
Stack <int> st;
st.push(13);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);
st.push(7);

while(!st.emptys())
{
    int x=st.pop();
    cout << x << endl;
}

    return 0;
}





