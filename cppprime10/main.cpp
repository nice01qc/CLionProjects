#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>
#include <vector>
#include <functional>
#include <regex>


using namespace std;
void coutvector(vector<int> a);
bool newsort(const int &a, const int& b){
    return a > b;
}
int main() {

    vector<int> vector1{2,3,4,5};
    vector<int> v;

    auto f = [](int a,int b){cout << a+b << endl;};


    istream_iterator<int> in_iter(cin);
    istream_iterator<int> eof;
    while(in_iter != eof){
        v.push_back(*(++in_iter));
    }

    coutvector(v);

    return 0;
}

void coutvector(vector<int> a){
    vector<int>::iterator f = a.begin();

    while(f != a.end()){
        cout << *f << "\t";
        f++;
    }

    cout << endl;
}