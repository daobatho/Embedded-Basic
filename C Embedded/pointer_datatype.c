#include <stdio.h>
#include <string.h>

// Enum: Khai báo kiểu dữ liệu liệt kê
enum Weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

// Struct: Định nghĩa kiểu dữ liệu struct
struct Person {
    char name[50];
    int age;
    float height;
};

// Union: Định nghĩa kiểu dữ liệu union
union Data {
    int i;
    float f;
    char str[20];
};

// Hàm tính tổng
int sum(int a, int b) {
    return a + b;
}

int main() {
    // 1. Sử dụng Enum
    enum Weekday today;
    today = Wednesday;
    printf("Today is day number: %d (0=Monday, 6=Sunday)\n", today);
    
    // 2. Sử dụng Struct với con trỏ
    struct Person person1;
    struct Person *ptrPerson = &person1;

    // Gán giá trị thông qua con trỏ
    strcpy(ptrPerson->name, "Alice");
    ptrPerson->age = 25;
    ptrPerson->height = 5.7;

    // In thông tin thông qua con trỏ
    printf("Person Name: %s\n", ptrPerson->name);
    printf("Person Age: %d\n", ptrPerson->age);
    printf("Person Height: %.2f\n", ptrPerson->height);

    // 3. Sử dụng Union với con trỏ
    union Data data;
    union Data *ptrData = &data;

    // Sử dụng con trỏ để gán và truy xuất giá trị
    ptrData->i = 10;
    printf("Union int: %d\n", ptrData->i);

    ptrData->f = 220.5;
    printf("Union float: %.2f\n", ptrData->f);

    strcpy(ptrData->str, "Hello");
    printf("Union string: %s\n", ptrData->str);

    // 4. Sử dụng con trỏ với kiểu dữ liệu cơ bản (int, float, char)
    int a = 5;
    int *ptrA = &a;
    printf("Value of a: %d\n", *ptrA);  // Truy cập giá trị thông qua con trỏ

    float b = 5.25;
    float *ptrB = &b;
    printf("Value of b: %.2f\n", *ptrB);

    char c = 'X';
    char *ptrC = &c;
    printf("Value of c: %c\n", *ptrC);

    // 5. Sử dụng con trỏ hàm
    int (*ptrFunc)(int, int); // Khai báo con trỏ hàm
    ptrFunc = sum; // Gán địa chỉ hàm sum cho con trỏ

    int result = ptrFunc(10, 20); // Gọi hàm thông qua con trỏ
    printf("Sum of 10 and 20 is: %d\n", result);

    return 0;
}
