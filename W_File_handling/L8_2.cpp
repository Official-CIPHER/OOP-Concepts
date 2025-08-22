#include<iostream>
#include<fstream>
using namespace std;

// File Mode in C++
 // 1. ios::in  -> Read Mode

int main() {
  // Create a object for file
  ofstream outFile("File1.txt");

  // Writing to file
  outFile << "Ye Mera File hai jo ki read hone ke liye aa raha hai!";
  outFile.close(); // Always close after writing

  fstream  meraFile("File1.txt",ios::in);
  string s;

  if(!meraFile){
    cerr << "File not found!" << endl;
    return 1;
  }

  getline(meraFile,s);
  cout << s << endl;

  return 0;
}