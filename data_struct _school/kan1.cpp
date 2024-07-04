#include<stdio.h>
#include<math.h>
typedef char DataType;
typedef struct Node
{
	DataType data;
	struct Node *LChild;
	struct Node *RChild;
}BiTNode, *BiTree;

void CreateBiTree(BiTree *bt,int level){
	char ch;
	ch=getchar();
	if(ch=='$') *bt=NULL;
	else{
		*bt=(BiTree)malloc(sizeof(BiTNode));
		(*bt)->data=ch;
		level++;
		printf("node at leve %d:%c \n",level,(*bt)->data);
		CreateBiTree(&((*bt)->LChild),level);
		CreateBiTree(&((*bt)->RChild),level);
	}
}
int ans=0;
void PreOrder(BiTree root){
	if(root!=NULL)
	{
		if(root->LChild==NULL&&root->RChild==NULL)
		{
				printf("%c",root->data);
				ans++;
				return;

		}
	PreOrder(root->LChild);
	PreOrder(root->RChild);
	}

}


int main(){
	BiTree root;
	int level=0;
	CreateBiTree(&root,level);
	PreOrder(root);
	printf("\n叶子结点个数为：%d",ans);
	return 0;
}
