#pragma once
#include <string>
using namespace std;

class Student
{
private:
    std::string name;
    int age;
    float rate;

public:
    //default constructor
    Student() = default;
    //Constructor with args
    Student(string name, int age, float rate);
    string getname();
    void setname(std::string name);
    int getage();
    void setage(int age);
    float getrate();
    void setrate(float rate);
    void showInfo();
};
