# C Embedded
---------------------------------------------------------------------------------------------------------

<details>
  <summary>Embedded systems structure</summary>

  - **Application Software**: Phần mềm giao diện cho người dùng tương tác với hệ thống nhúng
  - **Middleware**: Lớp trung gian giúp kết nối phần mềm ứng dụng với hệ điều hành và phần cứng (VD: MQTT)
  - **Operating System**: Hệ điều hành dùng trong hệ thống nhúng, gồm:
    - **GPOS (General Purpose Operating System)**: Hệ điều hành đa nhiệm phổ biến như Linux hoặc Windows.
    - **RTOS (Real-Time Operating System)**: Hệ điều hành thời gian thực cho các nhiệm vụ cần đáp ứng nhanh.
  - **Firmware**: Phần mềm điều khiển phần cứng ở mức thấp (VD: Bootloader cho STM32).
  - **Processor**: Bộ xử lý trung tâm của hệ thống.
  - **Memory**: Bộ nhớ lưu trữ chương trình và dữ liệu.
  - **I/O Devices**: Thiết bị đầu vào/đầu ra như màn hình và bàn phím.
  - **Peripherals**: Thiết bị ngoại vi như máy in hoặc cảm biến.
  - **Sensors**: Cảm biến thu thập dữ liệu từ môi trường.
  - **Computer Buses**: Đường truyền tín hiệu.
  - **Signal Converters**: Bộ chuyển đổi tín hiệu.
  - **Actuators**: Bộ truyền động chuyển tín hiệu điều khiển thành hành động thực tế.
  - **Các giải pháp phần cứng phổ biến**:
    - **System on Chip (SoC)**: Tích hợp nhiều chức năng vào một con chip duy nhất.
    - **System on Module (SoM)**: Mô-đun phần cứng có thể tích hợp vào các hệ thống lớn hơn.

</details>

## Quá trình biên dịch C\C++
- Pre-processor: Trong giai đoạn này, tất cả các chỉ thị tiền xử lý (như #include, #define, v.v.) sẽ được xử lý. 
  Kết quả sau khi tiền xử lý là mã nguồn đã mở rộng, bao gồm các tệp tiêu đề và macro.

	+ Ví dụ: Bạn có một đoạn mã C đơn giản như sau:
	```
	#include <stdio.h>
	#define PI 3.14

	int main() {
		printf("Gia tri cua PI: %f\n", PI);
		return 0;
	}
	```
	Trong giai đoạn tiền xử lý, các chỉ thị như #include và #define sẽ được xử lý. Bộ tiền xử lý sẽ:
	+ Thay thế #include <stdio.h> bằng nội dung đầy đủ của tệp tiêu đề stdio.h
	+ Thay thế PI bằng giá trị 3.14 trong toàn bộ mã nguồn.
	Kết quả là mã nguồn sau khi tiền xử lý sẽ có dạng như sau:
	```
	// Nội dung đầy đủ của stdio.h được chèn vào đây...

	int main() {
		printf("Gia tri cua PI: %f\n", 3.14);
		return 0;
	}
	```
- Compiler: Sau khi hoàn thành tiền xử lý, mã nguồn C sẽ được chuyển thành mã Assembly (mã máy mức thấp hơn, gần với ngôn ngữ máy).
- Assembler: Mã Assembly sẽ được dịch tiếp thành mã máy (mã nhị phân) bởi trình dịch Assembler. Đây là mã mà CPU có thể hiểu và thực thi trực tiếp.
(VD: 0x55 0x89 0xe5 0x83 0xec 0x08 ...) Mã này là dạng mã nhị phân tương ứng với mã Assembly, nhưng nó không thể thực thi trực tiếp cho đến khi 
quá trình liên kết hoàn thành.
- Linker: trình liên kết (linker) sẽ kết hợp các tệp đối tượng và thư viện lại với nhau để tạo ra một tệp thực thi cuối cùng.
## Các kiểu dữ liệu trong C

| Kiểu Dữ Liệu (Data Type)    | Mô Tả (Description)                                                                 |
|-----------------------------|-------------------------------------------------------------------------------------|
| **Kiểu Dữ Liệu Cơ Bản**      | `int`, `char`, `float`, `double`, `short`, `long`, `long long`, `unsigned`         |
| **Kiểu Dữ Liệu Liệt Kê**     | `enum`: Các giá trị nguyên đặt tên                                                 |
| **Kiểu Dữ Liệu Tổ Hợp**      | `struct`, `union`, `array`, `pointer`: Các kiểu dữ liệu phức hợp                   |
| **Kiểu Dữ Liệu Void**        | `void`: Biểu thị không có giá trị trả về hoặc không có tham số                     |
| **Con Trỏ Hàm (Function Pointer)** | Lưu trữ địa chỉ hàm, hữu ích cho các callback và xử lý sự kiện               |

[Code mẫu về enum](enum_datatype.c)
[Code mẫu về union](union_datatype.c)
[Code mẫu về struct](struct_datatype.c)
[Code mẫu về Pointer](Pointer_datatype.c)

- Kiểu dữ liệu số nguyên

| Type                | Memory (in Bytes) | Range                          | Format specifier |
|---------------------|-------------------|--------------------------------|------------------|
| short int           | 2                 | -32768 to 32767                | %hd              |
| unsigned short int  | 2                 | 0 to 65535                     | %hu              |
| unsigned int        | 4                 | 0 to 4294967295                | %u               |
| int                 | 4                 | -2147483648 to 2147483647      | %d               |
| long int            | 8                 | -2147483648 to 2147483647      | %ld              |
| unsigned long int   | 8                 | 0 to 4294967295                | %lu              |
| long long int       | 8                 | -(2^63) to (2^63)-1            | %lld             |
| unsigned long long int | 8              | 0 to 18446744073709551615      | %llu             |

- Kiểu số thực

| Type         | Storage size | Value range                           |
|--------------|--------------|---------------------------------------|
| float        | 4 byte       | 1.2E-38 to 3.4E+38                    |
| double       | 8 byte       | 2.3E-308 to 1.7E+308                  |
| long double  | 10 byte      | 3.4E-4932 to 1.1E+4932                |

- Kiểu dữ liệu Char

| Type          | Memory (in Bytes) | Range                    | Format specifier |
|---------------|-------------------|--------------------------|------------------|
| char          | 1                 | -128 to 127 or 0 to 255  | %c               |
| signed char   | 1                 | -128 to 127              | %c               |
| unsigned char | 1                 | 0 to 255                 | %c               |

