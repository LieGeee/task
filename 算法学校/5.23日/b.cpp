#include <bits/stdc++.h>

using namespace std;

int qw(char *a, int k){
    if (*(a + k) == '\0') {
        return k;
    }
    return qw((a+1), k + 1);
}

int main(){
    char a[100000];
    cin >> a;
    cout << qw(a, 0);
    return 0;
}
