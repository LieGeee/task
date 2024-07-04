#include<iostream>
#include<cmath>

using namespace std;
int o;
double p1,p2;
int main()
{
    cin>>o;
    if(o==0) {
        cout<<p1;
        return 0;
    }
    if(o<=10)
        if(o<=5) {
            cout<<"15";
            return 0;}
        else
        {
            cout<<2*o+5;
            return 0;
        }
    else
    {
        p1=2.6*o-1;
        while(o>=0)
        {
            if(o>=10) p2+=25;
            else p2+=o*2.6;
            o-=10;
        }
    }
    cout<<round(min(p1,p2));
}