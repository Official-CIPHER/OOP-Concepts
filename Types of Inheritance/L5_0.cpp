#include<iostream>
using namespace std;

// Types of inheritance
// 1. Single Inheritance


class Human {
  protected:
  string name;
  int age;

  public:
  // order of constructor call
  // Human() {
  //   cout << "1st. Hello Human\n";
  // }

  // inheritance again
  Human(string name,int age){
    this-> name = name;
    this -> age = age;
  }

  void work() {
    cout << "I'm working \n";
  }

  // void display() {
  //   cout << name << " " << age << endl;
  // }

  // order of Destructor call
  // ~Human() {
  //   cout << "2nd. Human Destructor \n";
  // }

};

class Student : public Human{
  int roll_Num,fees;
  
  public:
  Student(string name,int age,int roll_num,int fees):Human(name,age){ 
    this -> roll_Num = roll_num;
    this -> fees = fees;
  }

  // order of constructor call
  // Student() {
  //   cout << "2nd. Hello Student \n";
  // }

  void display() {
    cout << name << " " << age << " "<< roll_Num
    <<" " << fees << endl;  
  } 

  // ~Student() {
  //   cout << "1st. Student Destructor \n";
  // }

};

int main() {
  Student A1("Saurav",22,211082,85);

  A1.display(); // 1. check in student object if present show otherwise
  // parent class show

  // order of constructor call 
  // 1. parent constructor call
  // 2. child constructor call
  // Student A2;

  // order of destructor call
  // 1. child deconstructor call
  // 2. parent deconstructor call
}