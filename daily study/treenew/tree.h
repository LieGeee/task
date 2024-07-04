
#define Elem char
#ifndef QQ
#define QQ
#include <bits/stdc++.h>

typedef struct Node{
    struct Node* l;
    struct Node* r;
    Elem data;
    int factor;
}*tr,tree;

tr initNode(char e);

void InsertTreeNode(Elem e,Elem p,char dir,tr& t);  //插入

void modifyTreeNode(tr t,Elem e,Elem p);  //修改 ,将p改成e;


tr findTreeNode(tr &t,Elem e);//修改子节点


int ComputationalNode(tree p);  //计算因子+判断是否旋转

int deleteTreeNode(tr t,Elem e);    //删除

void dfs11(tr & t);

int bfs(tr t);

#endif
