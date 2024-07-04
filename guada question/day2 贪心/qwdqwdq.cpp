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
        // ��ʼ����С��������ֵ�����Ϊ 0
        fill(minDigits, minDigits + m, 0);
        fill(maxDigits, maxDigits + m, 0);

        // ���ڹ�����С��������ֵ���ʱ����
        int tempSum = s;
        int pos = m - 1;

        // ������С����
        while (tempSum > 0) {
            int digit = min(tempSum, 9);
            minDigits[pos] = digit;
            tempSum -= digit;
            pos--;
        }

        // �����������
        tempSum = s;
        pos = 0;
        while (tempSum > 0) {
            int digit = min(tempSum, 9);
            maxDigits[pos] = digit;
            tempSum -= digit;
            pos++;
        }

        // ������
        for (int i = 0; i < m; i++) cout << minDigits[i];
        cout << ' ';
        for (int i = 0; i < m; i++) cout << maxDigits[i];
    }

    return 0;
}

