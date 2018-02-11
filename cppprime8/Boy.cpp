//
// Created by nice01qc on 2018/2/11.
//
#include "Boy.h"

ostream& Boy::print(ostream &os, Boy &boy) {
    os << "name: " << boy.name << " age: " << boy.age << endl;
    return os;
}

istream& Boy::read(istream &is, Boy &boy) {
    is >> boy.name >> boy.age;
    return is;
}