#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    bool found = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}



// input:
// Rahat Rifat Sakib Asif Sifat Jessica Ratul Munna

// output: 
// YES

// input:
// Rahat Rifat Sakib Asif jessica Sifat Ratul Munna

// output: 
// NO