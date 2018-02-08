#include <iostream>
class A;
class B;

using namespace std;
//class Girl;
//class Boy {
//
//private:
//    int age = 22;
//    string name = "boy";
//    Girl girl;
//public:
//
//};
//
//class Girl{
//private:
//    Boy boy;
//    int age1 = 23;
//    string name1 = "girl";
//
//
//public:
//
//};

int main() {
    cout << "----------------main starts---------------" << endl;
    class B pB;
    class A pA(&pB);

    pA.displayA();
    pA.invokeClassBinClassA();





    return 0;
}

class A{
public:
    A();
    A(B *pB);
    ~A();

    void displayA();
    void invokeClassBinClassA();

private:
    B* mB;
};


A::A() {}

A::A(B *pb){
    mB = pb;
}

A::~A() {}

void A::displayA() {
    cout << "this is A" << endl;
}

void A::invokeClassBinClassA() {
    cout << "class A invoke class B starts >> " << endl;
//    mB->displayB();
    mB->displayB();
}


class B{
public:
    B();
    ~B();

    void displayB();
    void invokeClassAinClassB();

private:
    A *mA;
};

B::B() {
    mA = new A();
}

B::~B() {}

void B::displayB() {
    cout << "this is the B" << endl;
}

void B::invokeClassAinClassB() {
    cout << "class B invoke class A starts >> " << endl;
    mA->displayA();
}
