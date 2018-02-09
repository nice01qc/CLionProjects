### 类

###### struct 与 class 区别：

使用struct没有什么访问控制，则默认为public，而class为private；因此若希望所有成员为public用struct ，反之用class。

```
struct Boy{
  private:
  	string name;
  	mutable int age;
  public:
    //创建默认无参构造函数
  	Boy() = default;
    Boy(string nm,int agenum): name(nm),age(agenum){}
  	Boy(string nm):Boy(nm,1){}	// 构造函数可以调用构造函数进行初始化
  	
  	
  	//声明为 const 成员函数，不能改变成员变量值，除非变量声明为mutable
  	void printName() const{	
      cout << this->name << endl;
      this->name = "change";	//报错，不能改变所有成员
  	}
  	
  	string getName(){
      return this->name;
  	}
  	
  	string setName(string name);	//声明，外部定义
  	// 声明为友元就可以了，不管public和private，一般放最前面或者最后面
  	friend void sout(Boy& boy);	
  	
  	// 返回this的成员函数注意事项
  	Boy &getAge(){		//如果不加引用，则返回的是Boy的副本，再对原来的值进行更改，只是更改副本
      cout << this->age  << endl;
      return *this;		
  	}
  	Boy &setAge(int age){	// 如果声明成const方法，则不能返回this了，否则报错。
      this->age = age;
      return *this;
  	}
  	
  	
  	
  	
};


string Boy::setName(string name){	//函数外部定义
    this->name = name;
}

//	定义类相关，非成员函数，放在同一个文件里就好了，可以使用友元
void pring(Boy boy){	
  cout << boy.getName() << endl;
}

// 因为在Boy里为友元函数，可以访问类私有成员
void sout(Boy boy){
  cout << boy.name << endl;		
}

```

### 类的拷贝、赋值和析构

*objectA = objectB;	// 只是简单的把objectB赋值给objectA;*

更详细见12、13章

### 关于类的定义及相互调用

```
class A;	// 这仅仅是声明A,如果是调用A里面一些方法或者变量，则会报错，因为此处仅仅告诉编译器，我有这个类，并没有定义。
解决办法：将类的定义与实现分离。
A a; // 这也使用了类的定义，初始化；因此用A* a;类指针可以；
```

### 类的构造函数（最好保证有默认构造函数，以防以后默认初始化出错）

```
classA(int a1,int b1):a(a1),b(b1){	}	// 对成员进行初始化，也就可以初始化常量
classA(int a1,int b1){a = a1; b = b1;} 	// 对成员进行赋值操作，不能初始化常量
类成员初始化顺序按定义顺序来。
void classA::combine(classA a){	}	// 隐式的类类型转换，
```













###### 注：c++中的this为指向本身的指针（常量且指向常量的指针），而Java不是

