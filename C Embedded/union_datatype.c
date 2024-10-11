#include <stdio.h>

// Định nghĩa một union có thể chứa int, float, hoặc chuỗi ký tự
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Khai báo một biến thuộc kiểu union Data
    union Data data;

    // Gán giá trị int cho biến data và in ra
    data.i = 10;
    printf("data.i = %d\n", data.i);

    // Gán giá trị float cho biến data và in ra
    data.f = 220.5;
    printf("data.f = %.2f\n", data.f);

    // Gán chuỗi ký tự cho biến data và in ra
    // Lưu ý: Gán chuỗi này sẽ ghi đè lên giá trị int và float trước đó.
    sprintf(data.str, "Hello, World!");
    printf("data.str = %s\n", data.str);

    // Hiển thị lại giá trị của các thành phần trước đó để thấy sự ghi đè
    printf("Sau khi gán chuỗi:\n");
    printf("data.i = %d (giá trị bị ghi đè)\n", data.i);
    printf("data.f = %.2f (giá trị bị ghi đè)\n", data.f);

    return 0;
}
