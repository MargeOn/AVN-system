PROJECT: HỆ THỐNG CÀI ĐẶT AVN(AUDIO, VIDEO, NAVIGATION) TRÊN Ô TÔ

Project này sẽ có một hệ thống để quản lí thông tin các người dùng ô tô khi họ cài đặt hệ thống AVN cho xe. Project được lập trình 
bằng C++ và chạy trên Visual Studio IDE. 
Project bao gồm các kiến thức đã sử dụng như:
- Con trỏ nâng cao
- Nhập xuất dữ liệu
- Hàm, tham trị, tham chiếu
- Sắp xếp, tìm kiếm
- STL container: vector
- Các tính chất của hướng đối tượng: kế thừa, đa hình
- Sử dụng regex để kiểm tra việc nhập dữ liệu có hợp lệ hay không hợp lệ
- Kiểm soát ngoại lệ (exception handling)
- Thao tác đọc ghi file.
--------------------------------------------------------------------------------------------------------------------------------
Cấu trúc hệ thống có:
- Hàm main()
- Lớp Car
- Lớp Setting
- Lớp Display
- Lớp Sound
- Lớp General
- Lớp DataFile
- Các hàm kiểm tra định dạng dữ liệu
--------------------------------------------------------------------------------------------------------------------------------
- Cấu trúc chương trình: Mỗi xe sẽ có các thông số như tên xe, mã số cá nhân, email người sử dụng, ODO, thông tin km cần đến để
 bảo dưỡng xe và 3 chức năng Display, Sound, General. Cụ thể như sau:
	• Display: Liên quan đến việc hiển thị trên màn hình và cài đặt các giá trị như light level, 
		screen light level, taplo light level.
	• Sound: Liên quan về hệ thống âm thanh và cài đặt các giá trị âm thanh cho: Media volume level, Call volume level, 
		Navigation volume level, Notification volume level.
	• General: Gồm các cài đặt chung cho hệ thống AVN như thời gian, ngôn ngữ.

► Chức năng tải các thông tin từ file Setting.txt để cập nhật các xe được lưu trong file khi chương trình bắt đầu:
	- Nếu có thông tin thì thực hiện đọc file và đưa dữ liệu vào chương trình để thực hiện cập nhật và hiển thị dữ liệu
	theo các chức năng.
	- Nếu không thì vào chương trình chính

► Nhập thông tin các xe trong hệ thống: 
	     1. Mỗi xe sẽ nhập thông tin người dùng trước. Nếu MSCN của người dùng trùng với MSCN đã có trong danh sách thì cập nhật
		lại thông tin người dùng trong danh sách.
	     2. Đưa ra màn hình lựa chọn nhập một trong ba chức năng Display, Sound hoặc General
	     3. Khi lựa chọn nhập thông tin General, chương trình sẽ hiển thị một bảng lựa chọn múi giờ và ngôn ngữ được tải lên từ 
		file Timezone.txt và Language.txt để cho người dùng lựa chọn
	     4. Khi nhập xong một trong ba thông tin trên thì thông tin của người dùng đó đã được lưu vào hệ thống. Các thông tin chưa
		nhập vào sẽ có giá trị mặc định là 0.
	     5. Đồng thời, các thông tin của xe sẽ được cập nhật và đồng bộ với file Setting.txt để có thể tải lên vào lần chạy chương
		trình tới.
	     6. Khi nhập xong sẽ quay lại màn hình lựa chọn nhập, xuất. Nếu lựa chọn nhập thông tin một lần nữa và nhập thông tin người
		dùng xe thì ta lại kiểm tra MSCN của người dùng đó đã có trong danh sách hay không và thao tác như bước 1.

► Xuất thông tin các xe trong hệ thống: 
	     1. Khi lựa chọn hiển thị thông tin các xe trong danh sách, ta đến màn hình lựa chọn hiển thị 1 trong 4 lựa chọn như:
		- Hiển thị thông tin người dùng và display.  
		- Hiển thị thông tin người dùng và sound
		- Hiển thị thông tin người dùng và general.  
		- Hiển thị tất cả thông tin người dùng.  
	     2. Lựa chọn tương ứng sẽ hiển thị ra thông tin người dùng tương ứng


