S# 面向的概念

## 	两者的区别和关系

### 	区别

- 面向对象:高度实物抽象化编程
- 面向过程:自顶向下按照过程编程

### 	举例说明	

- 面向过程:先买番茄和鸡蛋->洗蕃茄->搅拌鸡蛋->生火->炒菜->番茄炒鸡蛋
- 面向对象:告诉厨师想吃番茄炒鸡蛋->厨师->番茄炒鸡蛋

### 	优缺点

- #### 面向过程

  - 优点:性能比面向对象高,因为类调用需要实例化,开销比较大,比较消耗资源,而Linux\Unix等一般采用面向过程开发,性能是最主要因素
  - 缺点:没有面向对象易维护,易复用,易扩展.不宜修改

- ##### 面向对象

  - 优点:易维护,易复用,易扩展.由于面向对象由封装,继承,多态性的特性,可以设计出耦合度低的系统,使系统更加灵活易于维护
  - 缺点:性能比面向过程低.

## 类与对象的概念

### 	什么是类:

具有相同特性(数据元素)的行为(功能)的对象的抽象就是类.

- 因此对象是抽象的类.类的具体化就是对象,实际上类是一种数据类型
- 类具有属性,它是对象的抽象,用数据结构来描述类的属性,类具有操作,它是对象的行为抽象

### 	什么是对象

对象是人们要进行研究任何事物,它不仅能表示具体的事物,还能表示抽象的规则,计划或事件.对象具有状态,一个对象用数据值来描述它的状态,对象还有操作,用于改变对象的状态,对象与其操作就是对象的行为.

- 对象实现了数据和操作的结合,使数据和封装于对象的统一体

# 类

## 	定义

​		使用class关键字,类名首字母一般都大写

## 	语法

### 			初始化

```c++
Class ClassName		//class定义类使用的关键字   ClassName 类名
{
PropertyModififier:		//属性修饰符有:public,proctected,private
		propertoys		// 属性列表
		funtions		//函数列表
};
```

```c++
Class Student	
{
public:	
    	
		void printName(string name)
		{
			cout<<name<<endl;
		}
};
```

### 	类对象

```c++
Classname classVar(param);
类名       类对象(参数)
```

```c++
int main()
{
	Student stu;//实例化Student类的对象stu
    return 0;
}
```

## 构造函数

- 创建一个类,会自动添加一个跟类名一样的函数,该函数没有任何的返回值,且该函数不会进行任何操作,该函数被称为构造方法.

- 构造方法用于创建对象时使用,每当创建一个类的实例对象时,c++解释器都会子哦对那个调用它.

  

  ```c++
  //给默认值
  class Student	
  {
  public:	
      	student(string name='zxx'){
      		cout<<name<<endl;
      	}
  		void printName(string name)
  		{
  			cout<<name<<endl;
  		}
  };
  int main()
  {
  	Student stu;//实例化Student类的对象stu
      return 0;
  }
  //输出  zxx
  ```

### 拷贝构造函数

​	系统自动调用该函数

```c++
#include <bits/stdc++.h>
using namespace std;

class Complex{
                public:
                double real,imag;
                Complex(double r,double i){
                    real=r;imag=i;
                }
        };
int main()
{
    Complex c1(1,2);
    Complex c2(c1);//用复制构造函数初始化c2
    cout<<c2.real<<' '<<c2.imag;
    return 0;
}
//输出  1 2
```

- #### 编写复制构造函数

  - ​	当编写了复制构造函数,默认构造函数就不存在了

  ```c++
  class Complex
          {
                  public:
                  double real,imag;
                  Complex(double r,double i){
                      real=r;imag=i;
                  }
      		
          };
  
  ```

## 析构函数

- 概念:

  - 当类被销毁时,系统提供析构函数
  - 用来做清理操作:释放分配的内存,关闭打开文件
  - 也是系统自动调用
  - 是特殊成员函数,没有返回值,没法显式调用.
  - 析构函数的名字是在类名前＋'~';
  - 析构函数没有参数,不能被重载,用户没有定义,会生成默认的析构函数

- 代码

  ```c++
   ~Complex(){
                     cout<<"call ~Complex"<<endl;
                  }
  ```

## 动态创造对象

- 会为对象创造内存
  - 在静态存储区中,存储空间在开始之前就可以被分配
  - 会在栈上被创建,出了执行点便会释放
  - 存储单元也可以从堆区(自由存储单元)的地方分配,这被称为动态内存分配
- 调用函数初始化那一块内存

### c的动态内存分配

![image-20230920185912296](C:\Users\leizh\AppData\Roaming\Typora\typora-user-images\image-20230920185912296.png)

- 程序必须确定对象长度
- malloc返回一个void\*的指针,c++不允许void\*赋值给其他任何指针,必须强转
- malloc可能申请内存失败,所以必须判断返回值来确保内存分配成功
- 用户在使用之前必须记住对他初始化,构造函数不能显示调用初始化(构造函数是由编译器调用),用户有可能忘记调用初始化函数

### c++的动态内存分配

#### new

```
Persion* person = new Person();
//等价于c的:
Persion* person = (Person*)malloc(sizeof(Person));
	if(person == NULL)	return 0;
	person->Init();
```

New操作符能确定在调用构造函数初始化之前内存分配是成功的,所有不显示确定调用成功.

#### delete

- delete只适用于new创造的对象
- 如果正在删除的指针对象是NULL,不会发生任何事,建议在删除指针后,立即把指针赋值成NULL,以免删除两次,对一个对象删除两次可能出现问题.

```c++
class Persion{
public:
    Persion(){
        cout<<"call persion"<<endl;
    }
    ~Persion(){
        cout<<"call ~persion"<<endl;
    }
};
int main()
{
    Persion *p1=new Persion;

    delete p1;
}

```

#### 动态创建对象数组

当创造一个对象数组时候,必须对数组每一个对象调用构造函数,除了在栈上可以聚合初始化,必须提供一个默认的构造函数

- ​		方式1:在栈聚合初始化

  ```
  class Student{
  public:
      Student(string name,int age){
          cout<<name<<endl;
          cout<<age<<endl;
      }
      void fun1(){
          cout<<"fun1"<<endl;
      }
  };
  int main() {
      Student stu[] = {{"zhangsan", 18},{"wangwu",   25}};
      return 0;
  }
  ```

- 方式2:在堆上创建

  - 必须要有默认构造函数初始化
  - 删除时要delete[],不然不是删除多个

  ```
  class Student{
  public:
      Student(){
          cout<<111<<endl;
      }
      void fun1(){
          cout<<"fun1"<<endl;
      }
  };
  int main() {
     Student *pstu = new Student[20];
     delete[] pstu;
      return 0;
  }
  ```

#### new与delete的其他应用

- 创建字符型数组

  ```
  char* p1 = new char[50];
  ```

- 创建整形数组并初始化

  ```
  int* p2=new[10]{1,2,3,4,5,6,7,8,9,10};
  ```

  ```
  释放数组内存
  delete[] p1;
  delete[] p2;
  ```

## 成员变量和成员函数

​	成员变量:c++类内部定义的变量

### 	成员变量

#### 			语法

```
class Classname{
public:
	type paramter;
}
```

###  	成员函数

#### 		定义

- ​	定义在类内部的函数,同时支持默认参数和函数重载

  ```
  class Classname
  {
  public:
  	Type funcName(paramter Type paramter)
  }
  ```

#### 		访问
- 通过"实例.方法名"的方法,调用成员方法

  ```
  s1.fucName();
  ```

  ​	[示例]()

  ```c++
  public:
      void fun1( ){
          cout<<name<<endl;
      }
  public:
      string name;
  };
  int main() {
  
      Student s1;
      s1.name ="张三";
      s1.fun1();
      return 0;
  
  
  ```

  当传入时给初始值,用传进去的值

  ```c++
  class Student{
  public:
      void fun1(string a){
          cout<<a<<endl;
      }
  public:
      string name;
  };
  int main() {
  
      Student s1;
      s1.name ="张三";
      s1.fun1("wangwu");
      return 0;
  }
  //输出wangwu
  ```

  也可以给默认值,当不传参,调用时使用的时默认值

  ```
   void fun1(string a="zhao liu"){
          cout<<a<<endl;
      }
  ```
#### 		重载

~~~c++
```c++
#include <bits/stdc++.h>

using namespace std;
class Student{
public:
    void fun1(string a){
        cout<<a<<endl;
    }void fun1(string a,int age,double hight){
        cout<<a<<' '<<age<<' '<<hight<<endl;
    }
public:
    string name;
 
};
int main() {

    Student s1;
    s1.name ="张三";
    s1.fun1("wangwu");
    s1.fun1("zhangsan",21,50.5);
    return 0;
}
//输出
//wangwu
//zhangsan 21 50.5
~~~

  

## 静态成员变量和静态成员函数

​		C++的静态成员可以实现多个对象之间的数据共享,并且使用静态成员不会破坏隐形的原则,保证了安全性

- 可以节省内存
- **可以用类名来访问也可以用对象名来访问**

### 静态成员变量

#### 定义

​	静态数据成员在定义说明前面加上关键词字static.

```
class Classname{
public:
	static Type paramter;
}
```

​	静态成员在定义后,要进行初始化

```
type Classname::paramter=value;
```

#### 引用

​	引用可以使用类名或类操作名

**类名引用**:

```c++
class Student{
public:
  static string course;
};
string Student::course="c++";
int main() {
    cout<<Student::course;
}

```

**类操作名访问**

```c++
#include <bits/stdc++.h>

using namespace std;
class Student{
public:
  static string course;
};
string Student::course="c++";
int main() {
    Student s1;
    cout<<s1.course;
}

```

### 静态成员函数

#### 定义

​	也需要**static**修饰,与静态成员变量类似,不属于任何对象,只属于类

- 不能访问非静态的成员变量

```c++
class Classname
{
public:
	static Type funcName(paramter Type paramter)
}
```

调用

类名::方法名

```
ClassName::funcName(params)
```

对象.方法名

```
instance.fucName(params)
```

示例

```c++
#include <bits/stdc++.h>

using namespace std;
class Student{
public:
    Student(){}
  static void sayhello()
  {
      cout<<"hello"<<endl;
  }
};

int main() {
    Student::sayhello();
    Student stu;
    stu.sayhello();
    return 0;
}

```

## 常成员函数

##### 定义

​	用const修饰的成员函数,需要在函数头部的结尾加上const,**可以访问类中的所有成员变量**,但不能修改他们的值,常成员函数主要时为了保护他们的值而设定的 

```c++
class Classname
{
public:
	Type funcName()const
	{}
}
```

示例

```c++
class Student{
public:

    Student(string a,int b){
        name=a;
        age=b;
    }
  void sayhello()const
  {
      cout<<age<<name<<endl;
  }
public:
    string name;
    int age;
};

int main() {

    Student stu{"zhangsan",18};
    stu.sayhello();
    return 0;
}

```

## c++ this指针

定义:this指针是一个const指针,他指向当前对象,可以通过this访问对象中的成员

- 本质上是一个成员参数的形参,不过是隐式的(不出现在代码中)
- this作为隐式形参本质上是成员函数的局部变量,所以只能用在成员函数的内部,并且只能通过对象调用函数成员函数时才给this赋值
- this是const指针,不能修改
- 只能在函数内部使用

例子

```c++
#include <iostream>

using namespace std;
class Student{
public:
    Student(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void show()
    {
        cout<<"this->"<<this<<endl;
    }
public:
    string name;
    int age;
};
int main()
{
       Student s1("z11",21);
       s1.show();
       cout<<&s1<<endl;
       Student s2("qwe",22);
       s2.show();
       cout<<&s2<<endl;
}
```

输出

```
this->0xfbdadffcc0
0xfbdadffcc0
this->0xfbdadffc90
0xfbdadffc90

```

## 访问限定符

- 所有成员变量 和 成员函数都有**访问权限**,所谓访问权限就是是否可以访问该类中的成员函数和成员变量
- 关键字
  - pubilc:可以被该类中的函数,子类中的函数,其友元函数访问,也可以由该类对象访问.
  - protected:可以被该类中的函数,子类的函数其友元函数范围跟,但不能对该类的对象访问.
  - private:可以被该类的函数,其友元函数访问,不能被其他任何访问,该类的对象也不能访问.

## 友元类和友元函数

- 定义在类外部, 但有权访问所有私有的,保护成员,**尽管友元函数的原型在类的定义中出现过,但友元函数不是成员函数.

- 使用frine修饰的函数,称为友元函数.

  ```
  friend void func(); 
  ```

  ```c++
  #include <iostream>
  
  using namespace std;
  
  class ClassName
  {
  public:
      friend void fuc()
      {}
  };
  void func()
  {
  }
  
  ```

友元类
