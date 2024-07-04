/*
链接：https://ac.nowcoder.com/acm/contest/22904/1004
来源：牛客网

        在一个游戏中，tokitsukaze需要在n个士兵中选出一些士兵组成一个团去打副本。
第i个士兵的战力为v[i]，团的战力是团内所有士兵的战力之和。
但是这些士兵有特殊的要求：如果选了第i个士兵，这个士兵希望团的人数不超过s[i]。(如果不选第i个士兵，就没有这个限制。)
tokitsukaze想知道，团的战力最大为多少。
 */
#include <bits/stdc++.h>
using namespace std;

priority_queue<int> q;
int ans[100000];
typedef struct node{
    int v;
    int s;
}sd;
bool cmp(sd a,sd b){
    return a.s<b.s;
}
int pos,sum;
int main(){
    int n;
    cin>>n;
    sd s[100000];
    for(int i=0;i<n;i++)    cin>>s[i].v>>s[i].s;

    sort(s,s+n,cmp);
    int cnt=0;      //目前节点个数
    pos=n-1;        //到第i个的节点个数
    for(int i=n-1;i>=0;i--){

        if(s[i].s>cnt) {
            int tmp=s[i].v;
            q.push(-tmp);
            sum+=tmp;
            cnt++;
        }
        else{
            while(s[i].s<cnt) {
                int tmp = q.top();
                sum += tmp;
                q.pop();
                cnt--;
            }
            if(s[i].v > q.top()) {
                    int tmp = q.top();
                    sum += tmp;
                    q.pop();
                    int tmp2 = s[i].v;
                    sum += tmp2;
                    q.push(-tmp2);
                }
        }
        ans[i]=sum;
        //cout<<sum<<' '<<cnt<<' '<<s[i].s<<' '<<i<<endl;
    }


    int anss=0;
    for(int i=0;i<n;i++) anss=max(ans[i],anss);
    cout<<anss;


}