#include<iostream>

using namespace std;
int sum=1;
int l=1,r;

int main()
{
	int ans;
	cin>>ans;
	

	for(int r=2;r<ans;r++)
	{
		sum+=r;		
		while(sum>ans)
		{
			sum-=l;
			l++;
			
			if(sum == ans)
		{
			cout<<r<<' '<<l<<endl;
		}
		}
	 }
	
}
