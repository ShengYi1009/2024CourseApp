// 南台 4B3G0132 徐勝益 程式設計作業5。
// 學生選課系統(Part1: Person類別)

#include "Person.h"
#include <string>
#include<iostream>

using namespace std;

// Constructor 建構函數
//Person::Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate)
//{
//    this->id = id;
//    this->lastName = lastName;
//    this->firstName = firstName;
//    this->gender = gender;
//    this->birthDate = birthDate;
//}     第一種寫法

Person::Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate) : id(id), lastName(lastName), firstName(firstName), gender(gender), birthDate(birthDate)
{
}

Person::Person()
{
}


string Person::getId() const
{
    return id;
}

string Person::getLastName() const
{
    return lastName;
}

string Person::getFirstName() const
{
    return firstName;
}

string Person::getGender() const
{
    return gender;
}

string Person::getBirthDate() const
{
    return birthDate;
}

void Person::setId(const string& id)
{
    this->id = id;
}

void Person::setLastName(const string& lastName)
{
    this->lastName = lastName;
}

void Person::setFirstName(const string& firstName)
{
    this->firstName = firstName;
}

void Person::setGender(const string& gender)
{
    this->gender = gender;
}

void Person::setBirthDate(const string& birthDate)
{
    this->birthDate = birthDate;
}

void Person::display() const //把資料印出來
{
    cout << "身分證字號: " << id << endl;
    cout << "姓: " << lastName << endl;
    cout << "名: " << firstName << endl;
    cout << "性別: " << gender << endl;
    cout << "出生年月日(西元年): " << birthDate << endl;
}
