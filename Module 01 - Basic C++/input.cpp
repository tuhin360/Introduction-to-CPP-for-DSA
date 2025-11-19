#include <iostream>
using namespace std;
int main()
{

    int x;
    char c;
    cin >> x >> c;
    cout << x << " " << c<< endl;

    char ch = 'a';
    int ascii = ch;
    cout << ascii << endl;

    //typecasting
    char ch2 ='b';
    int y = 65;
    cout << (int)ch2 << " "<< endl << y << endl;
    return 0;
}