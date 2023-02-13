#include <bits/stdc++.h>
using namespace std;
class Student{
private:
    int pass;
    int x;
public:
     Student(int p)
    {
        pass=p;

    }
    void setter_x(int a)
    {
        x=a;

    }
    int getter_x()
    {
return x;
    }
};
int main()
{
Student sabeek(1234);
sabeek.setter_x(5);

int res=sabeek.getter_x();
cout << res<<endl;



    return 0;
}
