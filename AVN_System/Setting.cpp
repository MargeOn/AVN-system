﻿#include"Setting.h"

Setting::Setting()
{
	car_name = "";
	email = "";
	personal_key = "";
	odo = 0;
	service_remind = 0;
}
Setting::~Setting()
{

}
// Phương thức nhập thông tin chủ xe
void Setting::inputInfoCom() {
	string odo;
	string service;
	do
	{
		cout << "Ownname: ";
		getline(cin, this->car_name);
		if (!Regrex(Name, this->car_name))
		{
			cout << "\nTen chu xe khong phu hop hoac khong co nghia! " << endl;
			system("pause");
		}
	} while (!Regrex(Name, this->car_name));
	do
	{
		cout << "Email: ";
		getline(cin, this->email);
		if (!Regrex(Email, this->email))
		{
			cout << "\nTen email phai la dinh dang email@abc.xyz ! " << endl;
			system("pause");
		}
	} while (!Regrex(Email, this->email));
	do
	{
		cout << "Key number: ";
		getline(cin, this->personal_key);
		if (!Regrex(Key, this->personal_key))
		{
			cout << "\nMa so ca nhan phai la 1 so co du 8 chu so! " << endl;
			system("pause");
		}
	} while (!Regrex(Key, this->personal_key));
	do
	{
		cout << "ODO number: ";
		getline(cin, odo);
		if (!Regrex(Odo, odo))
		{
			cout << "ODO number phai la 1 so va khong qua 1.000.000km! " << endl;
			system("pause");
		}
		else
		{
			this->odo = stoi(odo);
		}
	} while (!Regrex(Odo, odo));
	do
	{
		cout << "Remind service: ";
		getline(cin, service);
		if (!Regrex(Service, service))
		{
			cout << "\nRemind service phai la 1 so tu 1.000km den 5.000km! " << endl;
			system("pause");
		}
		else
		{
			this->service_remind = stoi(service);
		}
	} while (!Regrex(Service, service));
}

// Phương thức xuất thông tin chủ xe
void Setting::outputInfoCom() {
	cout << setw(20) << this->car_name
		<< setw(25) << this->email
		<< setw(10) << this->personal_key
		<< setw(10) << this->odo
		<< setw(10) << this->service_remind;
}

// Phương thức lấy cho các thông tin của  chủ xe
string Setting::getCarName() {
	return car_name;
}
string Setting::getEmail() {
	return email;
}
string Setting::getPersonalKey() {
	return personal_key;
}
int Setting::getODO() {
	return odo;
}
int Setting::getServiceRemind() {
	return service_remind;
}

// Phương thức cài đặt giá trị cho các thông tin của chủ xe
void Setting::setCarName(string data) {
	this->car_name = data;
}
void Setting::setEmail(string data) {
	this->email = data;
}
void Setting::setPersonalKey(string data) {
	this->personal_key = data;
}
void Setting::setODO(int data) {
	this->odo = data;
}
void Setting::setServiceRemind(int data) {
	this->service_remind = data;
}