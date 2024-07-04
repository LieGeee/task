#include<stdio.h>
#include<stdlib.h>
typedef char ElemTepy;
//定义单链表结点结构
typedef struct Node {
    ElemTepy data;
    struct Node* next;//next指针域
} Node,*Linklist;//给结点结构取名字Node和指针Linklist

void InitList(Linklist *L) {
    *L=(Linklist)malloc(sizeof(Node));
    (*L)->next=NULL;
}
//创建单链表
void CreateFromTail(Linklist L) {
    Node *s;
    int flag=1;
    char c;
    while(flag) {
        c=getchar();
        if(c!='$') {
            s=(Node*)malloc(sizeof(Node));
            s->data=c;
            L->next=s;
            L=L->next;
        } else {
            flag=0;
            L->next=NULL;
        }

    }
}

void ShowList(Linklist L) {
    printf("输入:");
    while(L->next) {
        L=L->next;
        printf("%c",L->data);
    }
}
//尾插返回头指针
void Inserter(Linklist L) {
    Node *r,*p;
    r=L;
    while(r->next!=NULL)
        r=r->next;
    p=(Node*)malloc(sizeof(Node));
    p->data=5;
    p->next=NULL;
    r->next=p;
}
//逆置
void ReverseList(Linklist L) {
    Node *p,*q;
    p=L->next;
    L->next=NULL;
    while(p!=NULL) {
        q=p->next;
        p->next=L->next;
        L->next=p;
        p=q;
    }
    printf("\n");
}
int main() {
    Linklist L;
    InitList(&L);
    printf("%c",L->data);
    CreateFromTail(L);
    ShowList(L);
    ReverseList(L);
//	ShowList(L);
    return 0;
}