#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {

        Student a[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i].id >> a[i].name >> a[i].section >> a[i].total_marks;
        }

        int maxIndex = 0;

        for (int i = 1; i < 3; i++)
        {
            if (a[i].total_marks > a[maxIndex].total_marks)
            {
                maxIndex = i;
            }
            else if (a[i].total_marks == a[maxIndex].total_marks && a[i].id < a[maxIndex].id)
            {
                maxIndex = i;
            }
        }

        cout << a[maxIndex].id << " "
             << a[maxIndex].name << " "
             << a[maxIndex].section << " "
             << a[maxIndex].total_marks << endl;
    }

    return 0;
}
