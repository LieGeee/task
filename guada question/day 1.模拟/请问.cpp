#include <iostream>

using namespace std;

int main() {
    int M;
    cin >> M;

    int start = 1;  // �����������ε���ʼ��
    int sum = 1;    // �����������εĺ�

    for (int end = 2; end <= M; end++) {
        // ���㵱ǰ�����������εĺ�
        sum += end;
        
        if (sum == M) {
            // �����ǰ�����������ε���ʼ�ͽ�����
            cout << start << " " << end << endl;
        }

        while (sum > M) {
            // �����ǰ�����������εĺʹ��ڸ�������������Ҫ��ȥ��ʼ������������ʼ���ͺ�
            sum -= start;
            start++;
        }
    }

    return 0;
}

