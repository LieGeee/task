#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
double cexian[10000];
int zhendeduo=0;
double zc=206.9926;
double l=0,r=697.0819;
double k;
double h1,h2;
double b,a;
double w1,w2;
int sum;
int main()
{
    while(sum<=2*1852){
        k=r-r/10;
        h1=k*sin(1.5/180*PI);
        h2=zc-h1;  cout<<h2<<endl;

        b=h2/cos(60.0/180.0*PI);
        a=b*sin(28.5/180*PI)/sin(91.5/180.0*PI);
        cout<<a<<endl;
        cexian[zhendeduo]=a;zhendeduo++;
        w1=a*sin(60.0/180*PI)/sin(28.5/180.0*PI);
        w2=a*sin(60.0/180*PI)/sin(31.5/180.0*PI);
        l=k;
        sum+=k;
        r=w1+w2+l;
    }

   for(int i=0;i<=1000;i++)
   {
       cout<<cexian[i]<<' ';
    }
}