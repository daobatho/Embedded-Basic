#include <stdio.h>

void convertToBinary(int n) {
    char binary[33];
    binary[32] = '\0';
    for (int i = 31; i >= 0; i--) {
        binary[i] = (n & 1) ? '1' : '0'; 
        n >>= 1; 
    }
    printf("Biểu diễn nhị phân: %s\n", binary);
}

int main() {
    int n;
    printf("Nhập một số nguyên: ");
    scanf("%d", &n);
    convertToBinary(n);
    return 0;
}
