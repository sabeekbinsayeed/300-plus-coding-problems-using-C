#include <bits/stdc++.h>
using namespace std;
class Shop{
public:
    string product_name;
    int product_price;
    int product_quantity;

    private:
    int total_income;

    public:
        void setter (int total_income)
        {
            this->total_income=total_income;
        }

        int getter()
        {
            return this->total_income;
        }
};
int main()
{
int n;
cin>> n;
int i;
 Shop shop[n];
for (i=0;i<n;i++)
{
    string product_name;
    int product_price;
    int product_quantity;
    int total_income;

    cin>> product_name>>product_price>>product_quantity;
    shop[i].product_name=product_name;
    shop[i].product_price=product_price;
    shop[i].product_quantity=product_quantity;
    shop[i].setter(0);


}
cout << "product details"<<endl;
for (i=0;i<n;i++)
{
    cout << shop[i].product_name <<" "<< shop[i].product_price <<" "<< shop[i].product_quantity << endl;
}
string product;
int quantity;
cout << "Enter products and quantity"<< endl;
cin >> product >> quantity;

for (i=0;i<n;i++)
{
if(shop[i].product_name==product)
{

    if (shop[i].product_quantity <quantity)
    {
        cout << "Not enough products"<< endl;
    }
    else if (quantity <0)
    {
        cout << "quantity cannot be negative"<< endl;

    }

    else

    {
        shop[i].product_quantity=shop[i].product_quantity-quantity;
    int total=shop[i].product_price* quantity;
    cout << "updated "<< endl;
    cout << "total : " << total<<endl;


    }


}
}
cout << "All products"<<endl;
for (i=0;i<n;i++)
{
cout << shop[i].product_name <<" "<< shop[i].product_price <<" "<< shop[i].product_quantity << endl;
}
    return 0;
}
