#include <iostream>
#include <vector>
#include "Sales_data.h"
#include "HashPtr.h"

using std::cout;
using std::swap;
void swap1(std::string &a, std::string &b){
    cout << a << "\t" << b << std::endl;
}
Sales_data pp(Sales_data sales_data){
    Sales_data s;
    s = sales_data;
    return Sales_data("nice",22);
}

std::string f(){return "1-1";}
int main() {

    Sales_data s1("one",1);
    Sales_data s2;

    s2=pp(s1);       // 由此可分清楚什么时候会调用拷贝构造，什么时候调用赋值拷贝

//    HashPtr hashPtr("nice");
//
//    HashPtr hashPtr1;
//    hashPtr1 = hashPtr;
//
//    hashPtr.print();
//    hashPtr1.print();
//
//    hashPtr.setstring("haoge");
//
//    hashPtr.print();
//    hashPtr1.print();
//
//    std::string a("nice");
//    std::string b("good");
//    swap(a,b);
//
//    cout << a << b << std::endl;

    using namespace std;
//    vector<string> vi{"a","b","c"};
//    string &&r1 = f();
//    string &r2 = vi[0];
//    string &&r3 = std::move(r1);
//    string &&r4 = vi[0] + f();
//    r3 += "r3 ";
//    cout << r1 << endl;
//
//    ostream &&ostream1= std::move(cout);
//
//    ostream1 << 33333333333 << endl;

//    HashPtr h1("nice");
//    HashPtr h2(h1);
//
//    move(h1).sort();
//
//    h2.sort();
    return 0;
}