#include <bits/stdc++.h>
#include "my_stack_template_class.h";
using namespace std;

int globalID=100;
class person
{
    public:
string name;
int id;
float salary;


     person()
{
    name="";
    id=-1;
    salary=-1.0;
}

person(string name, float salary)
{
this->name=name;
this->salary=salary;
this->id=globalID;
globalID++;
}

void setName(string name)
{
    this->name=name;
}

void setSalary(float salary)
{
    this->salary=salary;
}
string getName()
{
    return name;
}

float getSalary()
{
    return salary;
}

void print()
{
    cout << "name: " << name << " salary : "<< salary << " id:  "<< id << endl;
}




};

int main()
{
   Stack < person > st ;
   person a ("sabeek",55.33);
     person b ("tad",5544.33);
        person c ("ewasd",1234.33);


    int choice ;
    cout << "enter your choice"<< endl;
    cin >> choice;

    while (choice!=0){
              st.sizes();


        if (choice==1)
        {
            cout <<"enter the value"<< endl;
            int val;
            cin >> val;
            st.push(a);
               st.push(b);
                st.push(c);
        }
        else if (choice==2)
        {
          person t=st.pop();
            cout << t.name << " || "<< t.salary << endl;

        }
        else if (choice==3)
        {
            person t=st.tops();
            cout << t.name << " || "<< t.salary << endl;
        }
        else if (choice==4)
        {
            st.emptys();
        }
        else if (choice==5)
        {

            while (!st.emptys())
            {
                person t=st.pop();
                t.print();

            }


        }


           cout << "enter your choice"<< endl;
        cin>> choice;
    }





//st.display();






    return 0;
}


