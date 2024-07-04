#include <iostream>
#include <string>
using namespace std;

const int MOD = 1000000007;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    long long totalWays = 1;

    // Count of ways for each character to be used as a replacement for '?'
    long long waysForChar[26] = {0};

    for (int i = 0; i < n / 2; i++) {
        if (s[i] == '?' && s[n - 1 - i] == '?') {
            // For each '?', there are 26 possibilities (one for each letter)
            totalWays = (totalWays * 26) % MOD;
        } else if (s[i] == '?' || s[n - 1 - i] == '?') {
            // If one side is '?', we can use any character on that side
            int idx = (s[i] == '?') ? s[n - 1 - i] - 'a' : s[i] - 'a';
            waysForChar[idx]++;
        } else if (s[i] != s[n - 1 - i]) {
            // If both sides are different, it's impossible to make a palindrome
            totalWays = 0;
            break;
        }
    }

    // Calculate the total number of ways considering characters that were chosen for '?'
    for (int i = 0; i < 26; i++) {
        if (waysForChar[i] > 0) {
            totalWays = (totalWays * waysForChar[i]) % MOD;
        }
    }

    cout << totalWays << endl;

    return 0;
}
