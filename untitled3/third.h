//
// Created by newbie on 2017/11/9.
//

#ifndef UNTITLED3_THIRD_H
#define UNTITLED3_THIRD_H

#include <iostream>

class A {
private:
    int x, y, z;
    static const int l =100;

public:
    A() : x(1), y(2), z(3) {std::cout << 232 <<std::endl;}

    A(int x):A(){}
    void sout() {
        std::cout << x << " " << y << " " << z << " " <<std::endl;
        std::cout << l << std::endl;
    }

    static int xxx;
    static A aa;
    static const int yy = 99;
    static int getl(){
        return l;
    }
};




#endif //UNTITLED3_THIRD_H
