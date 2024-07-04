#include <bits/stdc++.h>

using namespace std;
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
