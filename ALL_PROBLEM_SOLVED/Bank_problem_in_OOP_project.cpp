#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;
protected:
    int balance;

private:
    string password;
public:
    BankAccount(string account_holder, string address, int age,string password)
    {
        this->account_holder=account_holder;
        this->address=address;
        this->age=age;
        this->password=password;
        this->balance=0;
        this->account_number=rand()%100000;
        cout << "your account number is "<< this->account_number << endl;

    }

    int showbalance(string password)
    {
        if( this->password==password)
        {
            return balance;
        }
        else
        {

            return -1;
        }

    }
    void addBalance(string password, int amount)
    {
        if (password==this->password)
        {
            balance=balance+amount;
        }
        else
        {
            cout << "wrong password , cannot update balance" << endl;
        }
    }

    void depositBalance(string password, int amount)
    {
        if (password==this->password)
        {
            balance=balance-amount;
        }
        else
        {
            cout << "wrong password , cannot update balance" << endl;
        }
    }

friend class MyCash;
};

class MyCash{
protected:
    int balance;
public:
    MyCash()
    {
        this->balance=0;
    }
    void add_money_from_bank(BankAccount *account,string password, int amount)
    {
        if (account->password==password)
        {
this->balance=this->balance + amount;
account->balance-=amount;
cout << "add money is successful" << this->balance << endl;
        }
        else
        {
            cout<< "password does not match";
        }
    }



     int showbalance()
    {

            return this->balance;


    }
};

void addmoney(BankAccount * account)
{
    cout << " add money"<< endl;
    string password;
    int amount;
    cin >> password >> amount;
    account->addBalance(password,amount);


     int balance_account=account->showbalance("sabeek");
if (balance_account==-1)
{

cout << "no balance"<< endl;
}
else
{
    cout << "Your balance is "<< balance_account << endl;

}


}

void depositMoney(BankAccount * account)
{
    cout << " deposit money"<< endl;
    string password;
    int amount;
    cin >> password >> amount;
    account->depositBalance(password,amount);

    int balance_account=account->showbalance("sabeek");
if (balance_account==-1)
{

cout << "no balance"<< endl;
}
else
{
    cout << "Your balance is "<< balance_account << endl;

}

}

BankAccount* create_account()
{
    cout << "Create an account"<< endl;
    string account_holder, address, password;
    int age;
    cin>> account_holder>> address>> age>> password;
    BankAccount *myaccount=new BankAccount(account_holder,address, age, password);

    int balance_account=myaccount->showbalance("sabeek");
if (balance_account==-1)
{

cout << "no balance"<< endl;
}
else
{
    cout << "Your balance in main bank is  "<< balance_account << endl;

}

}


void add_money_from_mybank(MyCash *mycash,BankAccount *myaccount)
{
    cout << " MONey from mycash money"<< endl;
    string password;
    int amount;
    cin >> password >> amount;
    mycash->add_money_from_bank(myaccount,password,amount);
    cout << mycash->showbalance()<<endl;
    cout << myaccount->showbalance("sabeek")<<endl;





}
int main()
{
BankAccount *myaccount=create_account();

MyCash *mycash=new MyCash();
while(true)
{
    cout << "select option" << endl;
    cout << "1. Add money to bank"<< endl;
    cout << "2. Deposit money from bank"<< endl;
    cout << "3. Add money to mycash from bank"<< endl;
     int option;
     cin >> option;
     if (option==1)
     {
         addmoney(myaccount);

     }
     else if(option==2)
     {
         depositMoney(myaccount);
     }

      else if(option==3)
     {
         add_money_from_mybank(mycash,myaccount);
     }

     else
     {

         cout << "enter the correct number"<< endl;
     }

}







    return 0;
}
