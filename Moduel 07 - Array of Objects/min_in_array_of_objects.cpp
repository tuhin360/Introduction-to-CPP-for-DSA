#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

    return 0;
}


// input:
// 3
// sakib 15 89
// rakib 18 65
// akib 40 38


// output:
// akib 40 38