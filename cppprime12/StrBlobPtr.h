//
// Created by nice01qc on 2018/2/23.
//

#ifndef CPPPRIME12_STRBLOBPTR_H
#define CPPPRIME12_STRBLOBPTR_H

#include <memory>
#include <vector>
#include "StrBlob.h"

class StrBlobPtr{
public:
    StrBlobPtr(): curr(0){}
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data),curr(sz) {}
    std::string& deref() const ;
    StrBlobPtr& incr();

private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};


#endif //CPPPRIME12_STRBLOBPTR_H
