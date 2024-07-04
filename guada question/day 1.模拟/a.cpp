#include<iostream> 

using namespace std;

using namespace std;
const int N=1e6;
int a[N],b[N],c[N],k[N];
int xk,yk;
int main()
{
	int n,i=0;
	cin>>n;
	while(n--)
	{
		cin>>a[i]>>b[i]>>c[i]>>k[i];
		i++;
	}
	cin>>xk>>yk;
	
	while(i--)	{
		if( a[i]>=xk && xk<=a[i]+c[i]    &&  yk>=b[i] && yk<=b[i]+k[i]) 
		{
		cout<<i+1;
		return 0;
		} 
	}
	cout<<-1;
}
