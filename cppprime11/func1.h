//
// Created by nice01qc on 2018/2/21.
//

#ifndef CPPPRIME11_FUNC1_H
#define CPPPRIME11_FUNC1_H

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

const string& tansform(const string& s, const map<string,string>& m);
map<string,string> buildMap(ifstream &map_file);
void word_transform(ifstream& map_file, ifstream& input);



#endif //CPPPRIME11_FUNC1_H
