#include <stdio.h>

int main() {
    int a;
    float b;
    printf("Nhập số thực: ");
    scanf("%f", &b);
    a = (int)b;
    printf("Số nguyên sau khi ép kiểu: %d\n", a);
    return 0;
}
