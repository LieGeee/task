#include <iostream>

using namespace std;

int main() {
    int M;
    cin >> M;

    int start = 1;  // 连续正整数段的起始数
    int sum = 1;    // 连续正整数段的和

    for (int end = 2; end <= M; end++) {
        // 计算当前连续正整数段的和
        sum += end;
        
        if (sum == M) {
            // 输出当前连续正整数段的起始和结束数
            cout << start << " " << end << endl;
        }

        while (sum > M) {
            // 如果当前连续正整数段的和大于给定的整数，需要减去起始数，并更新起始数和和
            sum -= start;
            start++;
        }
    }

    return 0;
}

