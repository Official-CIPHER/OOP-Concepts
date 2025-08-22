#include<iostream>
using namespace std;

// Types of inheritance
// 5. Hybride Inheritance


class Student {
 public:
 void print()
 {
  cout << "I am student\n";
 }

};

class Male{
public:
void maleDisplay(){
  cout << "I am Male\n";
}
};

class Female{
public:
void femaleDisplay(){
  cout << "I am Female\n";
}
};

class Boy:public Student,public Male{
public:
void boyDisplay(){
  cout << "I am boy\n";
}

};

class Girl:public Student , public Female{
public:
void girlDisplay(){
  cout << "I am girl\n";
}
};


int main() {
  Girl k;
  k.girlDisplay();
  k.femaleDisplay();
  k.print();

  Boy v;
  v.boyDisplay();
  v.maleDisplay();
  v.print();

  
}