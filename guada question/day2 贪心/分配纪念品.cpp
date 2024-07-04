#include<iostream>
#include<algorithm>
using namespace std;
const int N=1e6;
int n,sm;
int a[N];
int l,r,ans;
int main()
{
	cin>>sm>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	
	sort(a,a+n);
	r=n-1;
	l=0;
	while(l<=r)
	{	
	if(a[l] +a[r] <= sm )
		{
		ans++;
		l++,r--;
		}
	else
		{
			ans++;
			r--; 
		}
		cout<<ans<<' '<<a[l]<<' '<<a[r]<<' '<<l<<' '<<r<<endl;
	}
	cout<<ans;
	
}
 
