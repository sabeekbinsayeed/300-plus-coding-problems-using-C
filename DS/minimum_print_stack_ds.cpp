#include <bits/stdc++.h>

#include "REAL_STACK.h"
using namespace std;




int main()
{
    Stack <int> st;
    Stack <int> mins;
    int minimum=9999;
    int n;
    cin>> n;
    for (int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        if (val<= minimum)
        {
            minimum=val;
            mins.push(val);

        }
        st.push(val);

    }

/*
    cout << "printing main stack "<< endl;
    while (!st.empty())
    {
        cout << st.pop() << endl;
    }

     cout << "printing minimum stack "<< endl;
    while (!mins.empty())
    {
        cout << mins.pop() << endl;
    }

*/


   for (int i=0;i<n && !st.empty();i++)
    {
        if (mins.Top()!=st.Top())
        {
            cout << mins.Top()<< " ";
            st.pop();
        }
        else
        {
 cout << mins.Top()<< " ";
            st.pop();
            mins.pop();
        }



    }






}



