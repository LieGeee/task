#include <bits/stdc++.h>

using namespace std;
struct Node{
    int shi;
    int xv;
};
int main(){
    Node a,b;
    loop:
    puts("请输入第一个复数(实部和虚部中间请输入空格)");
    cin>>a.shi>>a.xv;
    puts("请输入第二个复数(实部和虚部中间请输入空格)");
    cin>>b.shi>>a.xv;
    xx:
    puts("请确认输入的是 +, -, *, or /." );
    char c=getchar();

    switch (c) {
        case '+':cout<<a.shi+b.shi<<'+'<<a.xv+b.xv<<'i';break;
        case '-':cout<<a.shi-b.shi<<'+'<<a.xv-b.xv<<'i';break;
        case '*':{
            cout<<a.shi*a.shi-a.xv*b.xv;
            if(a.shi*b.xv+a.xv*b.shi>=0) cout<<'+'<<a.shi*b.xv+a.xv*b.shi;
            else cout<<a.shi*b.xv+a.xv*b.shi;
            break;
        }
        case '/': {
            if (!b.shi || !b.xv) {
                cout << "被除数不能为0!" << endl << "请重新输入";
                goto loop;
            }
            else {
                int denominator = b.shi * b.shi + b.xv * b.xv;
                int realPart = (a.shi * b.shi + a.xv * b.xv) / denominator;
                int imagPart = (a.xv * b.shi - a.shi * b.xv) / denominator;
                cout << realPart << "+" << imagPart << 'i';
            }
            break;
        }
            default:
                cout << "请确认输入的是 +, -, *, or /." << std::endl;
            goto xx;
            break;
        }
    }
