#include<iostream>
using namespace std;

// Types of inheritance
// 6. Multipath Inheritance

class Human{
  public:
  string name;

  void diplay(){
    cout << "My name is " << name << endl;
  }
};


class Engineer: public virtual Human {
    public:
    string specialization;

    void special()
    {
      cout<< "I have a specialization in " << specialization << endl;
    }

};

class Employee: public virtual Human {
  public:
  int salary;
  string department;

  void work() {
    cout << "I am a " << department << endl;
    cout << "My Salary is " << salary << endl;
  }

};


class Fresher : public Engineer, public Employee{
  public: 
  int age;

  Fresher(string name1,string specialization1,string department1,int salary1,int age1){
    name = name1;
    specialization = specialization1;
    department = department1;
    salary = salary1;
    age = age1;
  }
};


int main() {
  
  Fresher f1("Vishal","MERN-Stack","Software Engineer",50000,22);

  cout << "My name is : "<<f1.name << endl;
  f1.special();
  f1.work();

}