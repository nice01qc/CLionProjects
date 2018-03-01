//
// Created by nice01qc on 2018/2/24.
//

#include "Sales.h"


std::ostream &operator<<(std::ostream &out, Sales &sales) {
    out << sales.name << "\t" << sales.num << std::endl;
    return out;
}

std::istream &operator>>(std::istream &in, Sales &sales) {
    in >> sales.name >> sales.num;
    if (in)
        std::cout << "succeed" << std::endl;
    else
        sales.name = "", sales.num = 0;
    return in;
};

Sales operator+(const Sales &s1, const Sales &s2) {
    Sales sum = s1;
    sum.name += "\t" + s2.name;
    sum.num += s2.num;
    return sum;
};

bool operator==(const Sales &s1, const Sales &s2) {
    return s1.name == s2.name && s1.num == s2.num;
};