#include<bits/stdc++.h>
using namespace std;

// Polymorphism

// Virtual overlaoding

class Animal {
  public:
  virtual void speak() = 0; // abstract class -> no object created
};
class Dog: public Animal {
  public:
  void speak() {
    cout << "Bark \n";
  }

  void roti() {
    cout << "Roti Kha lo";
  }

};
class Cat: public Animal {
  public:
  void speak() {
    cout << "Meow \n";
  }


};


int main() {
  // Animal *p;
  // p = new Dog();
  // p -> speak();
  // p -> roti(); // not accessiable b/c not a part of animal class

  Animal *p;
  vector<Animal*> animals;

  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Dog());

  // kaise likhoge
  for(int i =0;i<animals.size();i++){
    p = animals[i];
    p->speak();

  }


}