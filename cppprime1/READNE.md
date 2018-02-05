###### 注意：无符号类型会将负数的第一位变成1，所以会变成很大的数

### extern

​	通过变量的声明和定义解释其意义，int j =>声明并定义了j；extern int j =>仅仅声明；

### 指针与引用

- 引用便是变量的别名：int a = 100; int &b = a; =>b是a的别名。
- 指针便是指向变量地址的变量。int a = 100; int *b = &a; b为指向a的指针。


### const/constexpr

默认情况下，const修饰的仅在当前文件内有效。

const int b = 100;

const int bb = 200;

const int * a = &b;  -> 这是指向常量的指针 -> 也叫底层const。

int *const  aa = &bb; -> 这是常量指针 -> 也就是 顶层const。

注：普通的常量都是顶层const；只有指针既有顶层const，也有底层const。

### decltype

int i=1,*j=&i;

decltype((*j)) a = i;	// 加双层括号都算表达式，永远为引用类型

decltype(*j) aa ;	//报错，不知道怎么初始化

### 命名空间using & namespace ->然后知道了域以及 ::

namespace std{ ~ }  => 申明并定义了一个命名 空间；

using std; => 说明std域里面所有变量或者方法都不用加std；

using std::cout; => 说明在std域里面，只有cout 不用加std；

注：头文件不要使用命名空间，一方紊乱；

### string

string的长度 " ".size(); -> 返回的是一个无符号类型的值，通过string::size_type可以知道。



