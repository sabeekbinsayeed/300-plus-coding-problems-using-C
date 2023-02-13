#include <bits/stdc++.h>
#include "SABEEK_STACK.h";

using namespace std;
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


    return s.tops();


}

int main()
{
    int result=prefix_evaluation("+*423");
    cout << result;


    return 0;
}
