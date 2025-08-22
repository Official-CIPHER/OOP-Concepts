#include<iostream>
using namespace std;

// Polymorphism

// Operator overlaoding

class Complex {
  int real,img;

  public:
  Complex(){}

  Complex(int r,int m){
    real = r;
    img = m;
  }

  void display(){
    cout << real << " +i" << img;
  }

  // adding
  Complex operator +(Complex &c){
    Complex ans;
    ans.real = real+ c.real;
    ans.img = img + c.img;
    return ans;
  }


};

int main() {
 Complex c1(3,4);
 Complex c2(4,5);

 Complex c3 = c1 + c2;
 c3.display();

}