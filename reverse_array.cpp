// #include <bits/stdc++.h>
// using namespace std;
// void reverse(int arr[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     reverse(arr,0,n-1);
//     print(arr , n);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {1, 2, 3};
//     reverse(v.begin(), v.end());
//     for (auto val : v)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int x, int y, int n)
{
    while (x < y)
    {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        x++;
        y--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, 0, n - 1, n);
    return 0;
}