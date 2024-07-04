#include <bits/stdc++.h>
using namespace std;
char a[1000];int b;
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 'I') b = i;
    }
    string k;
    int i = b, j = b;
    if(i!=0)i--, j++;
    else j++;
    getchar();
    while (m--) {
        getline(cin, k);
        if (k == "backspace") {

                cout<<a[i]<<' '<<a[j]<<' '<< i<<' '<<j<<endl;
            if (a[i] == '(' && a[j] == ')') {
                if (i != 0) a[i--] = a[j++] = 'x';
                else a[i--] = a[j++] = 'x';

            } else if ( (a[i]=='(' || a[i] == ')') && i != 0) a[i--] = 'x';
        }
        else {
            if (a[j] == ')' || a[j] == '(') a[j++] = 'x';
        }
        for (int qw = 0; qw < n; qw++) {
            if (a[qw] != 'x') cout << a[qw];

    }
        cout<<endl;

    }
}
