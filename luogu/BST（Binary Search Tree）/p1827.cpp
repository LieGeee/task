#include <bits/stdc++.h>
using namespace std;
void dfs(string s1 ,string s2)
{
    char root=s2[0];
    int l=s1.find(root);
    int r=s1.size();
    if(l)
    {
        string l_z=s1.substr(0,l);
        string r_q=s2.substr(1,l);
        dfs(l_z,r_q);
    }
    if(r>l+1)
    {
        string l_z2=s1.substr(l+1,r-l-1);
        string r_z2=s2.substr(l+1,r-l-1);
        dfs(l_z2,r_z2);
    }
    cout<<root;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    dfs(s1,s2);
}




