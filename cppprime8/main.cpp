#include <iostream>
#include <fstream>
#include "Boy.h"
using namespace std;

int main() {

    Boy boy;

    string ifile = "C:\\Users\\nice01qc\\CLionProjects\\cppprime8\\test";
    ifstream in(ifile);
    cout << "open ? " << in.is_open() << endl;
    in.open(ifile + ".txt",in.in);
    cout << "open ? " << in.is_open() << endl;

    ofstream out("C:\\Users\\nice01qc\\CLionProjects\\cppprime8\\out.txt");
    cout << out.is_open() <<endl;
    string name;
    int age;
    in >> name >> age;
    cout << name << "\t" << age << endl;
    out << name << "\t" << age << flush;



    return 0;
}