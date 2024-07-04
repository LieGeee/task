#include <bits/stdc++.h>

using namespace std;

typedef struct n{
    int x;
    struct n* next;
}*St,sk;

void Init(St s){
  //  sk** head=(St *)malloc(sizeof (n));
  // St *head=(St *)malloc(sizeof (n));
  //  n* *head=(St *)malloc(sizeof (n));
    s=(St )malloc(sizeof (sk));    //为什么,一定初始一片空间要二级指针?
    //St head=new sk;
    s->x=101;
    s->next=NULL;
}

int main()
{
    St S;
    Init(S);
    cout<<S->x;

    return 0;
}