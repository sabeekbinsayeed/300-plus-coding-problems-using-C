#include <bits/stdc++.h>
#include "my_stack_template_pair.h";
using namespace std;

int main()
{
   Stack < pair<int,char> > st ;

    int choice ;
    cout << "enter your choice"<< endl;
    cin >> choice;

    while (choice!=0){


        if (choice==1)
        {
            cout <<"enter the value"<< endl;
            int val;
            cin >> val;
            st.push(make_pair(1,'a'));
               st.push(make_pair(2,'b'));
               st.push(make_pair(3,'c'));
        }
        else if (choice==2)
        {
            pair <int,char> chk=st.pop();
            cout << chk.first << " || "<< chk.second << endl;

        }
        else if (choice==3)
        {
             pair <int,char> ch=st.tops();
            cout << ch.first << " || "<< ch.second << endl;

        }
        else if (choice==4)
        {
            st.emptys();
        }
        else if (choice==5)
        {
            /*
            while (!st.emptys())
            {
                pair <int,char> ch=st.pop();
            cout << ch.first << " || "<< ch.second << endl;
            */
            }

            cout << "enter your choice"<< endl;
        cin>> choice;
        }





//st.display();






    return 0;
}


