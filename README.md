# Coding_diary
Đề bài: Xây dựng chương trình nhập ma trận vuông cấp $n$ ($n \le 100$) từ bàn phím, ghi dữ liệu vào tệp văn bản MATRAN.TXT, sau đó đọc lại dữ liệu từ tệp vào mảng và hiển thị ra màn hình dưới dạng ma trận. 

Cấu trúc dữ liệu trong File MATRAN.TXT
- Dòng đầu tiên: Ghi số nguyên $n$ (kích thước ma trận).
- Các dòng tiếp theo: Ghi các hàng của ma trận, mỗi phần tử cách nhau ít nhất một khoảng trắng.

Tư duy giải thuật & Logic:
	Trong bài tập này, mình đã áp dụng tư duy quản lý dòng chảy dữ liệu để đảm bảo tính toàn vẹn của thông tin:
		Giai đoạn Nhập & Ghi (Input -> Staging -> Storage):Sử dụng biến trung gian value đóng vai trò như một vùng đệm (Buffer) để nhận dữ liệu từ bàn phím trước khi đổ vào kho lưu trữ MATRAN.TXT.Việc dùng biến tạm giúp tiết kiệm bộ nhớ RAM khi chỉ cần ghi dữ liệu vào file mà chưa cần xử lý phức tạp.
		Giai đoạn Đọc & Hiển thị (Storage -> RAM -> Dashboard):Dữ liệu từ file được tái cấu trúc vào mảng hai chiều x[100][100].Việc đưa dữ liệu vào mảng giúp máy tính có thể truy cập ngẫu nhiên các phần tử, phục vụ việc trình bày ma trận đẹp mắt với định dạng %10.1f.
		
Bài học kinh nghiệm (Lessons Learned)
	Quá trình debug bài tập này giúp mình rút ra những kiến thức nền tảng quan trọng:
		Lỗi scanf: Luôn nhớ dấu & trước tên biến để cung cấp địa chỉ ô nhớ cho hàm.
		Chế độ mở File: Sử dụng "w" (Write) để làm sạch dữ liệu cũ mỗi lần chạy, đảm bảo tính cập nhật của thông tin.
