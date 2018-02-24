//
// Created by nice01qc on 2018/2/23.
//
#include "Sales_data.h"

Sales_data::Sales_data(const Sales_data &sd) {
    this->bookName = sd.bookName + " + 0 ";
    this->bookNo = sd.bookNo + 10;
    std::cout << "copy constructor..." << std::endl;
}
Sales_data& Sales_data::operator=(const Sales_data &rhs) {
    bookName = rhs.bookName + " + 1 ";
    bookNo = rhs.bookNo + 1;
    std::cout << "operator runing ..." << std::endl;
    return *this;
}

