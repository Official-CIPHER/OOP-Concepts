#include<iostream>
using namespace std;

// Inheritance 

// parent class (base class)
class Human {

private:
string Religion,caste;

public:
 string name;
 int age, weight;
};

class Student: public Human {
  int roll_num,fees;

  public:
  void fun(string n,int a,int w){
    name = n;
    age = a;
    weight = w;
  }

  void display(){
    cout << name << " " << age << " " << weight << endl;
  }

};

// child class (derived class)
class Teacher: public Human{
  int salary ,id;
};


int main() {
 Student A;
 A.fun("vishal",22,70);
 A.display();
 Teacher B;
 B.name = "Mohit";
 cout << B.name;
}
