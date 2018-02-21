//
// Created by nice01qc on 2018/2/21.
//

#include <sstream>
#include "func1.h"

const string& tansform(const string& s, const map<string,string>& m){
    auto map_it = m.find(s);
    if (map_it != m.cend()){
        return map_it->second;
    }else{
        return s;
    }
};

map<string,string> buildMap(ifstream &map_file){
    map<string,string> trans_map;
    string key;
    string value;
    while(map_file >> key && getline(map_file,value)){
        if (value.size() > 1){
            trans_map[key] = value.substr(1);
        } else{
            throw runtime_error("no rule for " + key);
        }
    }
    return trans_map;

};

void word_transform(ifstream& map_file, ifstream& input){
    auto trans_map = buildMap(map_file);

    string text;
    while(getline(input,text)){
        istringstream stream(text);
        bool fistword = true;
        string word;

        while(stream >> word){
            if (fistword){
                fistword = false;
            }else{
                cout << "\t";
            }
            cout << tansform(word,trans_map);
        }
        cout << endl;
    }




};