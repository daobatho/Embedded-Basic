#include<stdio.h>
#include<stdarg.h>
/*int add(int n, ...){
    va_list args;
    int i, sum=0;
    va_start(args, n);
    for(i=0; i<n ;i++){
        sum+=va_arg(args,int);
    }
    va_end(args);
    return sum;
}
int main(){
    printf("sum=%d\n",add(5,1,2,3,4,5));
    return 0;
}
*/

void myprint(const char *fomat, ...){
    va_list args;
    va_start(args, fomat);
    //Duyệt qua từng ký tự trong chuỗi
    for(const char *ptr=fomat; *ptr != '\0'; *ptr++){
        if(*ptr=='%'){
            ptr++; //di chuyển con trỏ
            if(*ptr=='d'){
                int intValue =va_arg(args, int); //lấy tham số int
                printf("%d", intValue);          // in ra kiểu giá trị int
            }else{
                if(*ptr=='f'){
                    double doubleValue =va_arg(args,double);    //lấy tham số double
                    printf("%f", doubleValue);                 // in ra kiểu giá trị double
                 }
            }
        }else{
            putchar(*ptr); //in ra ký tự bình thường
        }
    }
    va_end(args);
}

int main(){
    int intValue=10;
    double doubleValue=3.14159;
    // gọi hàm myprint với các tham số khác nhau
    myprint("Giá trị nguyên: %d\n", intValue);
    myprint("Giá trị thực: %f\n", doubleValue);
    myprint("Hỗn hợp: %d và %f\n", intValue, doubleValue);
    return 0;
}

// #include <stdio.h>
// #include <stdarg.h>
// int solonnhat(int count, ...) {
//     va_list args;
//     va_start(args, count);
//     int max = va_arg(args, int);
//     for (int i = 1; i < count; i++) {
//         int num = va_arg(args, int);
//         if (num > max) {
//             max = num;
//         }
//     }
//     va_end(args);
//     return max;
// }
// int main() {
//     int max = solonnhat(5,2,4,6,8,10);
//     printf("Số lớn nhất là: %d\n", max);
//     return 0;
// }