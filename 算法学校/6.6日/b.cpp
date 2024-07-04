#include<bits/stdc++.h>

using namespace std;
//有若干只鸡兔同在一个笼子里，从上面数，有35个头，从下面数，有94只脚。问笼中各有多少只鸡和兔？
int a[100][100];
bool check(int x){
    string k=to_string(x);
    for(int i=0;i<k.length();i++){
        if(k[i]=='6' || k[i]=='7'||k[i]=='8' ||k[i]=='9' ) return false;
    }
    return true;
}
int main(){

   for(int i=50;i*3<=1000;i++){
      if( check(i*2) && check(i*3)){
          cout<<i*2<<' '<<i*3<<endl;
      }
   }
}
//35 94