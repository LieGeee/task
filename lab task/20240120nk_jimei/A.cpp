#include <iostream>

int countNumbersWith1122(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; ++i) {
        // 将整数转换为字符串，以便检查是否包含数字序列1122
        std::string strNumber = std::to_string(i);

        // 检查字符串中是否包含数字序列1122
        if (strNumber.find("1122") != std::string::npos) {
            ++count;
        }
    }
    return count;
}

int main() {
    // 定义范围 [2023, 20231122]
    int startYear = 2023;
    int endYear = 20231122;

    // 计算在范围内包含数字序列1122的整数的个数
    int result = countNumbersWith1122(startYear, endYear);

    // 输出结果
    std::cout << "在范围[" << startYear << ", " << endYear << "]内包含数字序列1122的整数的个数为: " << result << std::endl;

    return 0;
}
