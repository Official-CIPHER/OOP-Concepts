#include<bits/stdc++.h>
using namespace std;


// Constructor and Destructor
class Customer{
  string name;
  int *data;

  public:
  // Constructor

  Customer(){
    name = "4";
    cout << "Constructor is Called :)" << name << endl;
  }

  // Customer(){
  //   name = "Vishal";
  //   data = new int;
  //   *data = 10;
  //   cout << "Constructor is Called :)"  << endl;
  // }

  // call order of constructor
  Customer(string name){
    this -> name = name;

    cout << "Constructor is Called :)" << name<< endl;
  }

  // Destructor - > Called only onces
  ~Customer(){
    // delete data;
    cout << "Destructor is Called :(" << name << endl;
  }


};

int main() {
  Customer a1("1"),a2("2"),a3("3"); // stack allocatio and auto call destructor

  // dynamically allocate
  Customer* a4 = new Customer;
  // but destructor is not called for this , so to free the space
  delete a4; // allocated in heap and need to delete manually
}