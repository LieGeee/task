#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    int w, n;
    cin >> w >> n;

    int prices[n];
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices, prices + n);

    int groups = 0;
    deque<int> dq;

    for (int i = 0; i < n; i++) {
        while (!dq.empty() && dq.front() + prices[i] <= w) {
            dq.pop_front();
        }

        dq.push_back(prices[i]);
        groups++;
    }

    cout << groups << endl;

    return 0;
}

