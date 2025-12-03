#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

// custom compare function
bool cmp(Student l, Student r)
{
    if (l.marks == r.marks)
    {
        return l.roll < l.roll;
    }
    else
    {
        return l.marks > r.marks;
    }
    // shortcut of above condition
    // return (l.marks == r.marks) ? l.roll < l.roll : l.marks > r.marks;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

// input:
// 6
// sakib 15 89
// rakib 18 65
// akib 40 38
// jakir 22 74
// manik 27 74
// rahim 16 65

// output:
// sakib 15 89
// jakir 22 74
// manik 27 74
// rakib 18 65
// rahim 16 65
// akib 40 38
