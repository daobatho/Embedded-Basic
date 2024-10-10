# Tạo Repository mới & cách đẩy file lên github
- sau khi tạo được new repository trên git, ta tạo 1 folder cục bộ trên máy
- liên kết folder với git 
	+ mở command line với quyền admi
	+ cd <đường dẫn đến folder>
	+ tạo git: ```git int```
	+ Thêm Remote Repository: ```git remote add origin https://github.com/username/repo.git ```
- Đẩy file lên git
	+ Thử kiểm tra trạng thái thay đổi: ```git status ```
	+ Thêm Tất cả Tệp vào Stage: ```git add .``` . Hoặc chỉ định riêng tệp cần đẩy lên git ```git add <tên mục> .```
	+ Commit Thay đổi:``` git commit -m "Nội dung mô tả"```
	+ Đẩy Thay đổi lên GitHub:```git push origin <tên_branch>```
