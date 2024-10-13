#include <stdio.h>

// Hàm in ra biểu diễn nhị phân của một số 8-bit (1 byte)
void printBinary(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1); // In ra bit tại vị trí i
    }
    printf("\n");
}

int main() {
    signed char num;  // Biến kiểu char có dấu
    unsigned char twoComplement; // Biến lưu số đối bù 2

    // Nhập số kiểu char
    printf("Nhập số char: ");
    scanf("%hhd", &num);  // %hhd để đọc số kiểu char

    // In ra biểu diễn nhị phân của số ban đầu
    printf("Số ban đầu: ");
    printBinary(num);

    // Tính đối bù 2 bằng cách lấy bù 1 rồi cộng thêm 1
    twoComplement = ~num + 1;

    // In ra biểu diễn nhị phân của số đối bù 2
    printf("Số đối bù 2: ");
    printBinary(twoComplement);

    return 0;
}
