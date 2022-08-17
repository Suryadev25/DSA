// #include <bits/stdc++.h>
// using namespace std;

// void duplicate(int arr[], int n)
// {
//     sort(arr, arr + n);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             cout << arr[i] << endl;
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 3, 2, 4, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     duplicate(arr, n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}
int main()
{
    int arr[] = {1, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<duplicate(arr, n);
    return 0;
}