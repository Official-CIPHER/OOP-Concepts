#include<bits/stdc++.h>
using namespace std;

class Node{

  private:
  int id;

  public:

  void accessId(int idLikho) {
    id = idLikho;
    cout << id;
  }

  string name;
  int age,roll_no;
  string grade;
};

int main() {
  Node student;
  student.age = 22;
  student.name = "rahul";
  student.roll_no = 211071;
  student.grade = "A+";
  student.accessId(21);

  cout << endl;

  cout << student.name;
  

  return 0;
}