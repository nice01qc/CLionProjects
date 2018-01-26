#include <iostream>

#include "first.h"

using namespace std;

Sales_data::Sales_data(std::istream& is){
    read(is,*this);
}

double Sales_data::avg_price() const {
    if (units_sold){
        return revenue/units_sold;
    }else{
        return 0;
    }
}

Sales_data& Sales_data::conbine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.conbine(rhs);
    return sum;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price() << endl;

    return os;
}

istream &read(istream &is,Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
