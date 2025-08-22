#include<bits/stdc++.h>
using namespace std;

// File Handling

int main() {
  // Create a object for file
  ofstream outFile("example.txt");

  // Writing to file
  outFile << "Hello World, Learning File Handling in OOP!";
  outFile.close(); // Always close after writing

  // create object for reading
  ifstream file("example.txt");
  string s;

  // reading from file
  // file >> s;  // Single word ke liye hai
  // cout << "Reading from File : " << s << endl;

  getline(file,s);
  cout << "Read Whole para : " << s;

  return 0;
}