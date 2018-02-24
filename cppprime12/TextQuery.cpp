//
// Created by nice01qc on 2018/2/23.
//
#include "TextQuery.h"
#include "QueryResult.h"
#include <fstream>
#include <sstream>
TextQuery::TextQuery(std::ifstream & in): file(new std::vector<std::string>){

    std::string text;
    while (getline(in,text)){
        file->push_back(text);
        int n = file->size() - 1;
        std::istringstream line(text);

        std::string word;
        while (line >> word){
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new std::set<line_no>);
            lines->insert(n);
        }


    }

}

QueryResult TextQuery::query(const std::string & str) const {
    std::shared_ptr<std::set<line_no >> nodata(new std::set<line_no >);

    auto loc = wm.find(str);

    if (loc == wm.end()){
        return QueryResult(str,nodata,this->file);
    }else{
        return QueryResult(str, loc->second,this->file);
    }
}