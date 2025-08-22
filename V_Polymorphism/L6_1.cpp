#include<iostream>
using namespace std;

// Polymorphism

// function overlaoding

class Area {
  public:

  int calculateArea(int r){ // circle
    return 3.14 * r * r;
  }

  int calculateArea(int l,int b){ // rectangle
    return l*b;
  }

};

int main() {
  Area A1;
  cout << A1.calculateArea(4) << endl;
  cout << A1.calculateArea(4,3) << endl;

}