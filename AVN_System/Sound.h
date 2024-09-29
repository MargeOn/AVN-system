#pragma once
#include<iostream>
#include<iomanip>
#include"Regrex.h"
using namespace std;

class Sound 
{
public:
	// Hàm khởi tạo đối tượng Sound
	Sound();
	// Hàm hủy đối tượng Sound
	~Sound();
	// Phương thức nhập thông tin chức năng Sound
	void nhapThongTinChucNang();
	// Phương thức xuất thông tin chức năng Sound
	void xuatThongTinChucNang();
	// Phương thức lấy các biến thành viên của đối tượng Sound của xe
	int get_media_level();
	int get_call_level();
	int get_navi_level();
	int get_notification_level();
	// Phương thức cài đặt giá trị cho các biến thành viên của đối tượng Sound của xe
	void set_media_level(int data);
	void set_call_level(int data);
	void set_navi_level(int data);
	void set_notification_level(int data);
private:
	int media_level;
	int call_level;
	int navi_level;
	int notification_level;
};
