#include <bits/stdc++.h>

using namespace std;
int a[100],g,n;
bool b[100];
int dfs(int i,int w){
    if(w==g) {
        for(int j=0;j<n;j++)    if(b[j]) cout<<a[j]<<' ';
        cout<<endl;
        return 0;
    }
    if (i>=n||w>g) return false;
    b[i]=1;
    dfs(i+1,a[i]+w);
    b[i]=0;
    dfs(i+1,w);
    return 0;

}


int main(){
    cin>>n>>g;
    for(int i=0;i<n;i++) cin>>a[i];
    dfs(0,0);
}


































//#include <bits/stdc++.h>
//using namespace std;
//
//int a[100], g, n;
//bool b[100];
//
//// 深度优先搜索函数，返回布尔值表示是否找到了符合条件的组合
//bool dfs(int i, int w) {
//    if (w == g) {
//        for (int j = 0; j < n; j++) {
//            if (b[j]) cout << a[j] << ' ';
//        }
//        cout << endl;
//        return true;
//    }
//    if (i >= n || w > g) return false; // 边界条件检查
//
//    // 包含当前元素
//    b[i] = true;
//    dfs(i + 1, w + a[i]);
//
//    // 不包含当前元素
//    b[i] = false;
//    dfs(i + 1, w);
//
//    return false;
//}
//
//int main() {
//    cin >> n >> g;
//    for (int i = 0; i < n; i++) cin >> a[i];
//    dfs(0, 0);
//    return 0;
//}
