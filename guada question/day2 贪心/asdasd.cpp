#include<iostream>

using namespace std;
int m,n;
int shu9,shuyu,shuyuwei,cishu;

int main()
{
    cin>>n>>m;

    if(m>9*n ||m==0 || n==0|| n> m)
    {
        cout<<"-1 -1";
    }
    else if(m == 9*n )
    {
        for(int i=0;i<n;i++)	cout<<9;
        cout<<' ';
        for(int i=0;i<n;i++)	cout<<9;
    }
    else if(m>9+n)
    {
        shu9=m/9;

        shuyu=m%9;
        shuyuwei=n-shu9;

        //??§³?
        if(n==shu9+1)
        {
		cout<<shuyu;
        for(int i=0;i<shu9;i++) cout<<9;
        }
        else
        {
        	cout<<1;
        	if(shuyu==0)
        	{
        		for(int i=0;i<shuyuwei-1;i++) cout<<0;
        		cout<<8;
        		for(int i=0;i<shu9-1;i++) cout<<9;
        		
			}
			else{
			
        	for(int i=0;i<shuyuwei-2;i++) cout<<0;
        	cout<<shuyu-1;
        	for(int i=0;i<shu9;i++) cout<<9;
        	}
		}
        cout<<' ';
        //????
        for(int i=0;i<shu9;i++)	 cout<<9;
        cout<<shuyu;
        for(int i=0;i<shuyuwei-1;i++)	cout<<0;
        return 0;
    }
    else
    {
        cishu=m-n+1;
        //??xiao?
        for(int i=0;i<n-1;i++) cout<<1;
        cout<<cishu<<' ';

        cout<<m;
        for(int i=0;i<n-1;i++) cout<<0;
    }
}

