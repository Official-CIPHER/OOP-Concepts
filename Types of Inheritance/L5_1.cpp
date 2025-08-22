#include<iostream>
using namespace std;

// Types of inheritance
// 2. MultiLevel Inheritance


class Person {
 protected:
 string name;

 public: 

 void intro() {
  cout << "Hello My name is : " << name << endl;
 }

};

class Employee:public Person{
  protected:
  int salary;

  public:
  void monthy_salary() {
    cout << "My Monthly Salary is : " << salary << endl;
  }

};


class Manager : public Employee {
  public: 
  string department;

  Manager(string name,int salary,string deparment) {
    this-> name = name;
    this -> salary = salary;
    this -> department = deparment;
  }

  void display() {
    cout<<"Department :" <<department << endl;
  }

};


int main() {
  Manager m1("Vishal",50000,"Software Engineer");
  m1.intro();
  m1.monthy_salary();
  m1.display();
}