#include <stdio.h>
#include <stdint.h>

// Hàm in ra biểu diễn nhị phân của một số 32 bit
void printBinary(uint32_t n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i == 31 || i == 23) {
            printf(" "); // Thêm khoảng trắng để dễ phân biệt phần dấu và phần mũ
        }
    }
    printf("\n");
}

int main() {
    float num;
    uint32_t *binaryRepresentation;

    // Nhập số thực kiểu float
    printf("Nhập số float: ");
    scanf("%f", &num);

    // Ép kiểu số float thành kiểu số nguyên 32-bit để dễ dàng in ra nhị phân
    binaryRepresentation = (uint32_t*)&num;

    // In ra biểu diễn nhị phân
    printf("Biểu diễn nhị phân: ");
    printBinary(*binaryRepresentation);

    return 0;
}
