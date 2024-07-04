#include "tree.h"
#include "tree.cpp"
using namespace std;
int main(){
        tr shu=initNode('a');


        //查找
        Elem e,p,dir;
        while(cin>>e && e!='$'){
            cin>>p>>dir;
            InsertTreeNode(e,p,dir,shu);
        }

        //遍历
    dfs(shu);

}