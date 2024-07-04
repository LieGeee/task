#include <bits/stdc++.h>

using namespace std;

typedef struct node {
int data;
node * elem;
}jied,*L;

L Init(){
    L head=new jied;
    head->data=0;
    head->elem=NULL;
    return head;
}

int tianjia(L ll){
    int a;
    while(cin>>a && a!=101){
        L k=new jied;
        //L k;
        k->data=a;
        k->elem=NULL;
        ll->elem = k;
        ll=ll->elem;
    }
    return 1;
}

void show(L ll){
    L k=ll->elem;
    while(k){
        cout<<k->data<<' ';
        k=k->elem;
    }
    cout<<endl;
    return;
}

void reserve_1(L LL) {
    L prev = NULL;
    L current = LL->elem;
    L next = NULL;

    while (current != NULL) {
        next = current->elem;
        current->elem = prev;
        prev = current;
        current = next;
    }
    LL->elem = prev;
}


int main()
{
    L LL=Init();
    tianjia(LL)==1?puts("成功插入!"):puts("插入失败!");
    show(LL);
    show(LL);
    reserve_1(LL);
    show(LL);
    return 0;
}

