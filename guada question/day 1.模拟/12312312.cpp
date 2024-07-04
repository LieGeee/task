#include<iostream>
#include<algorithm>

using namespace std;

int num,maxr;
const int N=1e6;
int a[N],s[N];
int l,r=1;
int ans = INT_MAX;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		cin>>num>>maxr;
		for(int i=0;i<num;i++) cin>>a[i];
		
		for(int i=1;i<num;i++)	s[i]=s[i-1]+a[i];

		while(l<r && r<num)
		{
			if(s[r]-s[l]<maxr)	
			{
				r++;
				ans=min(l-r,ans);
			}
			if(s[r]-s[l]>maxr) 	l++;
		}
	cout<<ans<<endl; 
	}
	return 0;
}

