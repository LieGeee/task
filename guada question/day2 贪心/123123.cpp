#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;
const int N = 1e6;
int n; 
double sum = 0;

struct people {
    int a;
    int b;
}node[N];

bool cmp(people p1, people p2) {
    return p1.a < p2.a;
}

int main() {
    cin >> n;

 
    for (int i = 1; i <= n; i++) {
        cin >> node[i].a;
        node[i].b = i;
    }

    sort(node + 1, node + 1 + n, cmp);

    for (int i = 1, j = n - 1; i <= n; i++, j--) {
        cout << node[i].b << ' ';
        sum += node[i].a * j;
        cout<<sum<<endl;
    }
    cout << endl <<fixed<<setprecision(2) <<sum / n;

    return 0;
}

