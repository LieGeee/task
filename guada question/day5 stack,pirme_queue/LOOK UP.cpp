//
// Created by leizh on 2023/8/4.
//
#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<int> s;

int k, x1,x2;
int main()
{
    char a;
    while(cin>>a,a!='@'){
        if(a>='0' && a<='9') {
            k = 10 * k + a-'0';
        }
        switch (a) {
            case'*': x1=s.top();  s.pop(); x2=s.top() ;  s.top(); s.push(x1*x2);break;
            case'-': x1=s.top();  s.pop(); x2=s.top() ;  s.top(); s.push(x2-x1);break;
            case'/': x1=s.top();  s.pop(); x2=s.top() ;  s.top(); s.push(x2/x1);break;
            case'+': x1=s.top();  s.pop(); x2=s.top() ;  s.top(); s.push(x1+x2);break;
        }
    }
    cout<<s.top();

}
