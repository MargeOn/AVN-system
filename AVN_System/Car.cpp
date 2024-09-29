#include"Car.h"

// Hàm khởi tạo đối tượng Car
Car::Car() {
	this->dis = new Display();
	this->sou = new Sound();
	this->gen = new General();
}

// Hàm hủy đối tượng Car
Car::~Car() {
	if (this->dis == nullptr)
		delete this->dis;
	if (this->dis == nullptr)
		delete this->sou;
	if (this->dis == nullptr)
		delete this->gen;
}

// Phương thức trả về đối tượng Display của xe
Display* Car::getDisplay() {
	if (this->dis == nullptr) {
		this->dis = new Display();
	}
	return this->dis;
}

// Phương thức trả về đối tượng Sound của xe
Sound* Car::getSound() {
	if (this->sou == nullptr) {
		this->sou = new Sound();
	}
	return this->sou;
}

// Phương thức trả về đối tượng General của xe
General* Car::getGeneral() {
	if (this->gen == nullptr) {
		this->gen = new General();
	}
	return this->gen;
}

// Phương thức cập nhật thông tin chức năng của xe khi đã kiểm tra xe mới nhập
// trùng mã số cá nhân với List xe thì nhận biết được xe có tồn tại.
void Car::updateInfo(int typeOption, Car data) {
	// Cập nhật lại các thông tin chung của chủ xe như: tên chủ xe, tài khoản gmail, số km xe đi được và số km bảo dưỡng.
	this->car_name = data.car_name;
	this->email = data.email;
	this->odo = data.odo;
	this->service_remind = data.service_remind;
	// Cập nhật các giá trị của các chức năng Display, Sound, General tương ứng với các lựa chọn trong Menu2
	// mà người dùng muốn nhập.
	switch (typeOption)
	{
		// Trường hợp chọn nhập Display, cập nhật lại các mức sáng đèn trên xe
		case 1: 
			this->dis->set_light_level(data.dis->get_light_level());
			this->dis->set_screen_light_level(data.dis->get_screen_light_level());
			this->dis->set_taplo_light_level(data.dis->get_taplo_light_level());
			break;
		// Trường hợp chọn nhập Sound, cập nhật lại các mức âm thanh trên xe
		case 2:
			this->sou->set_media_level(data.sou->get_media_level());
			this->sou->set_call_level(data.sou->get_call_level());
			this->sou->set_navi_level(data.sou->get_navi_level());
			this->sou->set_notification_level(data.sou->get_notification_level());
			break;
		// Trường hợp chọn nhập General, cập nhật lại các thông tin múi giờ và ngôn ngữ trên xe
		case 3:
			this->gen->set_timeZone(data.gen->get_timeZone());
			this->gen->set_language(data.gen->get_language());
			break;
		// Trường hợp người dùng chưa chọn nhập 3 chức năng thì không cập nhật
		default:
			break;
	}
}



