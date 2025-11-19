#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;

    cout << min({25, 34, 54, 66, 75}) << endl;
    cout << max({25, 34, 54, 66, 75}) << endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}