#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    vector<char> b;
    vector<string> c;
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if(isalpha(a[i])) {
            b.push_back(a[i]);
        }

    }
    for(auto tmp : b) {
        cout << tmp;
    }
    cout << endl;
}
