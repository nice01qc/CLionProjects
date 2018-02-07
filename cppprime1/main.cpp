#define NDEBUG
#include "passage1.h"
#include <cassert>


int main() {

//    test1();
//    test2();
//    test4();
//    test5();
//    test6();
//    test7();
//    test8();
//    test9();
//    test9();
//    test10(3);

    cout << __func__ << endl;
    cout << __FILE__ << endl;
    assert(3>5);
    cout << __LINE__ << endl;
    cout << __TIME__ << endl;
    cout << __DATE__ << endl;

    return 0;

}