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

using namespace std; => 说明std域里面所有变量或者方法都不用加std；

using namespace std::cout; => 说明在std域里面，只有cout 不用加std；

注：头文件不要使用命名空间，一方紊乱；

### string

string的长度 " ".size(); -> 返回的是一个无符号类型的值，通过string::size_type可以知道。

字符串用+连接过程中必须有声明的string变量参与，否则报错。从左到右两两依次相加，都存在变量参与就不会报错，这样理解就好。

### 标准类库vector:标准对象的集合

vector<int> a; => 声明并定义的一个容器a,存在默认初始化;

###### 有一下初始化方法：

vector<T> v1 ;

vector<T> v2(v1);

vector<T> v3 = v1;	<=> 上一个

vector<T> v4(n,val);  => 包含n个重复的 val，如果没有val，则n个初始化为T的值

vector<T> v5{a,b,c,d......}

vector<T> v6 = {a,b,c,d.....}













###### 注1：无符号类型会将负数的第一位变成1，所以会变成很大的数

###### 注2：在C语言中的库一般用name.h，现在在C++用cname替换，但内用一样的，但更符合C++规范

