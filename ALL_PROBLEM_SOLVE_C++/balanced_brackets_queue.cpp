#include <bits/stdc++.h>

#include "REAL_STACK.h"
using namespace std;



bool balance_check(string sh)
{
int n=sh.size();

Stack <char> st;
bool isBalanced=true;
// opening bracket
if (sh[0]==')' || sh[0]=='}' || sh[0]==']')
{
    return false;
}
for (int i=0;i<n;i++)
{

    //handling opening bracket
    if (sh[i]=='(' || sh[i]=='{'   || sh[i]=='[' )
            {
st.push(sh[i]);
            }

            else if (sh[i]==')')
            {
                if (st.Top()=='(')
                {
                    st.pop();
                }
                else
                {
                    isBalanced=false;
                    break;
                }
            }



             else if (sh[i]=='}')
            {
                if (st.Top()=='{')
                {
                    st.pop();
                }
                else
                {
                    isBalanced=false;
                    break;
                }
            }



                         else if (sh[i]==']')
            {
                if (st.Top()=='[')
                {
                    st.pop();
                }
                else
                {
                    isBalanced=false;
                    break;
                }
            }
}

if(!st.empty())
{
    isBalanced=false;

}

return isBalanced;

}


int main()
{

    string s;
    cin>> s;
    bool result=balance_check(s);
    cout << result << endl;
    if (result==1)
    {
        cout << "balanced"<< endl;
    }


}


