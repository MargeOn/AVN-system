#pragma once
#include"Display.h"
#include"Sound.h"
#include"General.h"
#include"Setting.h"
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class Car : public Setting
{
public:
	// Hàm khởi tạo đối tượng Car
	Car();
	// Hàm hủy đối tượng Car
	~Car();
	// Phương thức trả về các đối tượng chức năng của xe
	Display* getDisplay();
	Sound* getSound();
	General* getGeneral();
	// Phương thức cập nhật thông tin chức năng của xe
	void updateInfo(int typeOption, Car data);
private:
	Display* dis;
	Sound* sou;
	General* gen;
};
