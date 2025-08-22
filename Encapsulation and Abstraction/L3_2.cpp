#include<bits/stdc++.h>
using namespace std;

// Encapsulation and Abstraction

class Customer
{
  string name;
  int accNum, balance;

  
  // constructor
  public:
  Customer(string a,int b,int c){
    name = a;
    accNum = b;
    balance = c;
  }


  void display() {
    cout << name << " " << accNum << " " << balance << " " << 
    endl;
  }

  void deposit(int amount,string n) {
    if(amount > 0) {
      cout << n << " Deposited the money : " << amount << endl; 
      balance += amount;
    } else {
      cout << "Invalid amount" << amount << endl;
    }
  }

  void withdraw(int amount,string n){
    if(amount > 0 && amount <=balance ){
      cout << n << " Withdraw the money : " << amount << endl; 
      balance -= amount;
    } else {
      cout << "Invalid amount" << amount << endl;
    }
  }


};


int main() {

  // Abstraction -> only show essential info and hide the 
  // detail about function
  Customer A1("Vishal",1,1000);
  Customer A2("Vikash",1,1800);
  Customer A3("Bikash",1,1200);
  A1.deposit(-10,"Vishal");
  A1.display();
}