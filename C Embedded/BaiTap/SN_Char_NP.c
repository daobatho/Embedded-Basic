#include <stdio.h>

int main() {
    char input[4]; // Mảng để lưu chuỗi nhập vào
    unsigned char num = 0; // Biến để lưu giá trị số nguyên

    // Nhập số nguyên dương kiểu char
    printf("Nhập số nguyên char: ");
    scanf("%3s", input); // Giới hạn nhập vào 3 ký tự

    // Lặp qua từng ký tự trong chuỗi
    for (int i = 0; input[i] != '\0'; i++) {
        // Kiểm tra xem ký tự có phải là chữ số hay không
        if (input[i] >= '0' && input[i] <= '9') {
            // Tính toán giá trị số tương ứng
            num = num * 10 + (input[i] - '0');
        } else {
            printf("Vui lòng nhập một chuỗi ký tự hợp lệ.\n");
            return 1; // Kết thúc chương trình nếu có ký tự không hợp lệ
        }
    }

    // In ra giá trị của num
    printf("Giá trị của num: %u\n", num);

    // In ra biểu diễn nhị phân
    printf("Biểu diễn nhị phân: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    return 0;
}
