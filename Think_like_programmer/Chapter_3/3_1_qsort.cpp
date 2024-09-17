/*
Writes a program which uses sort to sort an array of student struct,
first by grade then by ID
Struct student
{
    int grade;
    int ID;
    string name;
}

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct student
{
    int grade;
    int ID;
    string name;
};

int compareByGrade(const student &a, student &b)
{
    return a.ID < b.ID;
}

int compareByID(const student &a, student &b)
{
    return a.ID < b.ID;
}

int main()
{
    student students[5] = {
        {90, 4, "Alice"},
        {85, 67, "Bob"},
        {95, 1, "Charlie"},
        {80, 3, "David"},
        {70, 8, "Eve"}};

    int n = sizeof(students) / sizeof(students[0]);

    sort(students, students + n, compareByGrade);
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " has Grade: " << students[i].grade << "\n";
    }
    cout << endl;
    sort(students, students + n, compareByID);
    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " has ID: " << students[i].ID << "\n";
    }
    return 0;
}