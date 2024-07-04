#include<bits/stdc++.h>
using namespace std;
int n,b;
int a[100010],cnt[2*100010];
int ans;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin>>n>>b;
    int pos=0;//标记目标数的位置
    for(int i=1;i<=n;i++){
        int x;  cin>>x;
        if(x==b) a[i]=0,pos=i;
        if(x<b) a[i]=-1;
        if(x>b) a[i]=1;
        cout<<a[i]<<' ';
 //   cout<<a[i]<<' ';
	}
   cout<<endl;
  //  cout<<"pos-1="<<pos-1<<endl;

    int s=0;//s用来装前缀/后缀和
    for(int i=pos-1;i>=1;i--)
	{
        s+=a[i];
        cnt[s+n]++;
        cout<<"a[i]="<<a[i]<<' '<<"s="<<s<<' '<<"s+n="<<s+n<<' '<<"cnt[s+n]="<<cnt[s+n]<<' '<<"ans="<<ans<<endl;
        if(!s) ans++;//后缀和为0的，符合要就 ，ans++
    }
    cout<<endl;
    s=0;
    for(int i=pos+1;i<=n;i++){
       s+=a[i]; 
       ans+=cnt[n-s];//与左边的进行匹配
       
       if(!s) ans++;//前缀和为0的，符合要就 ，ans++
     cout<<"ans="<<ans<<' '<<"a[i]="<<a[i]<< ' '<<"s="<<s<<' '<<"n-s="<<n-s<<' '<<"cnt[n-s]="<<cnt[n-s]<<' '<<endl;;
    }
    cout<<ans+1;
    return 0;
}

   	
