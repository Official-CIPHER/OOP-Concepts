#include<bits/stdc++.h>
using namespace std;

// static data member and member function

class Customer
{
  string name;
  int accNum, balance;

  // static member:-
  static int totalAccounts;
  static int totalBalance;
  // constructor
  public:
  Customer(string a,int b,int c){
    name = a;
    accNum = b;
    balance = c;
    totalAccounts++;
    totalBalance += c;
  }

  // static member function -> only access static member
  static void accessStatic(){
    cout << "Total number of accounts :" <<totalAccounts << endl;
    cout << "Total Balances : " << totalBalance <<endl;
  }

  void display() {
    cout << name << " " << accNum << " " << balance << " " << 
    endl;
  }

  void deposit(int amount,string n) {
    if(amount > 0) {
      cout << n << " Deposited the money : " << amount << endl; 
      balance += amount;
      totalBalance += amount;
    }
  }

  void withdraw(int amount,string n){
    if(amount > 0 && amount <=balance ){
      cout << n << " Withdraw the money : " << amount << endl; 
      balance -= amount;
      totalBalance -= amount;
    } 
  }


};

int Customer ::totalAccounts = 0; 
int Customer ::totalBalance = 0; 

int main() {
  Customer A1("Vishal",1,1000);
  Customer A2("Vikash",1,1800);
  Customer A3("Bikash",1,1200);

  Customer::accessStatic();
  A1.deposit(800,"Vishal");
  Customer::accessStatic();
  A2.withdraw(250,"Bikash");
  Customer::accessStatic();
}