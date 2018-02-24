//
// Created by nice01qc on 2018/2/23.
//

#ifndef CPPPRIME13_SALES_DATA_H
#define CPPPRIME13_SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data {
public:
    Sales_data() = default;
    Sales_data(std::string s, int n):bookNo(n), bookName(s) {}
    Sales_data(const Sales_data&);
    void print() {
        std::cout << "bookNo: " << bookNo << "\tbookName: " << bookName << std::endl;
    }

    Sales_data &operator=(const Sales_data &);   // 重写=运算符

private:
    int bookNo;
    std::string bookName;
};


#endif //CPPPRIME13_SALES_DATA_H
