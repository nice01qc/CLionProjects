#include <iostream>
#include <vector>
#include <deque>
#include <bits/forward_list.h>
#include <list>
#include <stack>
#include <queue>

using namespace std;

void coutvector(vector<int> x);

int main() {

    priority_queue<int> intStack;
    intStack.push(2);
    intStack.push(21);
    intStack.push(22);
    intStack.push(5);


    cout << intStack.top()<< endl;
    cout << intStack.empty() << endl;


    return 0;
}

void coutvector(vector<int> x) {
    for (auto first = x.cbegin(); first != x.cend(); ++first) {
        cout << *first << '\t';
    }
    cout << endl;
}