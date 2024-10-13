#include <stdio.h>

void printBinary(int n) {
    // Sử dụng kiểu số nguyên 32-bit
    unsigned int mask = 1 << 31; // Khởi tạo mặt nạ cho bit cao nhất (32-bit)
    
    // In lần lượt từng bit
    for (int i = 0; i < 32; i++) {
        if (n & mask)
            printf("1");
        else
            printf("0");
        mask >>= 1; // Dịch bit sang phải
    }
    printf("\n");
}

int main() {
    int num;

    // Nhập số nguyên âm
    printf("Nhập một số nguyên âm: ");
    scanf("%d", &num);

    // In ra biểu diễn nhị phân
    printf("Biểu diễn nhị phân: ");
    printBinary(num);

    return 0;
}
