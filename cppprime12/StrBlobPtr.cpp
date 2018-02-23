//
// Created by nice01qc on 2018/2/23.
//
#include "StrBlobPtr.h"

std::shared_ptr<std::vector<std::string>>
        StrBlobPtr::check(std::size_t i, const std::string &msg) const {
    auto ret = this->wptr.lock();
    if (!ret)
        throw std::runtime_error(msg);
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

