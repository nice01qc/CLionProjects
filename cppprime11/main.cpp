#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <unordered_map>
#include "func1.h"
using namespace std;

int main() {

//    ifstream mymap("C:\\Users\\nice01qc\\CLionProjects\\cppprime11\\directory");
//    ifstream mytest("C:\\Users\\nice01qc\\CLionProjects\\cppprime11\\testString");
//    word_transform(mymap,mytest);

//    map<string,int> wordMap;
//    set<int> setl = {1,2,3,4,5,6};
//
//    wordMap.insert({"nice",33});
//
//    cout << wordMap["nice"] << endl;
//    auto ret = wordMap.insert({"nier",25});
//    auto ret1 = wordMap.insert({"nier",253});
//    auto ret2 = wordMap.insert({"nier",2533});
//
//    cout<< "wordMap.find(\"nice\")->first " << wordMap.find("nice")->first << endl;
//    cout << "wordMap.count('nice') " << wordMap.count("nice") << endl;
//    cout << ret1.first->first << endl;
//
//    cout << *setl.find(3) << endl;
//    cout << setl.count(30) << endl;
//
//    vector<int> vect = {1,2,3,4};
//    set<int> set1;
//    set1.insert(vect.begin(),vect.end());
//    set1.insert(5);
//    set1.insert({6});
//    set1.insert(set1.end(),9);
//    set1.emplace(81);  // 初始化加入那种
//    cout << "set1.erase(3) " << set1.erase(3) << endl;
//    cout << "set1.erase(p) " << *set1.erase(set1.begin()) << endl;
//    cout << "*set1.lower_bound(5)  " << *set1.lower_bound(7) << endl;
//    cout << "*set1.upper_bound(5)  " << *set1.upper_bound(7)<< endl;
//    cout << "set1.equal_range(5).first: " << *set1.equal_range(5).first << " ;set1.equal_range(5).second: " << *set1.equal_range(5).second << endl;
//    auto begin1 = set1.begin();
//    while (begin1 != set1.end()){
//        cout << *begin1 <<"\t";
//        begin1++;
//    }
//
//    map<string,int> map1;
//    auto ret12 = map1.insert({"nice",1});
//    multimap<string,int> map2;
//    auto reet = map2.insert({"nice",2});
//    cout << reet->second <<endl;


    unordered_map<string, int > c;
    c.insert({"nice",33});
    cout << c.bucket_size(1) << endl;
    cout << c.bucket_count() << endl;


    return 0;
}