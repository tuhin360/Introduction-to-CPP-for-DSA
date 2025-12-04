#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    int totalA = a.math_marks + a.eng_marks;
    int totalB = b.math_marks + b.eng_marks;

    if (totalA == totalB)
    {
        return a.id < b.id;
    }

    return totalA > totalB;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " "
             << a[i].id << " " << a[i].math_marks << " "
             << a[i].eng_marks << endl;
    }

    return 0;
}

// input:
// 5
// Munna 8 D 25 50 30
// Shojoy 9 E 26 40 50
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Bijoy 7 E 29 68 99

// output:
// Bijoy 7 E 29 68 99
// Asif 10 C 27 55 60
// Joy 9 G 28 66 45
// Shojoy 9 E 26 40 50
// Munna 8 D 25 50 30