#include<bits/stdc++.h>
using namespace std;

// Static and Dynamic allocation
class Student {
  private:
  string name;
  int age, roll_no;
  string grade;


  public:
  // Setter function
  void setdata(string name1,int age1,int roll1,string grade1){
    name = name1;
    age = age1;
    roll_no = roll1;
    grade = grade1;
  }

  // Getter function
  void getData(){
    cout << name << endl;
    cout << age << endl;
    cout << roll_no << endl;
    cout << grade << endl;

  }

};

int main() {
  Student* s1 = new Student; // dynamically heap memory main store hoga
  // (*s1).name = "vishal"; // we can access variable through .
  // s1 -> age = 21; // also -> to access the variable
  // s1 -> roll_no = 211103;
  // s1-> grade = "A"; 

  // cout << s1 -> name; // vishal

  s1-> setdata("vishal",21,211103,"A");
  s1 -> getData();



  return 0;
}