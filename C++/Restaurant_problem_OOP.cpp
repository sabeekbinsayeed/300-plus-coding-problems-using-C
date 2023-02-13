#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:

    int food_item_codes;
    string food_item_names;
    int food_item_prices;
    int total_tax;
};

class Customer
{
public:
    int code_customer;
    int quantity;
};

int main()
{

int code,price;
string name;

int n;
cin >>n;

Restaurant res[n];

int i;

for (i=0;i<n;i++)
{
    cin>> code >> name >> price;
    res[i].food_item_codes=code;
    res[i].food_item_names=name;
    res[i].food_item_prices=price;
}

cout << "Make bill"<< endl;
cout << "Item Name\t\t\t"<<"Item Name\t\t"<< "Item price "<<endl;

cout << "output1"<<endl;
for (i=0;i<n;i++)
{
    cout<<res[i].food_item_codes <<"\t\t"<< res[i].food_item_names <<"\t\t"<< res[i].food_item_prices<<endl;

}
int table_no, number;
cout << "give table no and number"<< endl;
cin >> table_no>>number;;

Customer customer[number];

int codes,quant;
for (i=0;i<number;i++)
{
    cout << "ENTER item "<< i+1 <<" code and quantity:  "<< endl;
    cin >> codes >> quant;
customer[i].code_customer=codes;
customer[i].quantity=quant;
}

cout << "BILL SUMMARY"<< endl;
int present;
int present_quantity;
int total_cost =0;




for (i=0;i<number;i++)
{
present=customer[i].code_customer;
present_quantity=customer[i].quantity;


for (int j=0;j<n;j++)
{
    if(present==res[j].food_item_codes)
    {
 cout<<res[i].food_item_codes <<"\t\t"<< res[i].food_item_names <<"\t\t"<< res[i].food_item_prices<<endl;
 total_cost=total_cost + res[i].food_item_prices*present_quantity;

    }
}


}
cout << total_cost;

    return 0;
}
