//
// Created by nice01qc on 2018/2/9.
//
#include "nice.h"

void Girl::missBoy() {
    cout << name << endl;
}

void Girl::seeBoy(Boy &boy1) {
    cout << boy1.name  << endl;
}

void Boy::missGirl() {
    cout << name << endl;
}

void Boy::seeGirl(Girl &girl1) {
    cout << girl1.name << endl;
}