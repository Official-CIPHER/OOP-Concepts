#include<iostream>
#include<fstream>
using namespace std;

// File Mode in C++
 // 3. ios::app  -> Append Mode - add at the end

int main() {

  fstream  meraFile("File2.txt",ios::out | ios::app);
  meraFile << "New Line Add" << endl;
  meraFile.close();

  return 0;
}