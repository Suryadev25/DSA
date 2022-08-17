#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cout << "Enter string" << endl;
    // cin >> s;
    getline(cin, s);
    string str = s.substr(3, 5);
    cout << str << endl;
    return 0;
}