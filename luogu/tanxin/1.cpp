#include<bits/stdc++.h>

using namespace std;
int qian,wei,xiao;
int  q;
int main() {
    string c;
    cin >> c;
    for (int i = 0; i < c.size(); i++) {
        if (i == c.size() - 1) {
            wei = c[i] - '0';
       //     cout<<wei<<endl;
            if (wei == 0) {
                qian -= 1;
                q = 5;
            }
            break;
        }
        qian += c[i] - '0';
    }
    for (int i = 9, j = 0; i > 0; i--, j++) {
        if (qian + j == i) {
            xiao = j;
        }
    }
  //  cout<<q<<endl;
    if (q == 5) {
        for (int i = 0; i < c.size() - 2; i++) {
            cout << c[i];
        }
        cout << c[c.size() - 2] - '1';
        cout << xiao;
    }
    else {

        for (int i = 0; i < c.size() - 1; i++) {
            cout << c[i];
        }
        cout << xiao;
    }
}
