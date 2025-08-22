// Constructor and Destructor
#include<bits/stdc++.h>
using namespace std;

class Customer{
 
  string name;
  int account_no;
  int balance;

  public:
  // default constructor -> hidden -> automatically called when object is created
  Customer() {
    cout << "Constructor is called"<< endl;
  }

  // Parameterized constructor
  Customer(string name, int account_no,int balance){
    this -> name = name;
    this -> account_no = account_no;
    this->balance = balance;
  }

  // this pointer -> when same variable name occurred
  Customer(string a,int b){
    name = a;
    account_no = b;
    balance = 50;
  }

  // Inline constructor
  inline Customer(string a):name(a),account_no(12345),balance(90) {}

  void display() {
    cout << name << " " << account_no << " " << balance << endl;
  }

  // Copy constructor
  Customer(Customer &B){
    name = B.name;
    account_no = B.account_no;
    balance = B.balance;
  }



};


int main() {
  Customer a1; // default constructor object

  Customer a2("vishal",123,1000); // parameterized constructor object
  
  Customer a3("kumar",123); // this pointer 

  Customer a4("Rohit"); // inline constructor
  
  // a1.display();
  
  // cout << "Parameterized constructor is called" << endl;
  // a2.display();
  
  // cout << "This pointer constructor is called" << endl;
  // a3.display();

  // cout << "Inline constructor is called" << endl;
  // a4.display();

  // Copy constructor
  Customer a5(a2);
  cout << "Copy constructor is called" << endl;
  a5.display();


}