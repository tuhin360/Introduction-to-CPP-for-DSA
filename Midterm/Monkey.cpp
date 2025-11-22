#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        string letter;
        for (char c : line)
        {
            if (c >= 'a' && c <= 'z')
            {
                letter.push_back(c);
            }
        }

        sort(letter.begin(), letter.end());
        cout << letter << endl;
    }

    return 0;
}