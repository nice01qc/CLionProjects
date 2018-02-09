//
// Created by nice01qc on 2018/2/9.
//

#ifndef CPPPRIME7_FIRST_H
#define CPPPRIME7_FIRST_H

#include <iostream>
using namespace std;

class Screen{
    int a;
    int b;

public:
    Screen& setab(int a,int b){
        this->a = a;
        this->b = b;
        return *this;
    }

    Screen& coutab(){
        cout << "a: " << a << "b: " << b << endl;
        return *this;
    }

//    Screen& display() const {
//        cout << "display a & b" << a << ";" << b << endl;
//        return *this;
//    }
};



#endif //CPPPRIME7_FIRST_H
