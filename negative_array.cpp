// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "n" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "arr" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//*********************Quick Sort*****************************

// #include <bits/stdc++.h>
// using namespace std;

// int partition(int arr[], int l, int r)
// {
//     int i = l - 1;
//     int pivot = arr[r];
//     for (int j = l; j < r; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[r]);
//     return i + 1;
// }
// void quick_sort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pivot = partition(arr, low, high);
//         quick_sort(arr, low, pivot - 1);
//         quick_sort(arr, pivot + 1, high);
//     }
// }
// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {-1, -9, 9, -7, 2, -8, -4, 6, 8, 2, 1, 0, -2, -5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quick_sort(arr, 0, n - 1);
//     print(arr, n);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-2, -9, 5, -7, -6, 6, -1, 1, -5, 3, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = -1;
    int pivot = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}