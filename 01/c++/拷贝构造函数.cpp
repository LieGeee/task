#include <bits/stdc++.h>
using namespace std;

//给默认值
class Complex
        {
                public:
                double real,imag;
                Complex(double r,double i){
                    real=r;imag=i;
                }
                Complex(const Complex & c)
                {
                    real=c.real;
                    imag=c.imag;
                    cout<<"hahahahha"<<endl;
                }
                ~Complex(){
                    cout<<"call ~Complex"<<endl;
                }
        };
class Persion{
public:
    Persion(){
        cout<<"call persion"<<endl;
    }
    ~Persion(){
        cout<<"call ~persion"<<endl;
    }
};
class Student{
public:
//    Student(){
//        cout<<111<<endl;
//    }
//    Student(string name,int age){
//        name = name;
//        cout<<name<<endl;
//        cout<<age<<endl;
//    }
    void fun1(string name){
        cout<<name<<endl;
    }
public:
    basic_string<char> name;
};
int main() {

/*
    Complex c1(1,2);
    Complex c2=c1;//用复制构造函数初始化c2
    cout<<c2.real<<' '<<c2.imag<<endl;
    return 0;*/

/*
    Persion *p1=new Persion;

    delete p1;
*/

//    Student stu[] = {{"zhangsan", 18},{"wangwu",   25}};
//   Student *pstu = new Student[20];
//   delete[] pstu;
    Student s1;
    s1.name ="张三";
    s1.fun1("wangwu");
    return 0;

}
//输出  1 2