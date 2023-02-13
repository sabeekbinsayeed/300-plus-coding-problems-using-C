#include <bits/stdc++.h>
using namespace std;
class Student{
public:
string name;
int roll;
string section ;

protected:
    int english_marks;

private:
    string password;

public:
    void setMarks(int marks)
    {
        english_marks=marks;
    }
    int getMarks()
    {
        return english_marks;
    }
    void setPassword(string pass)
    {
        password=pass;
    }

    void update(string pass, int marks)
    {
        if (pass==password)
        {
            english_marks=marks;
        }
        else
        {
            cout << "no student found";
        }
    }
};
int main()
{
    int n;
    cin>>n;
    string name,section,password;
    int marks,roll;
    Student stds[n];
    int i;
    for ( i=0;i<n;i++)
    {
        cin>>name>>roll>>section>>marks>>password;
        stds[i].name=name;
        stds[i].roll=roll;
             stds[i].section=section;
        stds[i].setMarks(marks);
        stds[i].setPassword(password);
    }

    cin >> roll >> marks >>password;
    int found=0;
    int index;
    for ( i=0;i<n;i++)
    {
        if (stds[i].roll==roll)
        {
            found=1;
            index=i;
            break;
        }
    }
    if (found==0)
    {
        cout << "no student found"<< endl;
    }
    else
    {
stds[index].update(password,marks);

for ( i=0;i<n;i++)
    {

        cout << stds[i].name << " "<<stds[i].getMarks() << endl;

    }
    }

    return 0;
}
