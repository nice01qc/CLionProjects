//
// Created by nice01qc on 2018/2/23.
//

#ifndef CPPPRIME12_QUERYRESULT_H
#define CPPPRIME12_QUERYRESULT_H

#include <iostream>
#include <memory>
#include <vector>
#include <set>

class QueryResult{
    friend std::ostream& print(std::ostream&, const QueryResult&);
    using line_no = std::vector<std::string>::size_type;
public:
    QueryResult(std::string s, std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):
                sought(s), lines(p),file(f) {}

private:
    std::string sought; // 查询的单词
    std::shared_ptr<std::set<line_no>> lines;    // 出现的行号
    std::shared_ptr<std::vector<std::string>> file; // 输入的文件
};





#endif //CPPPRIME12_QUERYRESULT_H
