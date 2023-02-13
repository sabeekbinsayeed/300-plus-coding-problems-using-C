#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:

    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
    Restaurant()
    {
        total_tax=0;
    }
    void setTax(int value)
    {
        total_tax=total_tax+value;
    }
};

class Customer
{
public:
    int code_customer;
    int quantity;
};

int main()
{
int n;
cin >> n;
int code,price;
string name;



Restaurant res;

int i;

for (i=0;i<n;i++)
{
    cin>> code ;
    getchar();
    getline(cin,name);

    cin >> price;
    res.food_item_codes[i]=code;
    res.food_item_names[i]=name;
    res.food_item_prices[i]=price;
}

cout << "Make bill"<< endl;
cout << "Item Name\t\t\t\t"<<"Item Name\t\t\t\t"<< "Item price\t\t"<<endl;
for (i=0;i<n;i++)
{
    cout<<res.food_item_codes[i] <<"\t\t\t\t\t"<< res.food_item_names[i] <<"\t\t\t\t\t"<< res.food_item_prices[i]<<endl;

}
int table_no, number;
cout << "give table no"<< endl;
cin >> table_no;;
cout << "Enter the number of items"<< endl;
cin >> number;

Customer customer[number];

int codes,quant;
for (i=0;i<number;i++)
{
    cout << "ENTER item "<< i+1 <<" code:  "<< endl;
    cin >> codes;
    cout << "ENTER item "<< i+1 <<" quantity:  "<< endl;
    cin  >> quant;
customer[i].code_customer=codes;
customer[i].quantity=quant;
}

cout << "BILL SUMMARY"<< endl;
cout <<"Table number :" << table_no<<endl;
int present;
int present_quantity;
int total_cost =0;

cout << "Item code\t"<<"Item name\t " << "Item price\t "<<"Item quantity\t " <<"Total Price" << endl;

int flag=1;

for (i=0;i<number;i++)
{
present=customer[i].code_customer;
present_quantity=customer[i].quantity;


for (int j=0;j<n;j++)
{
    if(present==res.food_item_codes[j])
    {
        int calc_price=present_quantity* res.food_item_prices[j];
 cout<<res.food_item_codes[j] <<"\t\t"<< res.food_item_names[j] <<"\t\t"<< res.food_item_prices[j]<<"\t\t"<<present_quantity<<" \t\t"<<calc_price<<endl;
 total_cost=total_cost + res.food_item_prices[j]*present_quantity;
 flag=0;

    }
}


}
if (flag==1)
{
cout << "enter correct number"<< endl;
return 0;
}
float tax=(5.0*total_cost)/100;
total_cost=total_cost+tax;
res.setTax(tax);
cout <<"-------------------------------------------------------------------------------------------------------"<< endl;
cout << "Net total  " << total_cost <<endl;

    return 0;
}

