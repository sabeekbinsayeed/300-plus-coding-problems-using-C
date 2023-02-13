#include <bits/stdc++.h>
#include "my_stack_template.h";
using namespace std;

int main()
{
   Stack <string> st ;

    int choice ;
    cout << "enter your choice"<< endl;
    cin >> choice;

    while (choice!=0){


        if (choice==1)
        {
            string word;
            word="sabeek is a good";
             string finalword;
            for (int i=0;i<word.length();i++)
            {
                 finalword="";

                while(i< word.length() && word[i]!=' ')
                {
finalword=finalword+ word[i];
i++;
                }
                st.push(finalword);
                cout << finalword<< endl;
            }

        }
        else if (choice==2)
        {
            st.pop();
        }
        else if (choice==3)
        {
            string result=st.tops();
            if (result=="")
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
                cout << st.pop()<< " ";
            }
        }
cout << "enter your choice"<< endl;
        cin>> choice;

    }


st.display();






    return 0;
}


