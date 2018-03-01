//
// Created by nice01qc on 2018/2/24.
//

#ifndef CPPPRIME14_SALES_H
#define CPPPRIME14_SALES_H


#include <string>
#include <iostream>

class Sales {
    friend std::ostream &operator<<(std::ostream &, Sales &);

    friend std::istream &operator>>(std::istream &in, Sales &sales);

    friend Sales operator+(const Sales &s1, const Sales &s2);

    friend bool operator==(const Sales &s1, const Sales &s2);

public:
    Sales() = default;

    Sales(std::string stringName, std::size_t number) : name(stringName), num(number) {}
    std::string &operator*() {
        std::cout << " string name...." << std::endl;
        return name;
    }

    std::string *operator->() {
        return & this->operator*();
    }
    // 函数调用运算符
    int operator() (int x) const {
        return x > 0 ? x : -x;
    }
//    std::ostream &operator<< (std::ostream& out){
//        out << name << "\t" << num << std::endl;
//        return out;
//    }
//
    int wo;
private:
    std::string name;
    std::size_t num;

};

// 声明未友元函数后，一下两个声明可以不用写
std::ostream &operator<<(std::ostream &out, Sales &sales); //在头文件声明，在源文件定义，这样不会报错。直接在main前声明定义也可以用

std::istream &operator>>(std::istream &in, Sales &sales);

Sales operator+(const Sales &s1, const Sales &s2);

bool operator==(const Sales &s1, const Sales &s2);
#endif //CPPPRIME14_SALES_H
