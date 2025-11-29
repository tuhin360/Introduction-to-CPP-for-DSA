#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << i << " -> " << s[i] << endl;
    // }

    for (auto it = s.begin(); it<s.end(); it++)
    {
        cout << *it << endl;
    }

    
    return 0;
}