#include<iostream>

using namespace std;

const int N=1e6;
int a[N],s,tong[N];
int n,m;
int ans,pos;

int main()
{
	cin>>n>>m;
	for(int i =0;i<n;i++)
	{
	cin>>a[i];
	if(a[i]>m) a[i]=-1;
	else if(a[i]==0) a[i]=0,pos=i;
	else a[i]=1;
	}
	for(int i=pos-1;i>=n;i--)
	{
		s+=a[i];
		tong[s+n]++;
	 	cout<<"a[i]="<<a[i]<<' '<<"s="<<s<<' '<<"s+n="<<s+n<<' '<<"cnt[s+n]="<<tong[s+n]<<' '<<"ans="<<ans<<endl;
		if(!s) ans++;
	}
	cout<<endl;
	s=0;
	for(int i=pos+1;i<=n;i++)
	{
		s+=a[i];
		ans+=tong[-s+n];

		if(!s) ans++;
	}
	cout<<ans+1;
}
