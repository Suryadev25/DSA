// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ll num;
//     cout << "Enter a number" << endl;
//     cin >> num;
//     int count = 0;
//     for (ll i = 2; i <= num; i++)
//     {
//         if (num % i == 0)
//             count += 1;
//     }
//     if (count == 1)
//         cout << "It is a prime number\n";
//     else
//         cout << "It isn't a prime number\n";
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int prime(int num)
{
    int count = 0;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            count += 1;
        }
    }
    if (count == 1)
        return 1;
    return 0;
}
int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    while (num1 <= num2)
    {
        if (prime(num1))
        {
            cout << num1 << " ";
        }
        num1++;
    }
    return 0;
}