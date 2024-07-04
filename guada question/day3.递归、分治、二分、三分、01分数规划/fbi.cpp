#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int fbi(string str)
{
    int len=str.size();
    if(len>1)
    {
        fbi(str.substr(0,len/2));
        fbi(str.substr(len/2,len/2));
    }
    if(str==string(len,'0')) cout<<'B';
    else if(str==string(len,'1')) cout<<'I';
    else cout<<'F';

}

int main()
{
    int n;
    string str;
    cin>>n>>str;

    fbi(str);
}