#include "tree.h"


tr initNode(char e){
    tr t = (tr) malloc(sizeof(tree));
    t->l=t->r=nullptr;
    t->data=e;
    return t;
}

void InsertTreeNode(Elem e,Elem p,char dir,tr & t)  //插入  把e插入到p的 dir方向,在p二叉链表中
{
    tr IN = (tr) malloc(sizeof(tree));
    IN->data=e;

    tr FatherNode = findTreeNode(t,p);
    if(dir=='l') {
        FatherNode->l=IN;
    }
    else if(dir=='r') {
        FatherNode->r=IN;
    }
    else puts("没有找到该节点");
}


void modifyTreeNode(tr* t,Elem e,Elem p);  //修改 ,将p改成e;


tr findTreeNode(tr &t, Elem e) {
    if(  t->data == e) return t;

    tr result = findTreeNode(t->l, e);
    if (result != nullptr) {
        return result; // 如果在左子树找到了节点，立即返回
    }

    // 如果左子树没有找到节点，则在右子树中查找
    return findTreeNode(t->r, e);
}



int ComputationalNode(tree p);  //计算因子+判断是否旋转

//int deleteTreeNode(tr* t,Elem e)    //删除
//{
//    tr fatherNode=findTreeNode(*t,e);
//    if(fatherNode->l== nullptr && fatherNode->r== nullptr) free(fatherNode);
//    else if(fatherNode->l== nullptr ); //不行删除得要父节点
//}


void dfs(tr  t)
{

    if(t!= nullptr) {
        std::cout<<t->data<<" ";
        dfs(t->l);
        dfs(t->r);
    }
}


int bfs(tr t);