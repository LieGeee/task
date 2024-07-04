#include <iostream>

using namespace std;

int a[100000];

int main()
{
    int n;

    for(int i=0;;i++) {
        scanf("%d", &a[i]);
        n=i;
        if(a[i]==0) break;
    }
    for(int i=n-1;i>-1;i--)  cout<<a[i]<<' ';
}