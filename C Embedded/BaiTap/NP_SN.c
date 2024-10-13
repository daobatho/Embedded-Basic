#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(const char *binaryStr) {
    int decimalValue = 0;
    int length = strlen(binaryStr);

    // Duyệt chuỗi từ trái sang phải
    for (int i = 0; i < length; i++) {
        // Chỉ xử lý ký tự '1'
        if (binaryStr[i] == '1') {
            decimalValue += pow(2, length - 1 - i);
        }
    }
    return decimalValue;
}

int main() {
    char binaryStr[33]; // Mảng để lưu chuỗi nhị phân, tối đa 32 bit + 1 cho ký tự null

    // Nhập chuỗi nhị phân
    printf("Nhập chuỗi nhị phân: ");
    scanf("%32s", binaryStr); // Giới hạn nhập vào 32 ký tự để tránh tràn bộ nhớ

    // Chuyển đổi và in ra số nguyên
    int decimalValue = binaryToDecimal(binaryStr);
    printf("Giá trị số nguyên: %d\n", decimalValue);

    return 0;
}
