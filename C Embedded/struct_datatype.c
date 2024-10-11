#include <stdio.h>

// Định nghĩa kiểu dữ liệu struct
struct Person {
    char name[50];
    int age;
    float height;
} person1, person2, person3; // Khai báo ba biến kiểu struct

int main() {
    // Gán giá trị cho person1
    sprintf(person1.name, "Alice");
    person1.age = 30;
    person1.height = 5.5;

    // Gán giá trị cho person2
    sprintf(person2.name, "Bob");
    person2.age = 25;
    person2.height = 6.0;

    // Gán giá trị cho person3
    sprintf(person3.name, "Charlie");
    person3.age = 28;
    person3.height = 5.8;

    // In thông tin của các đối tượng
    printf("Person 1: Name = %s, Age = %d, Height = %.2f\n", person1.name, person1.age, person1.height);
    printf("Person 2: Name = %s, Age = %d, Height = %.2f\n", person2.name, person2.age, person2.height);
    printf("Person 3: Name = %s, Age = %d, Height = %.2f\n", person3.name, person3.age, person3.height);

    return 0;
}
