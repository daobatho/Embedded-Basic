#include <stdio.h>

int main() {
    int a, b;
    float result;
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("error!\n");
    } else {
        result = (float) a / b;
        printf("Kết quả: %.6f\n", result); 
    }
    return 0;
}
