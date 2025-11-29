#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    cin.ignore();    // it ignore Enter
    getline(cin, s); // take input line with space
    cout << x << endl
         << s << endl;
    return 0;
}

// input:
//  44
//  hello world

// output:
// 44
// hello world