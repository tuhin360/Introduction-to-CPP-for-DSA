#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, x;
        cin >> s >> x;

        while (s.find(x) != string::npos) {
            s.replace(s.find(x), x.size(), "#");
        }

        cout << s << endl;
    }
}



// input:
// 2
// rahimisagoodguy good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you


// output:
// rahimisa#guy
// can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer
