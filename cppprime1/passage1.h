//
// Created by nice01qc on 2018/2/4.
//

#ifndef CPPPRIME1_PASSAGE1_H
#define CPPPRIME1_PASSAGE1_H

#include <iostream>
#include <string>
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
void test6(){
    std::string a(10,'a');

    std::cout << a << std::endl;

}











#endif //CPPPRIME1_PASSAGE1_H
