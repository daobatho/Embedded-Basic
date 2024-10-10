# Ubuntu-Linux
----
## Thay Đổi Tên Người Dùng
- Mở Terminal: Mở WSL (Ubuntu 22.04) của bạn.
- Đổi sang chế độ root: Gõ lệnh sau để chuyển sang chế độ người dùng root (nếu bạn chưa ở chế độ này): 
```sudo -i``` 
Nhập mật khẩu của bạn nếu được yêu cầu.
- Tạo Người Dùng Mới``` adduser --force-badname ThoDB```
- Cấp quyền sudo cho người dùng mới: Để người dùng ThoDB có quyền sudo, bạn cần thêm họ vào nhóm sudo: ```usermod -aG sudo ThoDB```
- Đăng xuất khỏi tài khoản root: ```exit```
- Đăng nhập với người dùng mới: Bây giờ bạn có thể đăng nhập với người dùng ThoDB bằng cách sử dụng lệnh sau: ```su - ThoDB```

## (Tùy Chọn) Thay Đổi Tên Máy Tính
- Mở file hostname:
```sudo nano /etc/hostname```
Thay thế tên máy tính hiện tại bằng ThoDB.
- Cập nhật file hosts:
```sudo nano /etc/hosts```
Tìm dòng bắt đầu bằng 127.0.1.1 và thay thế tên máy tính hiện tại bằng ThoDB.
- Khởi động lại WSL:
```wsl --shutdown```

## Các lệnh khác
- Tạo thư mục: ```mkdir <tên_thư_mục>```
	+ Lưu ý: Không sử dụng các ký tự !, @, #, $, %, ,, v.v.,
	+ Trong tên không được có khoảng trắng.
- Xóa thư mục:```rmdir <tên_thư_mục>```. Chú ý: Lệnh rmdir chỉ xóa được thư mục trống. Nếu thư mục chứa bất kỳ tệp 
hoặc thư mục con nào, lệnh này sẽ không hoạt động.
	+ Sử dụng rm với tùy chọn -r: ```rm -r [tên_thư_mục]```. Chú ý: Tùy chọn -r (recursive) cho phép bạn xóa một 
	thư mục và tất cả các tệp và thư mục con bên trong nó.
	+ Xóa thư mục không hỏi xác nhận: ```rm -rf [tên_thư_mục]```. Cẩn thận khi sử dụng: Lệnh rm -rf rất mạnh mẽ và
	có thể xóa bất kỳ thứ gì mà không có khả năng khôi phục. Hãy chắc chắn rằng bạn không xóa nhầm thư mục quan trọng.
- Liệt kê nội dung thư mục: ```ls``



