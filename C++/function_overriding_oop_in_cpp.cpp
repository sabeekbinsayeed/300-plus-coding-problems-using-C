#include <bits/stdc++.h>
using namespace std;
class Parent {

public:
    int x;

     void show()
    {
        cout << "from parent"<<endl;
    }



};
class Child: public Parent{

public:
    void show()
    {
        cout << "from child"<< endl;
    }

};
int main()
{

Child c;
c.show();

    return 0;
}
