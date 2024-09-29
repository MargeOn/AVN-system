#pragma once
#include<iostream>
#include<iomanip>
#include"Regrex.h"
using namespace std;

class Display
{
public:	
	// Hàm khởi tạo đối tượng Display
	Display();
	// Hàm hủy đối tượng Display
	~Display();
	// Phương thức nhập thông tin chức năng Display
	void nhapThongTinChucNang();
	// Phương thức xuất thông tin chức năng Display
	void xuatThongTinChucNang();
	// Phương thức lấy các biến thành viên của đối tượng Display của xe
	int get_light_level();
	int get_screen_light_level();
	int get_taplo_light_level();
	// Phương thức cài đặt giá trị cho các biến thành viên của đối tượng Display của xe
	void set_light_level(int data);
	void set_screen_light_level(int data);
	void set_taplo_light_level(int data);
private:
	int light_level;
	int screen_light_level;
	int taplo_light_level;
};
