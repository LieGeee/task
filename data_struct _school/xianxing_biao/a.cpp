#include<stdio.h>
#include<stdlib.h>
#define ElemType char
typedef struct Node {
    ElemType data;
    struct Node *next;
} Node,*LinkList;

void ShowList(LinkList L) {
    LinkList p;
    p=L->next;
    while(p->next!=NULL) {
        printf("%c",p->data);
    }
    printf("\n");
}

void CreateFromTail(LinkList L) {
    Node *r,*s;
    int flag=1;
    r=L;
    printf("请输入字符，以$结束:");
    while(flag) {
        char c=getchar();
        if(c!='$') {
            s=(Node*)malloc(sizeof(Node));
            s->data=c;
            r->next=s;
            r=s;
        } else {
            flag=0;
            r->next=NULL;
        }
    }
}

void InitList(LinkList *L) {
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->data='a';
    printf("%c",(*L)->data);
}
void ReverseList(LinkList L){
    Node *q,*p;
    p=L->next;
    L->next=NULL;
    while(p!=NULL)
    {
        q=p->next;
        p->next=L->next;
        L->next=p;
        p=q;
    }
}

int main() {
    LinkList L;
    InitList(&L);
    CreateFromTail(L);
    ShowList(L);
    return 0;
}