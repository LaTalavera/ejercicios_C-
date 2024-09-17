#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() : name(""), age(0), rate(0){}

Student::Student(string name, int age, float rate)
    : name(name), age(age), rate(rate) {}

string Student::getname()
{
    return name;
}

void Student::setname(string name)
{
    this->name = name;
}

int Student::getage()
{
    return age;
}

void Student::setage(int age)
{
    this->age = age;
}

float Student::getrate()
{
    return rate;
}

void Student::setrate(float rate)
{
    this->rate = rate;
}

void Student::showInfo()
{
    cout << "name: " << name << ", age: " << age << ", rate: " << rate << endl;
}
