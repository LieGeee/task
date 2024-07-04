#include <bits/stdc++.h>
using namespace std;


typedef struct Node {
    char data;
    struct Node * next;
} LNode, *L;


L init() {
    L head = (L)malloc(sizeof(LNode));
    head->next = NULL;
    return head;
}
void cr( L *ll){
    char dian;
    dian =getchar();
    if(dian!='@'){

        L newNode=(L)malloc(sizeof(LNode));
        newNode->data=dian;
        (*ll)->next=newNode;
        dian =getchar();
    }
    else{
        L newNode=(L)malloc(sizeof(LNode));
        newNode->data=NULL;
    }
}
void shuchu(L ll){
    while(ll->next!=NULL){
        cout<<ll->data<<' ';
    }
}


int main() {

    L ll = init();
    cr(&ll);
    shuchu(ll);
    return 0;
}
