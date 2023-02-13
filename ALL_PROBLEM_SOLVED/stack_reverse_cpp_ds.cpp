#include <bits/stdc++.h>
#include "my_stack_template.h";
using namespace std;

void insert_at_bottom(Stack <int> &ch,int val)
{

    if (ch.emptys()){
        ch.push(val);

        return ;
    }
    int extract=ch.tops();
    ch.pop();
    insert_at_bottom(ch,val);
    ch.push(extract);

}

void reverse_stack(Stack <int> &st)
{
    if (st.emptys())
    {
        return ;
    }
    int top=st.tops();

    st.pop();
    reverse_stack(st);
    insert_at_bottom(st,top);
}



int main()
{
Stack <int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);




reverse_stack(st);
cout << " now calling reverse "<< endl;

while (!st.emptys())
{

    int value=st.tops();
    st.pop();


    cout << value << endl;
}


    return 0;
}
