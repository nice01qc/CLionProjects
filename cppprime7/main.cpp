#include <iostream>
#include "test.h"

using namespace std;

int main() {
    cout << "----------------main starts---------------" << endl;

    Entrust entrust;
    entrust.coutstatic();
    Entrust::coutstatic();
    cout << entrust.sta << endl;
    cout << Entrust::sta << endl;

    cout << *Entrust::getstatic() <<endl;

    Entrust::sta = 5454;
    cout << Entrust::sta << endl;

    return 0;
}

