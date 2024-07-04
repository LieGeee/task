#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;

    int zhendeduo=1;
    double zc=206.9926;
    double l=0,r=697.0819;
    double k=r-r/10;
    double h1,h2;
    double b,a;
    double w1,w2;
    int sum;
int main()
{
    //cout<<370.0537*cos(1.5/180*PI)<<' ';
    while(r<=4*1852){
         k=r-(r-l)/10;
         h1=k*sin(1.5/180*PI);
         h2=zc-h1;
         b=h2/cos(60.0/180.0*PI);
         a=b*sin(28.5/180*PI)/sin(91.5/180.0*PI);
        cout<<a<<' ';
        sum+=a;
         w1=a*sin(60.0/180*PI)/sin(28.5/180.0*PI);
         w2=a*sin(60.0/180*PI)/sin(31.5/180.0*PI);

        //cout<<h1/tan(1.5/180*PI)+w1*cos(1.5/180*PI)<<' ';
         l=k;

         r=w1+w2+l;
    }
    cout<<endl;
    cout<<sum/1852.0*2;
}