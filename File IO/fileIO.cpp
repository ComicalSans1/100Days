#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void) {
    ofstream file1;
    file1.open("hi.txt");
    file1 << "ooo magic\n";
    file1.close();

    ofstream file2("hi.txt", ios::app);
    file2 << "\nmagic again\n";
    file2.close();

    string line;
    ifstream ifile("hi.txt");
    while (getline (ifile,line))
    {
        cout << line << endl;
    }
    ifile.close();

    cout << endl;

    streampos beg, end;
    ifstream ifile1("hi.txt", ios::binary);
    beg = ifile1.tellg();
    ifile1.seekg(0, ios::end);
    end = ifile1.tellg();
    ifile1.close();
    cout << "size: " << end-beg << " bytes " << endl; 
}