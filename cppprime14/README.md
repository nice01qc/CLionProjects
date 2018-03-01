### 14章  重载运算与类型转换

###### 可以被重载的运算符：

|   +    |    -     |  \*  |  /   |  %   |  ^   |
| :----: | :------: | :--: | :--: | :--: | :--: |
|   ~    |    !     |  ,   |  =   |  <   |  >   |
|   ++   |    --    |  <<  | \>\> |  ==  |  !=  |
|   +=   |    -=    |  /=  |  %=  |  ^=  |  &=  |
|  <<=   |  \>\>=   |  []  |  ()  |  ->  | ->*  |
| delete | delete[] |      |      |      |      |

其中&& || , 这三个不建议重载，因为无法保留求值顺序/短路求值属性，还有 & 这个

###### 不能被重载的运算符：

::		.*		.		? :

######  重在为成员或非成员一些准则：

- 赋值（=）、下标（[]）、调用（()）、成员访问箭头（->）必须为内置成员
- 其他的为普通成员，没说那么死

##### 一些需注意的重载

###### 递增、递减运算符

```
Sales& operator++();	// 前置运算符
Sales operator++(int);	// 后置运算符，有int参数，但不使用，只是为了区别
// 前置例子
Sales& Sales::operator++(){
  ++num;
  return *this;
}
// 后置例子
Sales Sales::operator++(int){
  Sales now = *this;
  ++*this;
  return now;
}
// 显示调用
Sales s;
s.operator++();	// 前置++
s.operator++(0); // 后置++
```

###### 成员访问运算符

对于point->men:

1. 如果point是指针，则我们运用内置箭头运算符，表达式等价于(内置运算结果).men。如果point所指类没有men成员，程序会发生错误。
2. 如果point是定义了自己的operator->的类的一个对象，则使用其结果获取men；如果是指针，返回到第1步。

###### 函数调用运算符

```
int operator() (int val) {	// 若定义了此运算，则此对象称为函数对象——行为像函数一样
  return val > 0 ? val : -val;
}
```

###### lambda是函数对象

​	编译器会把它翻译成一个未命名的未命名对象，且定义了函数调用运算符

```
[sz](const string &a){return a.size() > sz;}	// 等价为一下对象
class SizeComp{
  SizeComp(int num):sz(num){}
  bool operator()(const string &s) const{
    return s.size > sz;
  }
  private:
  	size_t sz;
}
//因此
auto wc = find_if(words.begin(), words.end(),SizeComp(sz));
```

###### 标准库functional头文件定义了一些函数对象，方便使用p509

###### 标准库function类型

| function\<T\> f;         | f可以存储调用对象的空function |
| ------------------------ | ------------------- |
| function\<T\> f(nullptr) | 显示创建一个空f            |
| function\<T\> f(obj)     | 在f中存储调用对象obj副本      |
| f                        | 可以作为条件              |
| f(args)                  | 调用f中对象，参数是args      |

```
function<int(int,int)> f = [](int i, int j){return i+j};
f(2,3);
map<string,function<int(int,int)>> binops;
binops.insert({"+",f});
binops["+"](2,3);
```

对于同一个名字对应多种调用形式，解决办法

```
int add(int a,int b){return a+b;}
string add(string a, string b) {return a+b;}
//解决办法
int (*add1)(int,int) = add;
string (*add2)(string,string) = add;	// 一直有问题，没解决	
binops.insert({"+",add1});
```

##### 重载、类型转换与运算符

类型转换运算符定义： operator type() const;

```
class SmallInt{
  public:
  	SmallInt(int i=0):val(i){}
  	operator int() const{
      return val;
  	}  	
  	private:
  		int val;
}
SmallInt si;
si = 4;	//隐式调用构造转换，然后调用operator=
si + 3;	// 调用类型转换，然后执行加法
```

