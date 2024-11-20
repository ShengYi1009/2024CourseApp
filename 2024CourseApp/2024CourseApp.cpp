// 南台 4B3G0132 徐勝益 程式設計作業5。
// 學生選課系統(Part1: Person類別)

#include <iostream>
#include<string>
#include "Person.h"
using namespace std;

int main()
{
    Person person1("A123321", "汪", "小季", "男", "1999-10-10");
    //--------------(我是分隔島)----------------------------------------------
    Person* person2 = new Person(); //指標
    person2->setId("B7654321");
    person2->setLastName("張");
    person2->setFirstName("凱七");
    person2->setGender("女");
    person2->setBirthDate("2024-01-05");

    cout << "-----------------------------------" << endl;
    cout << "南台科大 4B3G0132 徐勝益 程式作業" << endl;
    cout << "學生選課系統(Part1: Person類別)" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    person1.display();
    cout << endl;
    person2->display();
}

