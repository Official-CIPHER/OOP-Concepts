#include<iostream>
using namespace std;

// Types of inheritance
// 3. Multiple Inheritance


class Engineer {
    protected:
    string specialization;

    public:
    void special()
    {
      cout<< "I have a specialization in " << specialization << endl;
    }

};

class Employee {
  protected:
  int salary;
  string department;

  public:
  void work() {
    cout << "I am a " << department << endl;
    cout << "My Salary is " << salary << endl;
  }

};


class Fresher : public Engineer, public Employee{
  public: 
  string name;

  Fresher(string name1,string specialization1,string department1,int salary1){
    name = name1;
    specialization = specialization1;
    department = department1;
    salary = salary1;
  }
};


int main() {
  
  Fresher f1("Vishal","MERN-Stack","Software Engineer",50000);

  cout << "My name is : "<<f1.name << endl;
  f1.special();
  f1.work();

}