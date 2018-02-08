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
  	Boy(string nm):name(nm){}
  	Boy(string nm,int agenum): name(nm),age(agenum){}
  	
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
  	Boy &setAge(int age){
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







###### 注：c++中的this为指向本身的指针（常量且指向常量的指针），而Java不是

