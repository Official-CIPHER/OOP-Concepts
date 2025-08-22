#include<iostream>
#include<fstream>
using namespace std;

// File Mode in C++
 // 2. ios::out  -> Write Mode

int main() {

  fstream  meraFile("File2.txt",ios::out);
  meraFile << "Ab Change bhi kar diya content" << endl;
  meraFile.close();

  return 0;
}