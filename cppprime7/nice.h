//
// Created by nice01qc on 2018/2/9.
//

#ifndef CPPPRIME7_NICE_H
#define CPPPRIME7_NICE_H

#include <iostream>
using namespace std;

class Boy;
class Girl{
    friend class Boy;
private:
    int age;
    string name = "girl";
    Boy *boy;
public:
    int getAge(){
        return age;
    }
    void missBoy();
    void seeBoy(Boy& boy1);
};

class Boy{
    friend class Girl;
private:
    int age;
    string name="boy";
    Girl *girl;
public:
    int getAge(){
        return age;
    }
    void missGirl();
    void seeGirl(Girl &girl1);
};


#endif //CPPPRIME7_NICE_H
