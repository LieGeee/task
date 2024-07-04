#include <iostream>

int countNumbersWith1122(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; ++i) {
        // ������ת��Ϊ�ַ������Ա����Ƿ������������1122
        std::string strNumber = std::to_string(i);

        // ����ַ������Ƿ������������1122
        if (strNumber.find("1122") != std::string::npos) {
            ++count;
        }
    }
    return count;
}

int main() {
    // ���巶Χ [2023, 20231122]
    int startYear = 2023;
    int endYear = 20231122;

    // �����ڷ�Χ�ڰ�����������1122�������ĸ���
    int result = countNumbersWith1122(startYear, endYear);

    // ������
    std::cout << "�ڷ�Χ[" << startYear << ", " << endYear << "]�ڰ�����������1122�������ĸ���Ϊ: " << result << std::endl;

    return 0;
}
