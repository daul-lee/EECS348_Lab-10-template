#include <iostream>
#include <fstream>
#include <string>
#include "calculator.hpp"
using namespace::std;
int main(int argc, char *argv[]) {
    string line;
    string filename; 
    cout << "Enter the name of the file: ";
    cin >> filename;
    ifstream myfile (filename);
    if (myfile.is_open()){ 
        while ( getline (myfile,line) ){ 
            cout << parse_number(line)<< '\n';
            cout << parse_number(line) + -123.456 << '\n';
        }
        myfile.close();
    } else cout << "Unable to open file";
return 0;
}