#pragma once
using namespace std;

#include<iostream>

enum class Department {
	CompeterSciece,
	ElectricalEngineering,
	ElectronicEngineering,
	InfromatintManagement,
};

enum class ClassName {
	_1A,
	_1B,
	_2A,
	_2B,
	_3A,
	_3B,
	_4A,
	_4B,
};
class Utility {
public:
	static string toString(Department department) {
		switch (department) {
		case Department::CompeterSciece:
			return "資訊工程";
		case Department::ElectricalEngineering:
			return "電機工程";
		case Department::ElectronicEngineering:
			return "電子工程";
		case Department::InfromatintManagement:
			return "資訊管理";
		default:
			return "未知";
		}
	}
	static string toString(ClassName className) {
		switch (className) {
		case ClassName::_1A:
			return "1甲";
		case ClassName::_1B:
			return "1甲";
		case ClassName::_2A:
			return "2甲";
		case ClassName::_2B:
			return "2乙";
		case ClassName::_3A:
			return "3甲";
		case ClassName::_3B:
			return "3乙";
		case ClassName::_4A:
			return "4甲";
		case ClassName::_4B:
			return "4乙";
		}
	}
};