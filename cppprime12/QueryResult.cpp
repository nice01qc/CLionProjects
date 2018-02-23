//
// Created by nice01qc on 2018/2/23.
//
#include "QueryResult.h"
std::ostream& print(std::ostream& os, const QueryResult& result){

    os << result.sought << " occurs " << result.lines->size() << " times" << std::endl;

    for (auto num : *result.lines){
        os << "\t(line" << num + 1 << " ) " << *(result.file->begin() + num) << std::endl;
    }

};