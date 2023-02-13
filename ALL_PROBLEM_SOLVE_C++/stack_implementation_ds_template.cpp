#include <bits/stdc++.h>
#include "my_stack_template.h";
using namespace std;

int main()
{
   Stack <char> st ;

    int choice ;
    cout << "enter your choice"<< endl;
    cin >> choice;

    while (choice!=0){


        if (choice==1)
        {
            cout <<"enter the value"<< endl;
            int val;
            cin >> val;
            st.push('a');
             st.push('b');
              st.push('c');
        }
        else if (choice==2)
        {
            st.pop();
        }
        else if (choice==3)
        {
            int result=st.tops();
            if (result==-1)
            {
                cout << "dont exist"<< endl;
            }
            else
            {
                cout << "top value is " << result << endl;
            }
        }
        else if (choice==4)
        {
            st.emptys();
        }
        else if (choice==5)
        {
            while (!st.emptys())
            {
                cout << st.pop()<< endl;
            }
        }
cout << "enter your choice"<< endl;
        cin>> choice;

    }


st.display();






    return 0;
}

