//
// Created by nice01qc on 2018/2/24.
//

#ifndef CPPPRIME13_HASHPTR_H
#define CPPPRIME13_HASHPTR_H

#include <string>
#include <iostream>

class HashPtr {

public:
//    HashPtr(std::string s = "", int num = 0): ps(&s), i(num) {}
    HashPtr(const std::string &s = std::string()) :
            ps(new std::string(s)), i(0) {}

    HashPtr(const HashPtr &p) : ps(new std::string(*p.ps)), i(p.i) {
        std::cout << "constructor copy ...." << std::endl;
    }

    HashPtr &operator=(const HashPtr &p)= delete;

    HashPtr(HashPtr &&hashPtr)noexcept :ps(new std::string(*hashPtr.ps)), i(10) {
        std::cout << "moving construction....." << std::endl;
    }

    HashPtr& operator=(HashPtr&& hashPtr) noexcept {
        ps = new std::string(*hashPtr.ps);
        i = hashPtr.i;
        std::cout << "move copy value = is operating......" << std::endl;
        return *this;
    }
    ~HashPtr(){
        delete ps;
    }

    void print() {
        std::cout << *ps << "\t" << i << std::endl;
    }

    void setstring(std::string str) {
        *ps = str;
    }

    void sort() &&{
        std::cout << "&& " << std::endl;
    }
    void sort() &{
        std::cout << "& " << std::endl;
    }


private:
    std::string *ps;
    int i;
};


#endif //CPPPRIME13_HASHPTR_H
