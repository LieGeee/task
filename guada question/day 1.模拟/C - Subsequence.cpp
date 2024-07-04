#include<iostream>
#include<algorithm>
using namespace std;
int num,maxr;
const int N=1e6;
int a[N],s[N];
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int l=0,r=1;
		int ans=100000;
		cin>>num>>maxr;
		for(int i=1;i<=num;i++) cin>>a[i];
		
	
		for(int i=1;i<=num;i++)	
		{
			s[i]=s[i-1]+a[i];
			//cout<<s[i]<<' ';
			
		}
		while(l<r && r<=num)
		{
			if(s[r]-s[l]<maxr && l <= r)	
			{
				r++;
			}
			else
			{	
				ans=min(r-l,ans);
				//cout<<r<<' '<<l<<' '<<s[r]-s[l]<<' '<<ans<<endl;	
				l++;
			}	
		}
	if( ans==100000 ) cout<<'0';
	else cout<<ans<<'\n';
	}
	
	return 0;
}
