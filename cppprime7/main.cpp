#include <iostream>
#include "test.h"

using namespace std;
int a[3] = {32,3,2};
int* func(int i){

    return a;
}
int main() {
    cout << "----------------main starts---------------" << endl;

    int *pd =  func(3);

    cout << pd[3] << endl;

    return 0;
}

