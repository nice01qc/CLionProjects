//
// Created by nice01qc on 2018/2/9.
//

#ifndef CPPPRIME7_TEST_H
#define CPPPRIME7_TEST_H

#include <iostream>
using namespace std;
typedef string Type;
class Exercise{
public:
    typedef double Type;
    Type setVal(Type);
    Type initVal();

private:
    int val;
};

Exercise::Type Exercise::setVal(Exercise::Type type) {
    val = type;
}

class Entrust{
    static int staticage;
    int age;
    string name;
public:
    static int sta;
    Entrust(int ag,string nm):age(ag),name(nm){}
    Entrust():Entrust(22,"nier"){}
    Entrust(int age):Entrust(age,"haishi nier"){}
    void sout(){
        cout << "age:" << age << "name: " << name << endl;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Entrust::age = age;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Entrust::name = name;
    }

    void combine(Entrust entrust){
        this->age += entrust.getAge();
        this->name += entrust.getName();
    }

    static void coutstatic(){
        cout << " this is my static !" << endl;
    }

    static int* getstatic(){
        return &staticage;
    }



};
int Entrust::staticage = 333333333;
int Entrust::sta = 22;
#endif //CPPPRIME7_TEST_H
