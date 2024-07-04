#include<iostream>

int a[100000];
int b[100000];
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++) cin>> a[i];

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]<=a[j]) b[j]=b[j]+1;
            for(int l=0;l<n;l++) cout<<b[l]<<' ';
            cout<<endl;
        }
        cout<<endl;
    }
    int k=-2000;
    for(int i=0;i<n;i++) k=max(k,b[i]);

    cout<<k;
}
