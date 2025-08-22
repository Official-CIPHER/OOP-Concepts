#include<iostream>
using namespace std;

// Inheritance 
class Human {
  private:
  int a;
  protected:
  int b;
  public: 
  int c;

  void func(){
    a = 10;
    b = 20;
    c = 30;

  cout << "private data : " << a << endl;
  cout << "protected data : " << b << endl;
  }

};



int main() {
  Human v;
  // v.a = 10; // not allowed
  // v.b = 10; // not allowed
  v.c = 10; // not allowed
  v.func();

  cout << "public data : " << v.c << endl;
  

}
