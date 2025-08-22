#include<iostream>
using namespace std;

// Types of inheritance
// 4. Hierarchical Inheritance


class Human {
  protected:
  string name;
  int age;

  public:
  Human(){

  }
  
  Human(string name,int age){
    this-> name = name;
    this -> age = age;
  }

  void work() {
    cout << "I'm working \n";
  }

  void display() {
    cout << name << " " << age << endl;
  }

};

class Student : public Human{
  int roll_Num,fees;
  
  public:
  Student(string name,int age,int roll_num,int fees):Human(name,age){ 
    this -> roll_Num = roll_num;
    this -> fees = fees;
  }

  void display1() {
    cout << name << " " << age << " "<< roll_Num
    <<" " << fees << endl;  
  } 

};

class Teacher: public Human {
  int salary;

  public:
  Teacher(int salary,string name,int age){
    this->salary = salary;
    this->name = name;
    this -> age = age;
  }

  void show() {
     cout << name << " " << age << " "<< salary << endl; 
  }

};

int main() {
  Student A1("Vishal",22,211103,85);
  A1.display1();
  Teacher a2(45,"Ramesh",49);
  a2.show();
}