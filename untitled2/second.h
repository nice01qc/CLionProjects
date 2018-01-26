//
// Created by newbie on 2017/11/9.
//

#ifndef UNTITLED3_SECOND_H
#define UNTITLED3_SECOND_H

#include <iostream>
#include "first.h"

class Screen {
    friend double Sales_data::avg_price() const;

public:
    typedef std::string::size_type pos;

    Screen(void):Screen('s'){};

    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    Screen(char c):Screen(3,4,c){}

    char get() const {
        return contents[cursor];
    }

    inline
    char get(pos r, pos c) const;

    Screen &move(pos r, pos c);


private:
    mutable size_t access_ctr = 0;
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

inline
Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];

}

#endif //UNTITLED3_SECOND_H
