#include<iostream>
#include<fstream>
using namespace std;

// File Mode in C++
 // 4. ios::binary  -> Binary Mode - only work with binary file not with plain text file

int main() {

  // write 
  fstream file("data.bin",ios::out | ios::binary);
  int num = 12345;
  file.write((char*)&num, sizeof(num));
  file.close();

  // read
  fstream filePadho("data.bin",ios::in | ios::binary);
  int readNum;

  filePadho.read((char*)&readNum,sizeof(readNum));
  filePadho.close();

  cout << "Nums read from binary file : " << readNum << endl;

  return 0;
}