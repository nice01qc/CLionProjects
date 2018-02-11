#include <iostream>
#include "test.h"

using namespace std;

int main() {
    cout << "----------------main starts---------------" << endl;
    int a;
    auto old_state = cin.rdstate();
    cout << old_state << endl;

    cout << cin.good() << endl;


    return 0;
}

