#include<bits/stdc++.h>
using namespace std;

// File Handling 
 // 6. ios::ate - at end Mode 
 // we can overwrite content also and move cursor pointer at start also

 /*
  Get pointer  - (seekg/tellg) - used track position for reading
  Put pointer  - (seekp/tellp) - used track position for writing

  • seekp - set put pointer - allow to move pointer 
  syntax - seekp(offset,direction)
          offset - how many no. to move,
          direct - ios::beg (start),ios::cur(current position),ios::end(end)

  • tallp - tell put pointer
  example :-
      ofstream file("hello.text");
      file << "Hello";
      cout << "Current put pointer: " << file.tellp() << endl; // Positon after Hello

 */

int main() {
  // 1. Create a file with initial content
  ofstream createfile("File6.txt");
  createfile << "Hello World\n";
  createfile.close();

  // 2. Open file in ate Mode
  fstream file("File6.txt",ios::in | ios::out | ios::ate);

  // Pointer is at end
  cout << "Initial put pointer position: " << file.tellp() << endl;

  // 3. Move pointer back to overwrite first word
  file.seekp(0); // start
  file << "Hi";

  // 4. Append new text at the end
  file.seekp(0,ios::end); // end
  file << "Adding More Text!";
  file.close(); 

  cout << "Another put pointer position: " << file.tellp() << endl; 
  // if file close then -1

  // 5. show final content
   ifstream inFile("File6.txt");
    string line;
    while(getline(inFile, line)){
    cout << line << endl;
    }
    inFile.close();

  return 0;
}
