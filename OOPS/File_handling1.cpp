#include <iostream>
#include<fstream>
#include<string>

/*
The useful classes
1.fstream
2.ofstream
3.ifstream

*/

/*

The two ways to open file 
1. using constructor 
2. using open()

*/


using namespace std;
int main() {
    string st = "kunal";
    string st2;

    // Writing to the file
    ofstream out("sample.txt");
    if (out) { // Check if the file opened successfully
        out << st;
        out.close(); // Close the file after writing
    } else {
        cerr << "Error: Could not open file for writing!" << endl;
        return 1;
    }

    // Reading from the file
    ifstream in("sample.txt");
    if (in) { // Check if the file opened successfully
        getline(in, st2); // Read a line from the file
        cout << "Content of the file: " << st2 << endl;
        in.close(); // Close the file after reading
    } else {
        cerr << "Error: Could not open file for reading!" << endl;
        return 1;
    }

    return 0;
}