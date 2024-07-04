#include<iostream>
#include<algorithm>
using namespace std;
int n,in,k;
const int N=1e6;
int a[N];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        a[in]++;
    }
    sort(a,a+n);
    
    for(int i=0;i<1e6;i++)
    if(a[i]!=0)	k++;
    
	cout<<k<<endl;
	
    for(int i=0;i<1e6;i++)
    if(a[i]!=0)	cout<<i<<' ';
}

