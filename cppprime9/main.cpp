#include <iostream>
#include <vector>
#include <deque>
#include <bits/forward_list.h>
#include <list>

using namespace std;

void coutvector(vector<int> x);

int main() {

    vector<int> a = {1, 2, 3, 4,5,6,7,8,9};
    auto iter = a.begin();
    while (iter != a.end()){
        if (*iter % 2){
//            iter = a.insert(iter,*iter);
            iter += 1;
        }else{
            iter = a.erase(iter);
        }
    }

    coutvector(a);

    return 0;
}

void coutvector(vector<int> x) {
    for (auto first = x.cbegin(); first != x.cend(); ++first) {
        cout << *first << '\t';
    }
    cout << endl;
}