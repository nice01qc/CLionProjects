#include <iostream>
#include <vector>

using namespace std;

void coutvector(vector<int> x);

int main() {

    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {5, 6, 7, 8, 9, 10, 11, 12, 13};

    a.swap(b);


    coutvector(a);
    coutvector(b);

    return 0;
}

void coutvector(vector<int> x) {
    for (auto first = x.cbegin(); first != x.cend(); ++first) {
        cout << *first << '\t';
    }
    cout << endl;
}