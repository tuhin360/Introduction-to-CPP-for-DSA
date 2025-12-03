#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "Total marks of " << name << " = " << math+english << endl; 
    }
};

int main()
{
    Student sakib("Sakib ahmed", 20, 70, 84);
    sakib.total();
    Student rakib("Rakib ahmed", 25, 96, 88);
    rakib.total();

    return 0;
}