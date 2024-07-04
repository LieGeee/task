#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
    int x;
    struct Node *p;
} *c, qw;

c init() {
    c a = (c)malloc(sizeof(qw));
    a->x = 5;
    a->p = NULL;
    return a;
}

void init2(c *b) {
    *b = (c)malloc(sizeof(qw));
    (*b)->x = 10;
    (*b)->p = NULL;
}
void init3(qw *& b){

    b= (c)malloc(sizeof (qw));
    b->x=15;
    b->p=NULL;
}
int main() {
    c a = init();
    cout << a->x << endl;
    c b;

    init2(&b);
    cout << b->x << endl;

    init3(b);
    cout << b->x << endl;

    return 0;
}
