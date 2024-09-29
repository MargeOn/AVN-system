#pragma once
#include<iostream>
#include<iomanip>
#include<vector>
#include"DataFile.h"
#include"Regrex.h"

using namespace std;

extern DataFile timezoneList[32];
extern DataFile languageList[30];

class General
{
public:
	// Hàm khởi tạo đối tượng General
	General();
	// Hàm hủy đối tượng General
	~General();
	// Phương thức nhập thông tin chức năng General
	void nhapThongTinChucNang();
	// Phương thức xuất thông tin chức năng General
	void xuatThongTinChucNang();	
	// Phương thức lấy các biến thành viên của đối tượng General của xe
	string get_language();
	string get_timeZone();
	// Phương thức cài đặt giá trị cho các biến thành viên của đối tượng General của xe
	void set_timeZone(string data);
	void set_language(string data);
	// Phương thức sắp xếp theo bảng chữ cái Tiếng Anh
	void AlphabetSort(Type general);
private:
	string timeZone;
	string language;
};
