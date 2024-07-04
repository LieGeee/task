#include <bits/stdc++.h>

using namespace std;
int n,m;
typedef pair<int,int> p;
int c[10000],s[10000];
vector<int>k;
vector<p> a,f;
int fd(int x)
{
    int l = 0, r = k.size() - 1;
    while (l < r)
    {
        int mid = l + r >> 1;
        if (k[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return l + 1;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
       int y,r;
       cin>>y>>r;
       a.emplace_back(y,r);
       k.emplace_back(y);
    }
    for(int j=0;j<m;j++){
        int y,r;
        cin>>y>>r;
        f.emplace_back(y,r);
        k.push_back(y);
        k.push_back(r);
    }
    sort(k.begin(),k.end());
    k.erase(unique(k.begin(),k.end()),k.end());
    //erase是删除从起始位置到终止位置的前一个元素
    //unique的返回值是去重后元素的下一个元素

    for(auto item: a){
        int x=fd(item.first);
        c[x]+=item.second;
    }

    for(int i=1;i<=k.size();i++){
        s[i]=c[i]+s[i-1];
    }

    for (auto item : f)
    {
        int l = fd(item.first), r = fd(item.second);
        cout << s[r] - s[l - 1] << endl;
    }


}
