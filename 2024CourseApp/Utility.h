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
			return "��T�u�{";
		case Department::ElectricalEngineering:
			return "�q���u�{";
		case Department::ElectronicEngineering:
			return "�q�l�u�{";
		case Department::InfromatintManagement:
			return "��T�޲z";
		default:
			return "����";
		}
	}
	static string toString(ClassName className) {
		switch (className) {
		case ClassName::_1A:
			return "1��";
		case ClassName::_1B:
			return "1��";
		case ClassName::_2A:
			return "2��";
		case ClassName::_2B:
			return "2�A";
		case ClassName::_3A:
			return "3��";
		case ClassName::_3B:
			return "3�A";
		case ClassName::_4A:
			return "4��";
		case ClassName::_4B:
			return "4�A";
		}
	}
};