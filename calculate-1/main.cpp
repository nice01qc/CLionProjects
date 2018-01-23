#include <iostream>
#include "first.h"
#include <cmath>

using namespace std;


void nice(...);
int main() {

    int a[2] = {2,3};
    cout << *a <<endl;


    return 0;
}

void nice(...){
    cout << "nice \t" <<endl;
}