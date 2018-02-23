#include <iostream>
#include <memory>
#include <vector>
#include <fstream>
#include "StrBlob.h"
#include "TextQuery.h"
#include "QueryResult.h"

using namespace std;

int main() {

//    shared_ptr<string> p1 = make_shared<string>(3,'a');
//
//    cout << p1->empty() << endl;
//
//    cout << p1.unique() << endl;
//    StrBlob b1;
//    {
//        StrBlob b2({"a","an","the"});
//        b1 = b2;
//    }
//
//    cout << b1.back() << endl;
//    cout << b1.front() << endl;

//    auto a = new int(300);
//    cout << *a << endl;

//    int *a = new int[4];
//    cout << a[1] << endl;

    ifstream infile("../infile.txt");

    TextQuery textQuery(infile);
    print(cout, textQuery.query("a"));



    return 0;
}