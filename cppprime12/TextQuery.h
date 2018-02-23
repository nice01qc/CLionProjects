//
// Created by nice01qc on 2018/2/23.
//

#ifndef CPPPRIME12_TEXTQUERY_H
#define CPPPRIME12_TEXTQUERY_H

#include <memory>
#include <vector>
#include <map>
#include <set>

class QueryResult;
class TextQuery{
    using line_no = std::vector<std::string>::size_type;

public:
    TextQuery(std::ifstream&);
    QueryResult query(const std::string& ) const;

private:
    std::shared_ptr<std::vector<std::string>> file;     // 输入的文件
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};




#endif //CPPPRIME12_TEXTQUERY_H
