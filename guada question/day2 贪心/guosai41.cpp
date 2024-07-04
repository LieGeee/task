#include <bits/stdc++.h>
using namespace std;

int n,ans=1;//n是共有多少个数，ans记录每个数出现的次数
int a[200005];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];//读入不解释
    }
    sort(a+1,a+1+n);//排序函数，头文件#include<algorithm>，默认从小到大排序
    for(int i=2;i<=n;i++){
        if(a[i]==a[i-1])ans++;
        else{
            cout<<a[i-1]<<' '<<ans<<endl;
            ans=1;//初始化ans
        }
    }
    cout<<a[n]<<' '<<ans<<endl;//没输出完
    return 0;
}