//
// Created by nice01qc on 2018/2/22.
//

#ifndef CPPPRIME12_STRBLOB_H
#define CPPPRIME12_STRBLOB_H


#include <iostream>
#include <vector>
#include <memory>
class StrBlobPtr;
class StrBlob{
    friend class StrBlobPtr;
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const {
        return data->size();
    }
    bool empty() const{
        return data->empty();
    }
    std::string& front();
    std::string& back();


private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string& msg) const;
};


#endif //CPPPRIME12_STRBLOB_H
