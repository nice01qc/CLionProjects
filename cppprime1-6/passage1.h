//
// Created by nice01qc on 2018/2/4.
//

#ifndef CPPPRIME1_PASSAGE1_H
#define CPPPRIME1_PASSAGE1_H

#include <iostream>
#include <cstring>
struct foo{
    int a;
    int b;
    foo(int x){
        a=b=x;
    }
};
void test1() {
    int sum = 0, value = 0;

    // 直到你输入格式错误或者输入结束符\0
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
}


void test2() {
    int a = 100;
    int &b =a;  // 引用
    int *c = &a;    // 指针

    b =200;
    *c = 300;

    int *d = &b;
    *d = 500;
    
    std::cout << "a:" << a << "\t b:" <<b << std::endl;

    if (nullptr){
        std::cout << "nullptr is password !" << std::endl;
    }

    if (c){
        std::cout << "c point is password !" << std::endl;
    }
}

// 测试const
void test3(){
    /*
     * 分清楚常量指针 和 指向常量的指针便可
     */
    const int a =100;  //  不能修改它所绑定的对象
    // a = 200;  // -> 会报错
    //    int * b = &a; // 也不行
    // int &b = a; // 也不行

    const int * b = &a; // 放在最前面，可以修改指针，但不可以修改指针指向的那个值；所以只能说是一个指针指向了常量，而不能说是常量指针
    int bb = 100;
    b = &bb;

    int numb  = 3;
    int *const num = &numb; //这才是常量指针，本身不可以变，但其指向不管，视情况而定。
}

// 不能用函数参数的auto
void test4(){
    int b =110;
    auto a = b; // 必须初始化，不然出错
    std::cout << "a " << a << "\tb " << b << std::endl;
}

// 推测类型 decltype
void test5(){
    int a = 100;
    int *b = &a;
    decltype(a) c = 11;
    decltype(a) cc;
    decltype((*b)) bb = a; // 所得为 int & 引用类型，因为加了括号，为表达式（双层括号永远是引用)
    // decltype(*b) bbb; // 还不知道这种情况如何初始化

    std::cout << b << std::endl;

}

// #include<string>
#include <cctype>       // cctype 都是对单个字符进行操作的
void test6(){
    bool f1 = isalnum('a');
    bool f2 = iscntrl('b');
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;

}

void test7(){
    std::string str;
    while(std::cin >> str){     // 不知道如何暂停
        std::cout << str << std::endl;
    }
}

#include <vector>
using namespace std;
void test8(){
    vector<int> a{1,2,3,4,5,6};
    a.push_back(7);
    a.push_back(8);
    for (int temp : a){             // 如果要进行写操作必须声明为引用类型。
        cout << temp << '\t';
    }
    cout << endl;
    for (int i = 0; i < a.size(); ++i) {
        a[i] += 1;
        cout << a[i] << '\t';
    }
    cout << endl;

    for (auto item = a.begin(); item != a.end() && !a.empty();item++){
        *item += 1;
        cout << *item << '\t';
    }
    cout << endl;

    cout<< a.size() << endl;
}


void test9(){
    int a[] = {1,2,3};
    int * p = &a[3];
    auto f= begin(a);   // 获取begin开始指针
    auto f2 = end(a);   // 获取end结束指针
    cout << f2 - f;     // 可以这样获取数组长度
}

// 如何返回一个数组指针函数

auto test10(int i) -> int(*)[3]{
    static int a[] = {1,2,3};   // 返回指针必须已经存在，函数运行完就清除了，除了静态的

    return &a;
}

int a[3] = {1,2,3};
decltype(a) *test11(int i){

    return &a;
}

// 测试函数指针
void funczz(string str){
    cout << __func__ << endl;
    cout << __FILE__ << endl;
    cout << __LINE__ << endl;
    cout << __TIME__ << endl;
    cout << __DATE__ << endl;
    cout << str << endl;
}
void testfunc(void (*pf)(string)){

    pf("nice 01 1c !");
}






#endif //CPPPRIME1_PASSAGE1_H
