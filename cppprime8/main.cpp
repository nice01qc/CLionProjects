#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Boy.h"
#include <io.h>
#include <cstring>
using namespace std;
struct PersonInfo{
    string name;
    vector<string> phones;
};
void test01();
int main() {

//    Boy boy;
//
//    string ifile = "C:\\Users\\nice01qc\\CLionProjects\\cppprime8\\test";
//    ifstream in(ifile);
//    cout << "open ? " << in.is_open() << endl;
//    in.open(ifile + ".txt",in.in);
//    cout << "open ? " << in.is_open() << endl;
//
//    ofstream out("C:\\Users\\nice01qc\\CLionProjects\\cppprime8\\out.txt");
//    cout << out.is_open() <<endl;
//    string name;
//    int age;
//    in >> name >> age;
//    cout << name << "\t" << age << endl;
//    out << name << "\t" << age << flush;

//    test01();
    cout << (32 & 0x10) <<endl;
    void listFiles(const char* dir);
    char dir[200];
    cout << "enter a directory (end with \'\\\'): " <<flush;
    cin.getline(dir,200);
    strcat(dir,"*.*");
    listFiles(dir);

    return 0;
}

void test01(){
    string line, word;
    vector<PersonInfo> people;

    while(getline(cin,line)){
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while(record >> word){
            info.phones.push_back(word);
        }
        people.push_back(info);
        break;
    }

    cout << people[0].phones[0] << endl;
}

void listFiles(const char* dir){
    intptr_t handle;
    _finddata_t findData;

    handle = _findfirst(dir,&findData);
    // 查找目录中的第一个文件
    if (handle == -1){
        cout << "Failed to find first file !\n";
        return ;
    }
    do{
        if (findData.attrib & _A_SUBDIR && strcmp(findData.name,".") != 0 && strcmp(findData.name,"..") != 0){
            cout << findData.name<< '\t' << "<dir>\t";

            string newdir(dir);
            size_t index = newdir.find("*.*");
            cout << index << "\t";
            newdir.replace(index,4,findData.name);
            newdir += "\\*.*";
            cout << newdir<<endl;
            listFiles(newdir.c_str());
        }else{
            cout << findData.name << '\t' << findData.size << '\t' << findData.attrib << endl;
        }
    }while (_findnext(handle,&findData) == 0);

    cout << "done !" << endl;
    _findclose(handle);
}