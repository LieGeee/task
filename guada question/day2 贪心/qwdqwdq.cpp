#include <iostream>
using namespace std;

int m, s;

int main() {
    cin >> m >> s;

    if (m > 9 * s || m == 0 || s == 0 || s > m) {
        cout << "-1 -1";
    } else if (m == 9 * s) {
        for (int i = 0; i < s; i++) cout << 9;
        cout << ' ';
        for (int i = 0; i < s; i++) cout << 9;
    } else {
        int minDigits[m], maxDigits[m];
        // 初始化最小和最大数字的数组为 0
        fill(minDigits, minDigits + m, 0);
        fill(maxDigits, maxDigits + m, 0);

        // 用于构造最小和最大数字的临时变量
        int tempSum = s;
        int pos = m - 1;

        // 构造最小数字
        while (tempSum > 0) {
            int digit = min(tempSum, 9);
            minDigits[pos] = digit;
            tempSum -= digit;
            pos--;
        }

        // 构造最大数字
        tempSum = s;
        pos = 0;
        while (tempSum > 0) {
            int digit = min(tempSum, 9);
            maxDigits[pos] = digit;
            tempSum -= digit;
            pos++;
        }

        // 输出结果
        for (int i = 0; i < m; i++) cout << minDigits[i];
        cout << ' ';
        for (int i = 0; i < m; i++) cout << maxDigits[i];
    }

    return 0;
}

