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