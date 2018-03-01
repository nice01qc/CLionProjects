#include <iostream>
#include <fstream>
#include <map>
#include <functional>

void fun() {}

int add(int a, int b) { return a + b; }

int divv(int a, int b) { return a - b; }

int main() {

//    Sales sales("nice",22);
//
//    std::cout << sales;
//
//    Sales sales1;
//    std::ifstream in("C:\\Users\\nice01qc\\CLionProjects\\cppprime14\\cinfile");
//    in >> sales1;
//
//    std::cout << sales1;
//    Sales sum = sales + sales1;
//
//    std::cout << sum;
//
//    std::cout << (sales == sales1) << std::endl;
//
//    std::cout << *sales << std::endl;
//
//    sales->size();
//
//    std::cout << "sales(-4): \t" << sales(-4) << std::endl;


//    std::map<std::string, int (*)(int, int)> binops;
//
//    binops.insert({"+", add});
//    binops.insert({"-", divv});
//
//    std::cout << binops["+"](3, 4) << std::endl;
//
//    std::function<int(int, int)> f1 = add;
//    std::function<int(int, int)> f2 = [](int a, int b) -> int { return a + 1 + b; };
//
//    std::map<std::string, std::function<int(int,int)>> map1;
//    map1.insert({"+",add});
//
//    std::cout << map1["+"](2,33) << std::endl;
//
//    SmallInt s = 4;
//    std::cout << (3+s) << std::endl;

    using namespace std;
//    int add(int a, int b) { return a + b; }
//    string add(string a, string b) { return a+b; }
////解决办法
//    int (*add1)(int, int) = add;

    class SmallInt{
    public:
        SmallInt(int i=0):val(i){}
        explicit operator int() const{
            return val;
        }

    private:
        int val;
    };
    SmallInt si;
    si = 4;	//隐式调用构造转换，然后调用operator=
    cout << (static_cast<int>(si) + 3) <<endl;	// 调用类型转换，然后执行加法

    return 0;
}