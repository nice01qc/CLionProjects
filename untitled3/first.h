//
// Created by newbie on 2017/11/1.
//

#ifndef UNTITLED3_HAOGE_H
#define UNTITLED3_HAOGE_H

class Sales_data {
    // 为非成员函数做友元申明
    friend Sales_data add(const Sales_data &, const Sales_data &);

    friend std::ostream &print(std::ostream &, const Sales_data &);

    friend std::istream &read(std::istream &is, Sales_data &item);

public:
    Sales_data() { std::cout << "none yo" << std::endl; };

    Sales_data(const std::string &s) : bookNo(s) {
        this->units_sold = 23;
        std::cout << "(const std::string &s):bookNo(s)" << std::endl;
    }

    Sales_data(std::istream &);

    std::string isbn() const {
        return bookNo;
    }

    Sales_data &conbine(const Sales_data &);

    double avg_price() const;


private:
    // 数据成员
    std::string bookNo;
    unsigned units_sold = 1;
    double revenue = 1.0;

};

// Sales_data 的非成员接口函数
Sales_data add(const Sales_data &, const Sales_data &);

std::ostream &print(std::ostream &, const Sales_data &);

std::istream &read(std::istream &is, Sales_data &item);


#endif //UNTITLED3_HAOGE_H
