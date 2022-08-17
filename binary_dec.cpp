// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     int binary;
//     cout << "Enter the binary number" << endl;
//     cin >> binary;
//     int ans = 0, decimal = 1, rem;
//     while (binary != 0)
//     {
//         rem = binary % 10;
//         ans += rem * decimal;
//         binary /= 10;
//         decimal *= 2;
//     }
//     cout << ans << endl;
//     return 0;
// }

//decimal to binary//
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int decimal;
    cout << "Enter the number\n";
    cin >> decimal;
    vector<ll> vec;
    while (decimal > 0)
    {

        vec.push_back(decimal % 2);
        decimal /= 2;
    }
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i];
    }
    return 0;
}