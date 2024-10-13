#include <stdio.h>

int main() {
    // In ra kích thước của các kiểu dữ liệu cơ bản trong C
    printf("Kích thước của int: %lu byte\n", sizeof(int));
    printf("Kích thước của char: %lu byte\n", sizeof(char));
    printf("Kích thước của float: %lu byte\n", sizeof(float));
    printf("Kích thước của double: %lu byte\n", sizeof(double));
    printf("Kích thước của long: %lu byte\n", sizeof(long));
    printf("Kích thước của short: %lu byte\n", sizeof(short));
    printf("Kích thước của unsigned int: %lu byte\n", sizeof(unsigned int));
    printf("Kích thước của unsigned char: %lu byte\n", sizeof(unsigned char));
    printf("Kích thước của unsigned long: %lu byte\n", sizeof(unsigned long));

    return 0;
}
