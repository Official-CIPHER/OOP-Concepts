#include <iostream>
#include <fstream>
using namespace std;

// File Mode in C++
 // 5. ios::trunc  -> Delete Mode - 
 // Delete all previous contents of file when opening 

int main() {
    fstream file("example.txt", ios::out | ios::trunc); // Delete old content
    file << "File is cleared and only this remains." << endl;
    file.close();
    return 0;
}
