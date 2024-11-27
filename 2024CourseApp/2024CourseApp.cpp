// 南台 4B3G0132 徐勝益 程式設計作業5。
// 學生選課系統(Part2: ******類別)

#include <iostream>
#include<string>
#include "Person.h"
#include"Student.h"
using namespace std;

int main()
{
    Person person1("A123321", "汪", "小季", "男", "1999-10-10");
    //--------------(我是分隔島)---------------
    Person* person2 = new Person(); //指標
    person2->setId("B7654321");
    person2->setLastName("張");
    person2->setFirstName("凱七");
    person2->setGender("女");
    person2->setBirthDate("2024-01-05");
    //--------------(我是分隔島)---------------
    Student student1("A123321", "chen", "Jeo", "M", "1999-05-05", "S001", Department::CompeterSciece, ClassName::_1A);

    cout << "-----------------------------------" << endl;
    cout << "南台科大 4B3G0132 徐勝益 程式作業" << endl;
    cout << "學生選課系統(Part2: Student類別)" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    person1.display();
    cout << endl;
    person2->display();
    cout << endl;
    student1.display();
    cout << endl;
}

