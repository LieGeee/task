#include <bits/stdc++.h>

int n,a1[1100],a2[1100],fb[1100],k=0;
bool pan[1100];
int zong,biao;
using namespace std;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1[i]>>a2[i];
        fb[i]=100/a1[i];
        // cout<<fb[i]<<endl;
        zong+=fb[i]*a2[i];
    }
    cin>>biao;
    if(biao<=zong)  cout<<"Already Au.";
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=a2[i];j<=a1[i];j++)
            {
                if (zong + k * fb[i] >= biao)
                {
                    cout << k <<endl;
                    break;
                }
                else    k++;
                if(a2[i]==a1[i])
                {
                    cout<<"NaN"<<endl;
                    break;
                }
            }
            k = 0;
        }
    }
}