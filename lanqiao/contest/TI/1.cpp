#include <bits/stdc++.h>

using namespace std;

int main(){
int ans=0;
    for(int i=10;i<2022;i++)
        for(int j=9;j<i;j++)
            for(int q=8;q<j;q++)
                for(int w=7;w<q;w++)
                    for(int e=6;e<w;e++)
                        for(int r=5;r<e;r++)
                            for(int t=4;t<r;t++)
                                for(int y=3;y<t;y++)
                                    for(int u=2;u<y;u++)
                                        for(int o=1;o<u;o++)
                                        {
    if(i+j+q+w+e+r+t+y+u+o==2022) ans++;
                                        }
    cout<<ans;
}