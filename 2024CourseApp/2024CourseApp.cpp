// 南台 4B3G0132 徐勝益 程式設計作業8。
// 學生選課系統(Part 3: Record類別)

#include <iostream>
#include <string>
#include <vector>
#include "Record.h"
#include "Person.h"
#include "Student.h"
#include "Course.h"
#include "Teacher.h"
#include "2024CourseApp.h"
using namespace std;

vector<Record> records;
vector<Student> students;
vector<Course> courses;
vector<Teacher> teachers;



int main()
{
    InitializeData();
	DisplayMenu();
}

void InitializeData()
{
    //Person person1("A123321", "汪", "小季", "男", "1999-10-10");
    ////--------------(我是分隔島)---------------
    //Person* person2 = new Person(); //指標
    //person2->setId("B7654321");
    //person2->setLastName("張");
    //person2->setFirstName("凱七");
    //person2->setGender("女");
    //person2->setBirthDate("2024-01-05");
    ////--------------(我是分隔島)---------------
    //Student student1("A123321", "chen", "Jeo", "M", "1999-05-05", "S001", Department::CompeterSciece, ClassName::_1A);
    ////--------------(我是分隔島)---------------
    //Course course1("C001", "C++ Programming", "這門課程教授C++程式語言");
    //Course course2("C002", "Java Programming", "這門課程教授Java程式語言");
    //Course course3("C003", "Python Programming", "這門課程教授Python程式語言");
    ///*course1.display();
    //course2.display();
    //course3.display();*/

    //vector<Course> teacher1_courses = { course1, course2, course3 };
    ////--------------(我是分隔島)---------------
    //Teacher teacher1("032", "阿益", "張", "男", "1949-02-28", "A301", Department::CompeterSciece, ClassName::_4A, { teacher1_courses });

    //cout << "-----------------------------------" << endl;
    //cout << "南台科大 4B3G0132 徐勝益 程式作業" << endl;
    //cout << "學生選課系統(Part3: Teacher類別)" << endl;
    //cout << "-----------------------------------" << endl;
    //cout << endl;
    ///*person1.display();
    //cout << endl;
    //person2->display();
    //cout << endl;
    //student1.display();
    //cout << endl;*/
    //course1.display();
    //cout << endl;
    //teacher1.display();
    //cout << endl;

	courses.push_back(Course("C001", "C++ Programming", "這門課程教授C++程式語言"));
	courses.push_back(Course("C002", "Java Programming", "這門課程教授Java程式語言"));
	courses.push_back(Course("C003", "Python Programming", "這門課程教授Python程式語言"));
	courses.push_back(Course("C004", "C# Programming", "這門課程教授C#程式語言"));
	courses.push_back(Course("C005", "Visual Basic Programming", "這門課程教授Visual Basic程式語言"));

	//新增5筆學生資料
	students.push_back(Student("A123321", "陳", "小明", "男", "1999-05-05", "S001", Department::CompeterSciece, ClassName::_1A));
	students.push_back(Student("B234567", "林", "小華", "男", "1999-06-06", "S002", Department::ElectricalEngineering, ClassName::_1A));
	students.push_back(Student("C345678", "黃", "小美", "女", "1999-07-07", "S003", Department::ElectronicEngineering, ClassName::_1A));
	students.push_back(Student("D456789", "張", "小強", "男", "1999-08-08", "S004", Department::InfromatintManagement, ClassName::_1A));
	students.push_back(Student("E567890", "王", "小菁", "女", "1999-09-09", "S005", Department::CompeterSciece, ClassName::_1A));

	//新增2筆教師資料
	vector<Course> teacher1_courses = { courses[0], courses[1], courses[2] };
	teachers.push_back(Teacher("032", "阿益", "張", "男", "1949-02-28", "A301", Department::CompeterSciece, ClassName::_4A, teacher1_courses));
	vector<Course> teacher2_courses = { courses[3], courses[4] };
	teachers.push_back(Teacher("033", "阿貴", "李", "男", "1950-03-01", "A302", Department::CompeterSciece, ClassName::_3A, teacher2_courses));

	//新增10筆選課紀錄
	records.push_back(Record("S001", "C001"));
	records.push_back(Record("S001", "C002"));
	records.push_back(Record("S001", "C003"));
	records.push_back(Record("S002", "C001"));
	records.push_back(Record("S002", "C002"));
	records.push_back(Record("S002", "C003"));
	records.push_back(Record("S003", "C001"));
	records.push_back(Record("S003", "C002"));
	records.push_back(Record("S003", "C003"));
	records.push_back(Record("S004", "C001"));




}

void DisplayMenu()
{
	int choice;
	do
	{
		cout << "-----------------------------------" << endl;
		cout << "南台科大 4B3G0132 徐勝益 程式作業" << endl;
		cout << "學生選課系統(Part 3: Record類別)" << endl;
		cout << "-----------------------------------" << endl;
		cout << "1. 顯示所有學生資料" << endl;
		cout << "2. 顯示所有課程資料" << endl;
		cout << "3. 顯示所有教師資料" << endl;
		cout << "4. 顯示所有選課紀錄" << endl;
		cout << "0. 結束" << endl;
		cout << "請輸入選項：";
		cin >> choice;
		system("CLS"); // 清空畫面
		switch (choice)
		{
		case 1:
			listStudents();
			break;
		case 2:
			listCourses();
			break;
		case 3:
			listTeachers();
			break;
		case 4:
			listRecords();
			break;
		case 0:
			cout << "程式結束！" << endl;
			break;
		default:
			cout << "輸入錯誤！" << endl;
			break;
		}
	} while (choice != 0);
}

void listRecords()
{
	cout << "選課紀錄總共有" << records.size() << "筆" << endl;
	cout << "----------------" << endl;
	for (auto record : records) {
		record.display();
		cout << endl;
	}
	cout << endl;
}

void listTeachers()
{
	cout << "教師資料總共有" << teachers.size() << "筆" << endl;
	cout << "----------------" << endl;
	for (auto teacher : teachers) {
		teacher.display();
		cout << endl;
	}
	cout << endl;
}

void listCourses()
{
	cout << "課程資料總共有" << courses.size() << "筆" << endl;
	cout << "----------------" << endl;
	for (auto course : courses) {
		course.display();
		cout << endl;
	}
	cout << endl;
}

void listStudents()
{
	cout << "學生資料總共有" << students.size() << "筆" << endl;
	cout << "----------------" << endl;
	for (auto student : students) {
		student.display();
		cout << endl;
	}
	cout << endl;
}