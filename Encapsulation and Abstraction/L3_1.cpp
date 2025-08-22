#include<bits/stdc++.h>
using namespace std;

// const 

class Mobile
{
  const string model;
  int battery;

  public:
  Mobile(string name,int val): model(name),battery(val) {}; // initializer list


  int getBattery() const {
    return battery;
  }

  string getModel() const {
    return model;
  }

  void chargeBattery(int per){
    battery += per;
  }

};

int main() {
  // non const object
  Mobile m1("OPPO",40);
  cout << "Mobile Battery Percent : " << m1.getBattery() << "%" << endl;

  m1.chargeBattery(20);
  
  cout << m1.getModel() << " Battery Percent after Charging: " << m1.getBattery() << "%" << endl;



  // const object
  const Mobile m2("IQOO",30);
  cout << m2.getModel() << " Battery Percent : " << m2.getBattery() << "%" << endl;

  // m2.chargeBattery(20); // const object cant access non const function 
  // cout << "Mobile Battery Percent after Charging: " << m2.getBattery() << "%" << endl;

}