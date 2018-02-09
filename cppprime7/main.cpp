#include <iostream>
#include "test.h"

using namespace std;

int main() {
    cout << "----------------main starts---------------" << endl;

    Entrust entrust;

    entrust.sout();

    Entrust entrust1(33);
    entrust1.sout();

    entrust.combine(entrust1);
    entrust.sout();

    entrust1.combine(100);
    entrust1.sout();



    return 0;
}


