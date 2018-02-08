//
// Created by nice01qc on 2018/2/8.
//
#include "B.h"
using namespace std;

B::B() {
    mA = new A();
}

B::~B() {}

void B::displayB() {
    cout << "this is the B" << endl;
}

void B::invokeClassAinClassB() {
    cout << "class B invoke class A starts >> " << endl;
    mA->displayA();
}

