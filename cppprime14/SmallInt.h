//
// Created by nice01qc on 2018/2/25.
//

#ifndef CPPPRIME14_SMALLINT_H
#define CPPPRIME14_SMALLINT_H


#include <cstddef>
#include <iostream>

class SmallInt {

public:
    SmallInt(int i):val(i) {
        std::cout << "smallInt(int i) ...." <<std::endl;
    }
    operator int() const {
        std::cout << "operator int() const ...." << std::endl;
        return val;
    }
private:
    std::size_t  val;


};


#endif //CPPPRIME14_SMALLINT_H
