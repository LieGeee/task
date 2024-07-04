#include<iostream>
#include<algorithm>
using namespace std;

int n;

bool cmp(string a,string b)
{
	return a+b>b+a;
}

int main()
{
	string	str[2000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	
	sort(str,str+n,cmp);
	
	for(int i=0;i<n;i++)
	cout<<str[i];
}
