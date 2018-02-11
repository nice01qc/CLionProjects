//
// Created by nice01qc on 2018/2/11.
//

#ifndef CPPPRIME8_BOY_H
#define CPPPRIME8_BOY_H

#include <iostream>
using namespace std;

class Boy{
    int age;
    string name;

public:
    Boy()=default;
    Boy(int boyage, string boyname):age(boyage), name(boyname){}
    istream &read(istream &is, Boy& boy);
    ostream& print(ostream& os, Boy& boy);

};
#endif //CPPPRIME8_BOY_H
