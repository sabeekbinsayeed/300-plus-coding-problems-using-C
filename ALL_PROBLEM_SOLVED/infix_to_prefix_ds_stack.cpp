#include <bits/stdc++.h>
#include "REAL_STACK.h";

using namespace std;
int precision_calc(char c)
{

     if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
        return -1;


}


int prefix_evaluation(string chk)
{

    Stack <int>s;
    for (int i=chk.length()-1; i>=0; i--)
    {

        if (chk[i]>='0' && chk[i]<='9')//mane digit
        {
            s.push(chk[i]-'0');




            // cout << "push krlam" << chk[i]-'0'<< endl;
        }

        else
        {

            int a=s.pop();
            int b=s.pop();

            switch(chk[i])
            {
            case '+':
s.push(a+b);
                break;
            case '-':
                s.push(a-b);
                break;
            case '*':
                s.push(a*b);
                break;
            case '/':
                s.push(a/b);
                break;
                  case '^':
                s.push(pow(a,b));
                break;
            }

        }





    }

int resutl=s.Top();
    return resutl;


}


string infix_to_prefix(string chk)
{

    reverse(chk.begin(),chk.end());
    Stack <char> st;
    string result_string;

    for (int i=0; i<chk.length(); i++)
    {
        if (chk[i]>='0' && chk[i]<='9')
        {
            result_string=result_string+ chk[i];

        }

        else if (chk[i]==')')
        {
            st.push(chk[i]);
        }


        else if (chk[i]=='(')
        {

                     while (!st.empty() && st.Top() != ')')
            {
                result_string=result_string+ st.pop();

            }

            if(!st.empty())
            {
                st.pop();
            }
        }

        else
        {
//cout << "see "<< chk[i]<< endl;
            while (!st.empty() && precision_calc(st.Top())>= precision_calc( chk[i]))
                // while (!st.empty() && precisionCalc(st.Top()) >= precisionCalc(chk[i]))
            {
                result_string=result_string+ st.pop();
            }
            st.push(chk[i]);

        }



    }

    while (!st.empty())
    {
        result_string=result_string+st.pop();
    }

    reverse(result_string.begin(), result_string.end());
    cout << result_string;
    return result_string;
}
int main()
{
    string infix="(7+(4*5))-(2*0)";
    string s=infix_to_prefix(infix);
    int news=prefix_evaluation(s);

    cout << news<< endl;



    return 0;
}
